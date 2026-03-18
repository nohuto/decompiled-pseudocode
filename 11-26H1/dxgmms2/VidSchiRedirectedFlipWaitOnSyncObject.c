/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x140005B80 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140005D20 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140031F30 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(struct _VIDSCH_GLOBAL *a1, char *Src, __int64 a3, int *a4)
{
  unsigned int v5; // ebx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // rcx
  char *v19; // rsi
  char *v20; // rax
  char **v21; // rcx
  unsigned int *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  void (__fastcall *v26)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v27)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v28; // rdx
  void (__fastcall *v29)(_QWORD, __int64, __int64); // rax
  unsigned int v30; // edx
  struct _VIDSCH_GLOBAL *v31; // rcx
  struct _VIDSCH_GLOBAL *v32; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-11h] BYREF
  char v34; // [rsp+70h] [rbp-1h]
  int v35; // [rsp+74h] [rbp+3h]
  _QWORD v36[4]; // [rsp+78h] [rbp+7h] BYREF
  __int16 v37; // [rsp+98h] [rbp+27h]

  v5 = 0;
  v9 = *(_QWORD *)&Src[8 * *((_DWORD *)Src + 151) * (*((_DWORD *)Src + 152) + 28) + 656];
  if ( v9 )
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL);
  else
    v10 = 0LL;
  v11 = *((unsigned int *)Src + 29);
  if ( (*(_DWORD *)Src & 0x1000000) != 0 && (_DWORD)v11 != -1 )
  {
    v28 = *(unsigned int *)(*((_QWORD *)a1 + v11 + 431) + 44488LL);
    if ( (_DWORD)v28 != -1 )
    {
      v29 = (void (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)a1 + 413);
      if ( v29 )
        v29(*((_QWORD *)a1 + 421), v28, 0xFFFFFFFFLL);
    }
  }
  v12 = *a4;
  if ( (*a4 & 0x1000) != 0
    && ((v12 & 0x400) == 0 || (v12 & 0x800) != 0)
    && (_DWORD)v11 != -1
    && (*(_DWORD *)Src & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)a1 + 200, 1u);
    IncrementNumberOfQueuedFlipPerSource(a1, v11);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 1836), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v11 + 1772), 1u);
    if ( (*(_DWORD *)(v10 + 56) & 2) != 0 || *((int *)Src + 30) >= 4 || *((_BYTE *)a1 + 164) )
      VidSchIsVSyncEnabled(v31, v30);
  }
  v37 = 0;
  v36[0] = (char *)a1 + 2016;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v36);
  v13 = *((_QWORD *)Src + 59);
  v32 = a1;
  v33[1] = v33;
  v33[0] = v33;
  v34 = 0;
  v35 = 1;
  if ( *(_BYTE *)(a3 + 29) )
    goto LABEL_18;
  if ( *(_DWORD *)(a3 + 48) == 6 )
  {
    v15 = *(_QWORD *)(*(unsigned int *)(a3 + 80) + *(_QWORD *)(*(_QWORD *)(a3 + 64) + 192LL));
LABEL_11:
    if ( v15 < v13 )
      goto LABEL_12;
    goto LABEL_18;
  }
  v14 = *(unsigned __int64 **)(a3 + 72);
  if ( *(_BYTE *)(a3 + 30) )
  {
    v15 = *v14;
    goto LABEL_11;
  }
  if ( *(_DWORD *)v14 - (int)v13 < 0 )
  {
LABEL_12:
    if ( *(_DWORD *)(a3 + 36) == 0x7FFFFFFF )
    {
      WdLogSingleEntry0(1LL);
      v27 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 13753;
      v27(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n",
        13753LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073741823;
    }
    else
    {
      v16 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 944));
      v17 = v16;
      if ( v16 )
      {
        v16[1] = a3;
        v16[2] = *((_QWORD *)Src + 59);
        memmove(v16 + 5, Src, *((unsigned int *)Src + 139));
        *((_DWORD *)Src + 84) = 0;
        *((_DWORD *)Src + 154) = 0;
        VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(v17 + 80));
        v18 = v17[9];
        if ( v18 )
          _InterlockedAdd((volatile signed __int32 *)(v18 + 12), 1u);
        v19 = (char *)a1 + 920;
        v20 = (char *)(v17 + 3);
        v21 = (char **)*((_QWORD *)v19 + 1);
        if ( *v21 != v19 )
          __fastfail(3u);
        *(_QWORD *)v20 = v19;
        v17[4] = v21;
        *v21 = v20;
        *((_QWORD *)v19 + 1) = v20;
        ++*(_DWORD *)(a3 + 44);
        _InterlockedAdd((volatile signed __int32 *)(a3 + 36), 1u);
      }
      else
      {
        WdLogSingleEntry0(1LL);
        v26 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
        WdLogGlobalForLineNumber = 13765;
        v26(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to allocate VIDSCH_SYNCOBJ_PHT_DATA", 13765LL, 0LL, 0LL, 0LL, 0LL);
        v5 = -1073741801;
      }
    }
    goto LABEL_24;
  }
LABEL_18:
  if ( *(_DWORD *)(a3 + 48) == 6 )
  {
    v23 = *(_QWORD *)(*(unsigned int *)(a3 + 80) + *(_QWORD *)(*(_QWORD *)(a3 + 64) + 192LL));
  }
  else
  {
    v22 = *(unsigned int **)(a3 + 72);
    if ( *(_BYTE *)(a3 + 30) )
      v23 = *(_QWORD *)v22;
    else
      v23 = *v22;
  }
  WdLogSingleEntry3(4LL, a3, v23, *((_QWORD *)Src + 59));
  WdLogGlobalForLineNumber = 13715;
  VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Src + 600));
  v24 = *((_QWORD *)Src + 4);
  if ( v24 )
    _InterlockedAdd((volatile signed __int32 *)(v24 + 12), 1u);
  VidSchiSubmitPresentHistoryToken((unsigned int)&v32, 0, (_DWORD)Src, 0, (__int64)a1);
LABEL_24:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v32);
  AcquireSpinLock::Release((AcquireSpinLock *)v36);
  return v5;
}
