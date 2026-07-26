/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140042140
 * Callers:
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400416B0 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x140041FD0 (NdisFDirectOidRequest.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x140022C70 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v5; // rsi
  KIRQL v9; // r15
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rbx
  KIRQL v11; // al
  KIRQL v12; // r15
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int v15; // ebx
  KSPIN_LOCK *p_SpinLock; // rdi
  KIRQL v17; // al
  KIRQL v18; // r14
  unsigned __int16 v19; // ax
  struct _NDIS_REFCOUNT_BLOCK *v20; // rcx
  unsigned __int8 v21; // bl
  __int64 v23; // [rsp+38h] [rbp-60h]
  _QWORD Parameter[4]; // [rsp+50h] [rbp-48h] BYREF
  KIRQL v25; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v25 = v9;
  if ( a3 )
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextDirectRequestHandle;
  else
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a2->Next.DirectRequestHandle;
  if ( a4 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&a4->PnPRef.SpinLock);
    v12 = v11;
    if ( a4->PnPRef.Closing )
    {
      KeReleaseSpinLock(&a4->PnPRef.SpinLock, v11);
    }
    else
    {
      ReferenceCount = a4->PnPRef.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        KeReleaseSpinLock(&a4->PnPRef.SpinLock, v12);
        a2->MiniportThread = 0LL;
        KeReleaseSpinLock(&a2->Lock, v25);
        v15 = -1073741670;
        goto LABEL_34;
      }
      RefCountTracker = a4->PnPRef.RefCountTracker;
      a4->PnPRef.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x12u);
      KeReleaseSpinLock(&a4->PnPRef.SpinLock, v12);
      if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      {
        NextDirectRequestHandle = a4;
        ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
      }
      else
      {
        if ( a4->NextDirectRequestHandle )
          NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
        ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
      }
    }
    v9 = v25;
  }
  if ( NextDirectRequestHandle->Header.Type != 5 )
  {
LABEL_20:
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v9);
    goto LABEL_21;
  }
  while ( 1 )
  {
    p_SpinLock = &NextDirectRequestHandle->PnPRef.SpinLock;
    v5 = NextDirectRequestHandle;
    v17 = KeAcquireSpinLockRaiseToDpc(&NextDirectRequestHandle->PnPRef.SpinLock);
    v18 = v17;
    if ( !NextDirectRequestHandle->PnPRef.Closing )
      break;
    KeReleaseSpinLock(p_SpinLock, v17);
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
    v5 = 0LL;
    if ( NextDirectRequestHandle->Header.Type != 5 )
      goto LABEL_20;
  }
  v19 = NextDirectRequestHandle->PnPRef.ReferenceCount;
  if ( v19 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    KeReleaseSpinLock(p_SpinLock, v18);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v9);
    v5 = 0LL;
    v15 = -1073741670;
LABEL_34:
    if ( v15 == 259 )
      goto LABEL_38;
    goto LABEL_35;
  }
  v20 = (struct _NDIS_REFCOUNT_BLOCK *)NextDirectRequestHandle->PnPRef.RefCountTracker;
  NextDirectRequestHandle->PnPRef.ReferenceCount = v19 + 1;
  NdisReferenceWithTag(v20, 0x10u);
  KeReleaseSpinLock(p_SpinLock, v18);
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v9);
  if ( NextDirectRequestHandle
    && !NextDirectRequestHandle->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
  {
    goto LABEL_22;
  }
LABEL_21:
  if ( a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
  {
    if ( v5 )
    {
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[1] = v5;
      Parameter[3] = a1;
      v15 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisFDoDirectOidRequestInternal,
             Parameter,
             (unsigned int)Size,
             0,
             0LL) >= 0 )
        v15 = Parameter[0];
    }
    else
    {
      v21 = (a2->Flags & 0x80) != 0;
      if ( !(unsigned __int8)ndisReferenceMiniport(a2, 0x49u) )
      {
        v15 = -1073741823;
        goto LABEL_38;
      }
      v15 = ndisMDoDirectOidRequest(a2, a1, v21);
      ndisDereferenceMiniport(a2, 0x49u);
    }
    goto LABEL_34;
  }
LABEL_22:
  v15 = -1073741637;
LABEL_35:
  if ( v5 )
    ndisDereferenceRef(&v5->PnPRef.SpinLock, 0x10u);
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v15;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      (char)a2,
      v23);
  }
  return v15;
}
