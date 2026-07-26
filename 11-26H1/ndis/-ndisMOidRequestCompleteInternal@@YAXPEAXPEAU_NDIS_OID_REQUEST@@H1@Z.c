/*
 * XREFs of ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x140052CB0 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14005C360 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14006BD10 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14006D070 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E7E0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140075990 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        struct _NDIS_OID_REQUEST *a4)
{
  int v4; // esi
  int v5; // esi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // r15
  _ULONG_REFERENCE *p_Ref; // rdi
  KIRQL v10; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v12; // bp
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  KIRQL v17; // dl
  int v18; // edx
  KIRQL v19; // al
  NDIS_REFCOUNT_HANDLE__ *v20; // r8
  KIRQL v21; // bp
  __int64 v22; // r9
  unsigned __int8 i; // al
  _BYTE *v24; // rdx
  char v25; // cl
  int v26; // esi
  int v27; // edx
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v29; // rsi
  unsigned int v30; // edx
  int v31; // ecx
  KIRQL v32; // dl
  KIRQL v33; // dl
  __int64 v34; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v35; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v38; // [rsp+60h] [rbp-38h]
  int v39; // [rsp+68h] [rbp-30h]
  int v40; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int8 v41; // [rsp+B0h] [rbp+18h] BYREF

  v4 = *(_DWORD *)&a2->NdisReserved[16];
  v37 = 0LL;
  v5 = v4 & 0x200000;
  v41 = 0;
  AllDirectRequestsCompletedEvent = 0LL;
  v36 = 0LL;
  v38 = a2;
  v39 = a3;
  p_Ref = &a1->Ref;
  v35 = a1;
  v40 = (a4 != 0LL) | 2;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v12 = v10;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x4Bu);
  v13 = p_Ref->ReferenceCount + 1;
  p_Ref->ReferenceCount = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v13);
  KeReleaseSpinLock(&p_Ref->SpinLock, v12);
  if ( a4 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v41);
    v32 = v41;
    a1->WSyncFlags &= ~1u;
    a1->ProcessedOidRequest = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v32);
  }
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v35, v14, v15, v16);
  v17 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v41 = v17;
  if ( v5 )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 && !a1->DirectOidRequestCount )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
    goto LABEL_11;
  }
  if ( a1->OidRequestList.Flink == &a1->OidRequestList )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 )
    {
      AllDirectRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
    }
LABEL_11:
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v17);
    if ( AllDirectRequestsCompletedEvent )
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
    goto LABEL_13;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v17);
  if ( (unsigned int)ndisQueueRequestWorkItem(a1, 0LL, 17) != 259 )
    ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v41);
  v33 = v41;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v33);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
  v20 = a1->RefCountTracker;
  v21 = v19;
  if ( v20 && (unsigned __int64)v20 - 2 > 1 )
  {
    if ( v20 == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *((_BYTE *)v20 + 2) <= 0x4Bu )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v20, 0x4BuLL);
    if ( *((_BYTE *)v20 + 1) )
    {
      if ( *((_BYTE *)v20 + 1) == 1 )
      {
        v29 = v20 + 1202;
        v30 = *((_DWORD *)v20 + 1216);
        v31 = (unsigned __int16)v30 >> 1;
        if ( v30 >> 17 < 0x3FFE && v31 == (v30 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v20 + 1202));
          *((_DWORD *)v29 + 14) &= 0x10001u;
        }
        else
        {
          if ( v31 == 0 && (v30 & 1) == 0 )
            ndisReportRefcountImbalance((ULONG_PTR)a1->RefCountTracker, 0x4Bu);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v20 + 1202), 0);
        }
      }
    }
    else
    {
      v22 = *((_QWORD *)v20 + 1);
      if ( v22 )
      {
        for ( i = 0; i < *((_BYTE *)v20 + 3); ++i )
        {
          v24 = (_BYTE *)(v22 + 2LL * i);
          if ( *v24 == 75 )
          {
            v25 = v24[1];
            if ( v25 )
            {
              v24[1] = v25 - 1;
              goto LABEL_30;
            }
          }
        }
      }
      if ( !_bittestandreset((signed __int32 *)v20 + 6, 0xBu) )
        ndisReportRefcountImbalance((ULONG_PTR)v20, 0x4Bu);
    }
  }
LABEL_30:
  v26 = p_Ref->ReferenceCount - 1;
  p_Ref->ReferenceCount = v26;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = v26;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v34);
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v21);
  if ( !v26 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  }
}
