/*
 * XREFs of ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016770 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140016830 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCE08 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  _NDIS_OID_REQUEST *PendingOidRequest; // rax
  _REFERENCE_EX *p_PnPRef; // rdi
  int v4; // edx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v7; // bl
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  KIRQL v11; // al
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // bl
  __int64 v15; // r11
  unsigned __int8 i; // cl
  _BYTE *v17; // r10
  char v18; // al
  bool v19; // zf
  ULONG_PTR v20; // rsi
  unsigned int v21; // edx
  int v22; // ecx
  ULONG_PTR v23; // rsi
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v25; // rax
  struct _NDIS_REFCOUNT_BLOCK *v26; // rsi
  _QWORD v27[5]; // [rsp+20h] [rbp-38h] BYREF
  int v28; // [rsp+48h] [rbp-10h]
  int v29; // [rsp+4Ch] [rbp-Ch]

  PendingOidRequest = Parameter->PendingOidRequest;
  p_PnPRef = &Parameter->PnPRef;
  v4 = *(_DWORD *)&PendingOidRequest->NdisReserved[8];
  v27[0] = 0LL;
  v27[1] = 0LL;
  v27[3] = 0LL;
  v29 = 0;
  v27[2] = Parameter;
  v27[4] = PendingOidRequest;
  v28 = v4;
  v5 = KeAcquireSpinLockRaiseToDpc(&Parameter->PnPRef.SpinLock);
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)p_PnPRef->RefCountTracker;
  ++p_PnPRef->ReferenceCount;
  v7 = v5;
  NdisReferenceWithTag(RefCountTracker, 0x13u);
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v7);
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v27, v8, v9, v10);
  v11 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  if ( Parameter->OidRequestList.Flink != &Parameter->OidRequestList )
  {
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(&Parameter->Lock, v11);
    if ( (unsigned int)ndisQueueRequestWorkItem((struct _NDIS_MINIPORT_BLOCK *)Parameter, 0LL, 5) != 259 )
      ndisCancelOidRequestOnFilter(Parameter, 0LL, 1u);
    v11 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(&Parameter->Lock, v11);
  v12 = KeAcquireSpinLockRaiseToDpc(&p_PnPRef->SpinLock);
  v13 = (ULONG_PTR)p_PnPRef->RefCountTracker;
  v14 = v12;
  if ( v13 != 2 && v13 != 3 )
  {
    if ( v13 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v13, 0LL);
    if ( *(_BYTE *)(v13 + 2) <= 0x13u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v13, 0x13uLL);
    if ( *(_BYTE *)(v13 + 1) )
    {
      if ( *(_BYTE *)(v13 + 1) == 1 )
      {
        v20 = v13 + 1224;
        v21 = *(_DWORD *)(v13 + 1280);
        v22 = (unsigned __int16)v21 >> 1;
        if ( v21 >> 17 < 0x3FFE && v22 == (v21 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 1224));
          *(_DWORD *)(v20 + 56) &= 0x10001u;
        }
        else
        {
          if ( v22 == 0 && (v21 & 1) == 0 )
            ndisReportRefcountImbalance((ULONG_PTR)p_PnPRef->RefCountTracker, 0x13u);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 1224), 0);
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
      if ( v15 )
      {
        for ( i = 0; i < *(_BYTE *)(v13 + 3); ++i )
        {
          v17 = (_BYTE *)(v15 + 2LL * i);
          if ( *v17 == 19 )
          {
            v18 = v17[1];
            if ( v18 )
            {
              v17[1] = v18 - 1;
              goto LABEL_20;
            }
          }
        }
      }
      if ( !_bittestandreset((signed __int32 *)(v13 + 16), 0x13u) )
        ndisReportRefcountImbalance(v13, 0x13u);
    }
  }
LABEL_20:
  v19 = p_PnPRef->ReferenceCount-- == 1;
  if ( v19 && !p_PnPRef->ZeroBased )
  {
    v23 = (ULONG_PTR)p_PnPRef->RefCountTracker;
    if ( v23 )
    {
      AnyActiveRefTag = ndisGetAnyActiveRefTag(p_PnPRef->RefCountTracker);
      if ( AnyActiveRefTag != -2 )
        ndisBugCheckEx(0x1EuLL, 4uLL, v23, AnyActiveRefTag);
      v25 = ndisRefCountBlockFromRefCountHandle(v23);
      v26 = v25;
      if ( v25 )
      {
        ndisFreeRefCountAuxiliaryMemory(v25);
        ExFreePoolWithTag(v26, 0);
      }
    }
    p_PnPRef->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v14);
}
