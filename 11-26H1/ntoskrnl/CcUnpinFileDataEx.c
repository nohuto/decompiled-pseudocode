/*
 * XREFs of CcUnpinFileDataEx @ 0x1402C11D0
 * Callers:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x1404668F0 (CcReleaseByteRangeFromWrite.c)
 *     CcMapDataForOverwrite @ 0x14048739C (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcUnpinDataForThread @ 0x14078CD90 (CcUnpinDataForThread.c)
 *     CcMapData @ 0x1409DFB60 (CcMapData.c)
 *     CcUnpinData @ 0x140A4E110 (CcUnpinData.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x1403E611C (CcDeductDirtyPages.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1403E624C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcDeallocateBcb @ 0x14046E164 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x14046FEC0 (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rsi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r13
  struct _FAST_MUTEX *v10; // r15
  struct _KLOCK_ENTRIES *v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rbp
  struct _KEVENT *v16; // rcx
  AutoBoost *v17; // rax
  AutoBoost *v18; // rsi
  char **v19; // rdx
  PVOID *v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  __int64 v24; // rsi
  struct _KEVENT *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 192);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 552));
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 536);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  v10 = (struct _FAST_MUTEX *)(v8 + 288);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v8 + 288));
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x204ADuLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v13 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
      CcDeductDirtyPages(v8, v13);
      v14 = *(_DWORD *)(v9 + 976) - v13;
      if ( *(_DWORD *)(v9 + 976) <= v13 )
        v14 = 0;
      *(_DWORD *)(v9 + 976) = v14;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else
  {
    v12 = *((_DWORD *)P + 16);
    if ( !v12 )
      KeBugCheckEx(0x34u, 0x469uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *((_DWORD *)P + 16) = v12 - 1;
  }
  if ( *((_DWORD *)P + 16) )
    goto LABEL_25;
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v15 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v16 = *(struct _KEVENT **)(v15 + 192);
        if ( v16 )
          KeSetEvent(v16, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 552));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
LABEL_25:
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex(v10);
    return;
  }
  v17 = (AutoBoost *)KeAbPreAcquire(v8 + 104, 0LL, 0LL, v11);
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 104), v17, v8 + 104);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v18 + 33) |= 2u;
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = (char **)*((_QWORD *)P + 2);
  if ( v19[1] != P + 16 || (v20 = (PVOID *)*((_QWORD *)P + 3), *v20 != P + 16) )
    __fastfail(3u);
  *v20 = v19;
  v19[1] = (char *)v20;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  _m_prefetchw((const void *)(v8 + 104));
  v21 = *(_QWORD *)(v8 + 104);
  v22 = v21 - 16;
  if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v22 = 0LL;
  if ( (v21 & 2) != 0
    || (v23 = *(_QWORD *)(v8 + 104),
        v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 104), v22, v21)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 104));
  }
  KeAbPostRelease(v8 + 104);
  if ( *((_QWORD *)P + 23) )
  {
    v24 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v25 = *(struct _KEVENT **)(v24 + 192);
      if ( v25 )
        KeSetEvent(v25, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 552));
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 288));
  CcDeallocateBcb(P);
}
