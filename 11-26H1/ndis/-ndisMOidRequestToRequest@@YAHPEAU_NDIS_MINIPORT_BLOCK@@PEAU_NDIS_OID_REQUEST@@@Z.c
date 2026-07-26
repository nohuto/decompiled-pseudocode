/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086C20
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqDd @ 0x140022A20 (WPP_RECORDER_SF_qqDd.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        PVOID InformationBuffer)
{
  NDIS_OID Oid; // r15d
  struct _NDIS_OID_REQUEST *v4; // rbp
  unsigned int v6; // esi
  char v7; // r14
  __int64 Clock; // r12
  __int64 Pool2; // rdi
  __int64 v10; // rsi
  UINT BytesWritten; // ecx
  unsigned int Flags; // eax
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  _NDIS_REQUEST *PendingRequest; // r14
  char v19[4]; // [rsp+38h] [rbp-40h]
  char v20[4]; // [rsp+40h] [rbp-38h]

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v6 = -1073741823;
  v7 = 0;
  Clock = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v19);
  }
  if ( v4->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
  if ( Pool2 )
  {
    v10 = Pool2 + 64;
    *(_DWORD *)(Pool2 + 32) = v4->RequestType;
    InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
    LODWORD(a2) = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
    BytesWritten = v4->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(Pool2 + 40) = v4->DATA.QUERY_INFORMATION.Oid;
    *(_QWORD *)(Pool2 + 48) = InformationBuffer;
    *(_DWORD *)(Pool2 + 56) = (_DWORD)a2;
    *(_DWORD *)(Pool2 + 60) = BytesWritten;
    *(_DWORD *)(Pool2 + 64) = v4->DATA.QUERY_INFORMATION.BytesNeeded;
    *(_DWORD *)(Pool2 + 24) |= 0x400u;
    a1->PendingRequest = (_NDIS_REQUEST *)Pool2;
    Flags = a1->Flags;
    *(_QWORD *)(Pool2 + 8) = v4;
    if ( (Flags & 0x20000) != 0 )
    {
      v6 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler(
             a1->MiniportAdapterContext,
             0LL,
             (_NDIS_REQUEST *)Pool2);
LABEL_25:
      if ( v6 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        PendingRequest = a1->PendingRequest;
        a1->PendingRequest = 0LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( PendingRequest )
        {
          v4->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
          v4->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
          ExFreePoolWithTag(PendingRequest, 0);
        }
      }
      goto LABEL_28;
    }
    if ( (a1->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        KeStallExecutionProcessor(1u);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      }
      a1->LockAcquired = 1;
      a1->LockThread = KeGetCurrentThread();
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v10 = Pool2 + 64;
    }
    if ( HIBYTE(dword_14011EFA0) )
    {
      v7 = 1;
      ndisTraceDpcStart(a1, 8);
      Clock = WmiGetClock(0LL, 0LL);
    }
    v13 = *(_DWORD *)(Pool2 + 32);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        v15 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
                a1->MiniportAdapterContext,
                *(unsigned int *)(Pool2 + 40),
                *(_QWORD *)(Pool2 + 48),
                *(unsigned int *)(Pool2 + 56),
                Pool2 + 60,
                v10);
LABEL_20:
        v6 = v15;
        goto LABEL_21;
      }
      if ( v14 != 1 )
      {
        v6 = -1073741637;
LABEL_21:
        if ( v7 )
        {
          v16 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8, v16 - Clock);
        }
        if ( (a1->Flags & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->LockAcquired = 0;
          a1->LockThread = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        goto LABEL_25;
      }
    }
    v15 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
            a1->MiniportAdapterContext,
            *(unsigned int *)(Pool2 + 40),
            *(_QWORD *)(Pool2 + 48),
            *(unsigned int *)(Pool2 + 56),
            Pool2 + 60,
            v10);
    goto LABEL_20;
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v20 = v6;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)InformationBuffer,
      0x1Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)v4,
      Oid,
      *(_DWORD *)v20);
  }
  return v6;
}
