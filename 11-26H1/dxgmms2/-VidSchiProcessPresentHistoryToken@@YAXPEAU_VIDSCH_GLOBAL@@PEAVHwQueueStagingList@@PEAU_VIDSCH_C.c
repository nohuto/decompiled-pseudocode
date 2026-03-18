/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C
 * Callers:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140016A20 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140017AA8 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DA1C (-DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        struct HwQueueStagingList *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDSCH_HW_QUEUE *a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_SUBMIT_DATA2 *a6,
        union _ULARGE_INTEGER a7,
        bool a8,
        bool a9)
{
  struct VIDSCH_SUBMIT_DATA2 *v12; // rax
  __int64 v13; // rbp
  struct _D3DKMT_PRESENTHISTORYTOKEN *v14; // r15
  union _SLIST_HEADER *v15; // r13
  bool v16; // bl
  unsigned int i; // ebx
  __int64 v18; // rbp
  __int64 v19; // rcx
  void *v20; // rcx
  struct _VIDSCH_DEVICE *v21; // r15
  unsigned int v22; // r8d
  __int64 v23; // r13
  char v24; // cl
  bool v25; // zf
  int v26; // eax
  char v27; // dl
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  char v35; // cl
  char v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbx
  void *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  void (__fastcall *v44)(_QWORD); // rax
  int v45; // [rsp+20h] [rbp-88h]
  int v46; // [rsp+28h] [rbp-80h]
  bool v47; // [rsp+38h] [rbp-70h]
  bool v48; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  struct VIDSCH_SUBMIT_DATA2 *v51; // [rsp+D8h] [rbp+30h]

  if ( (*(_DWORD *)a6 & 0x1000000) == 0 )
  {
    WdLogSingleEntry4(
      8LL,
      *((_QWORD *)a6 + 13),
      *((unsigned int *)a6 + 28),
      *(_QWORD *)((char *)a6 + 156),
      *((_QWORD *)a6 + 21));
    v12 = (struct VIDSCH_SUBMIT_DATA2 *)*((_QWORD *)a6 + 70);
    v13 = *((_QWORD *)a6 + 3);
    v14 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a6 + 13);
    v15 = (union _SLIST_HEADER *)*((_QWORD *)a6 + 12);
    WdLogGlobalForLineNumber = 13320;
    v51 = 0LL;
    if ( v12
      && (v51 = v12,
          v16 = (*((_DWORD *)a6 + 1) & 0x20) != 0,
          ((void (__fastcall *)(struct VIDSCH_SUBMIT_DATA2 *, _QWORD, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[76])(
            v12,
            *((unsigned int *)a6 + 142),
            *((_QWORD *)a6 + 72),
            *((_QWORD *)a6 + 73),
            *((_QWORD *)a6 + 74),
            v16),
          !v16) )
    {
      if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
        ExpInterlockedPushEntrySList(v15 + 3, (PSLIST_ENTRY)(&v14[-1].Token.SurfaceComplete + 131));
    }
    else
    {
      if ( v13 )
      {
        v39 = *((_QWORD *)a6 + 101);
        if ( v39 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v39 + 12));
          v40 = *(void **)(v13 + 8);
          if ( v40 )
            CRefCountedBuffer::RefCountedBufferRelease(v40);
          *(_QWORD *)(v13 + 8) = v39;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      for ( i = 0; i < *((_DWORD *)a1 + 40); ++i )
      {
        v18 = 8 * i * (*((_DWORD *)a6 + 152) + 28);
        v19 = *(_QWORD *)((char *)a6 + v18 + 808);
        if ( v19 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v19 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v19, (PVOID)v19);
            else
              ExFreePoolWithTag((PVOID)v19, 0);
          }
          *(_QWORD *)((char *)a6 + v18 + 808) = 0LL;
        }
      }
      v20 = (void *)*((_QWORD *)a6 + 4);
      if ( v20 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v20);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        &v15->Alignment,
        v14,
        0,
        0,
        0,
        a9,
        *((_BYTE *)a6 + 4) & 1,
        v47,
        v48,
        v51);
    }
    return;
  }
  v21 = a5;
  v22 = *((_DWORD *)a6 + 150) & 0x3FF;
  v23 = *((unsigned int *)a6 + 29);
  v24 = -1;
  v25 = !_BitScanForward((unsigned int *)&v26, v22);
  v27 = 0;
  if ( !v25 )
    v24 = v26;
  if ( v24 != -1 )
    v27 = v24;
  if ( !a5 )
  {
    v28 = *(_QWORD *)((char *)a6 + (unsigned int)(8 * *((_DWORD *)a6 + 151) * (*((_DWORD *)a6 + 152) + 28)) + 656);
    if ( v28 )
      v21 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v28 + 8) + 32LL);
    else
      v21 = 0LL;
  }
  v29 = *((_QWORD *)a1 + v23 + 431);
  if ( (_DWORD)v23 == -1 )
    goto LABEL_46;
  v30 = 304LL * (unsigned int)v27;
  v31 = *(int *)(v30 + v29 + 188);
  if ( (int)v31 <= -1 || (v32 = *((_QWORD *)a1 + 447) + 160 * v31) == 0 )
  {
LABEL_29:
    if ( (*((_DWORD *)a6 + 1) & 1) != 0 )
    {
      WdLogSingleEntry3(8LL, *((_QWORD *)a6 + 13), *((unsigned int *)a6 + 28), *((_DWORD *)a6 + 1) & 1);
      WdLogGlobalForLineNumber = 2061;
    }
    else
    {
      v25 = !_BitScanForward((unsigned int *)&v34, v22);
      v35 = 0;
      v36 = -1;
      if ( !v25 )
        v36 = v34;
      if ( v36 != -1 )
        v35 = v36;
      v37 = *(int *)(304LL * (unsigned int)v35 + v29 + 188);
      if ( (int)v37 > -1 )
      {
        v38 = *((_QWORD *)a1 + 447) + 160 * v37;
        if ( v38 )
        {
          if ( *(_DWORD *)v38 == *((_DWORD *)a6 + 39)
            && *(_DWORD *)(v38 + 4) == *((_DWORD *)a6 + 40)
            && *(_QWORD *)(v38 + 8) == *((_QWORD *)a6 + 21)
            && *(_QWORD *)(v38 + 88) == *((_QWORD *)a6 + 22) )
          {
            VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v21);
            return;
          }
          WdLogSingleEntry5(
            8LL,
            *((_QWORD *)a6 + 13),
            *((unsigned int *)a6 + 28),
            *(_QWORD *)((char *)a6 + 156),
            *((_QWORD *)a6 + 21),
            *((_QWORD *)a6 + 22));
          WdLogGlobalForLineNumber = 2090;
        }
      }
    }
    goto LABEL_46;
  }
  v33 = *(_DWORD *)(v32 + 112);
  if ( v33 == 1 )
  {
    if ( !*(_BYTE *)(v32 + 98) || *(_DWORD *)(v30 + v29 + 192) || !*(_BYTE *)(v32 + 96) || *(_DWORD *)(v30 + v29 + 196) )
      goto LABEL_46;
    goto LABEL_29;
  }
  if ( v33 == 2 )
    goto LABEL_29;
LABEL_46:
  if ( *(_DWORD *)(v29 + 44488) != -1 )
  {
    v44 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 415);
    if ( v44 )
      v44(*((_QWORD *)a1 + 421));
  }
  v41 = *(_QWORD *)((char *)a6 + 156);
  v42 = *((_QWORD *)a6 + 13);
  v43 = *((unsigned int *)a6 + 28);
  if ( a8 )
  {
    WdLogSingleEntry5(8LL, v42, v43, 0LL, v41, *((_QWORD *)a6 + 21));
    WdLogGlobalForLineNumber = 13401;
  }
  else
  {
    WdLogSingleEntry5(8LL, v42, v43, v41, *((_QWORD *)a6 + 21), *((_DWORD *)a6 + 1) & 1);
    WdLogGlobalForLineNumber = 13412;
  }
  LOBYTE(v46) = a8;
  LOBYTE(v45) = 0;
  VidSchiPropagatePresentHistoryToken(
    a1,
    *((_QWORD *)a6 + 12),
    *((_QWORD *)a6 + 13),
    0LL,
    v45,
    v46,
    a9,
    *((_QWORD *)a6 + 3),
    (char *)a6 + 600,
    a6,
    0LL,
    0);
  VidSchiUnreferencePrimaryAllocations(
    a2,
    a1,
    v23,
    (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 600),
    *((_DWORD *)a6 + 34),
    *((_DWORD *)a6 + 34),
    0,
    0,
    (unsigned int *)a6 + 154);
  _InterlockedAdd((volatile signed __int32 *)a1 + 200, 0xFFFFFFFF);
  DecrementNumberOfQueuedFlipPerSource(a1, v23);
  _InterlockedAdd((volatile signed __int32 *)v21 + 459, 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)v21 + v23 + 443, 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand(v21);
}
