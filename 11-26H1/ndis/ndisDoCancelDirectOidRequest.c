/*
 * XREFs of ndisDoCancelDirectOidRequest @ 0x1400CCA6C
 * Callers:
 *     ndisFCancelDirectOidRequestInternal @ 0x1400CCC10 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisCancelDirectOidRequest @ 0x1400CCEF0 (NdisCancelDirectOidRequest.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ndisFInvokeCancelDirectOidRequest @ 0x1400CCD64 (ndisFInvokeCancelDirectOidRequest.c)
 *     ?ndisMInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400CCE28 (-ndisMInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 */

void __fastcall ndisDoCancelDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2, void *a3)
{
  bool v3; // bp
  struct _NDIS_FILTER_BLOCK *v5; // rdi
  struct _NDIS_FILTER_BLOCK *v7; // r15
  KSPIN_LOCK *NextDirectRequestHandle; // r14
  char v9; // bl
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  NewIrql = 0;
  v5 = a2;
  if ( !a2 || (v12 = 0, v3 = ndisReferenceRefEx(&a2->PnPRef.SpinLock, 4u, (enum _NDIS_REFERENCE_STATUS *)&v12)) )
  {
    while ( v5 )
    {
      if ( v5->FilterDriver->DefaultFilterCharacteristics.CancelDirectOidRequestHandler )
      {
        ndisFInvokeCancelDirectOidRequest((char)v5);
        break;
      }
      v7 = v5;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(v5, &NewIrql);
      NextDirectRequestHandle = (KSPIN_LOCK *)v5->NextDirectRequestHandle;
      v9 = *(_BYTE *)NextDirectRequestHandle;
      ndisDereferenceRef(&v5->PnPRef.SpinLock, 4u);
      v3 = 0;
      if ( v9 == 5 )
      {
        v12 = 0;
        v3 = ndisReferenceRefEx(NextDirectRequestHandle + 39, 4u, (enum _NDIS_REFERENCE_STATUS *)&v12);
        v5 = (struct _NDIS_FILTER_BLOCK *)((unsigned __int64)NextDirectRequestHandle & -(__int64)v3);
      }
      else
      {
        v5 = 0LL;
        a1 = (struct _NDIS_MINIPORT_BLOCK *)NextDirectRequestHandle;
      }
      v10 = NewIrql;
      v7->LockThread = 0LL;
      KeReleaseSpinLock(&v7->Lock, v10);
    }
    if ( a1
      && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a1->DriverHandle->MiniportDriverCharacteristics.CancelDirectOidRequestHandler
      && (!a1->SelectiveSuspend || ndisSetBusyAsync((__int64)a1, 1u, 0x33u, (__int64)a3, 0)) )
    {
      ndisMInvokeCancelDirectOidRequest(a1, a3);
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1, 51);
    }
  }
  if ( v3 )
    ndisDereferenceRef(&v5->PnPRef.SpinLock, 4u);
}
