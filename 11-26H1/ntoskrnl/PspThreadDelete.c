/*
 * XREFs of PspThreadDelete @ 0x140AA3CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeEnumerateKernelStackSegments @ 0x14040FEF8 (KeEnumerateKernelStackSegments.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeFoldProcessStatisticsThread @ 0x14047E820 (KeFoldProcessStatisticsThread.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404EDE04 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExDestroyHandle @ 0x140907B60 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14092A190 (ExMapHandleToPointer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v4; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  void *v7; // rcx
  LONG_PTR result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int64 *v12; // rbp
  __int64 *v13; // r14
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r15
  __int64 *v18; // rcx
  __int64 **v19; // rax
  void *v20; // rcx
  char *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned int *p_ForegroundLossTime; // rdx
  __int64 v24; // r9
  struct _LIST_ENTRY *v25; // r10
  int v26; // r9d
  _QWORD *v27; // r8
  const char *i; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  KeCleanupThreadState(BugCheckParameter1);
  if ( *(_DWORD *)(BugCheckParameter1 + 1516) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1516), 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1504) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1504), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1508) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1508), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1512) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1512), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 1744);
  if ( v2 != BugCheckParameter1 + 1744 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter1, v2, 0LL);
  if ( *(_QWORD *)(BugCheckParameter1 + 40) )
    KeEnumerateKernelStackSegments(BugCheckParameter1);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
  {
    --CurrentThread->KernelApcDisable;
    v4 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1296));
    if ( !v4 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1296), v4, v5);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1440) & 8) != 0 )
  {
    ObfDereferenceObject((PVOID)(*(_QWORD *)(BugCheckParameter1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL));
    v20 = *(void **)(BugCheckParameter1 + 1608);
    if ( v20 )
    {
      ObfDereferenceObject(v20);
      *(_QWORD *)(BugCheckParameter1 + 1608) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 1440), 0xFFFFFFF7);
  }
  v7 = *(void **)(BugCheckParameter1 + 1696);
  *(_QWORD *)(BugCheckParameter1 + 1336) = 0LL;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6D4E6854u);
  if ( (PVOID)(MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) >= stru_140E62450.WaitBlock[1].Object )
  {
    v21 = *(char **)&stru_140E62450.WaitBlockFill11[64];
    if ( *(_QWORD *)&stru_140E62450.WaitBlockFill11[64] )
    {
      if ( *(_DWORD *)&stru_140E62450.WaitBlockFill11[88] )
      {
        v22 = 0LL;
        p_ForegroundLossTime = &ObpStackTraceLock.ForegroundLossTime;
        v24 = *(unsigned int *)&stru_140E62450.WaitBlockFill11[88];
        do
        {
          v25 = *(struct _LIST_ENTRY **)p_ForegroundLossTime;
          if ( ((*(_BYTE *)(*(_QWORD *)p_ForegroundLossTime + 66LL) & 0x40) != 0) != _bittest64(
                                                                                       (const signed __int64 *)&stru_140E62450.WaitBlock[2].WaitListEntry.Flink,
                                                                                       v22)
            && !*(_QWORD *)&stru_140E62450.WaitBlockFill11[16] )
          {
            *(_QWORD *)&stru_140E62450.WaitBlockFill11[16] = (unsigned int)__ROR4__(8480, 101);
            *(_OWORD *)&stru_140E62450.WaitBlockFill11[24] = 0LL;
            stru_140E62450.WaitBlock[0].SparePtr = (PVOID)268;
            stru_140E62450.WaitBlock[1].WaitListEntry.Flink = v25;
          }
          ++v22;
          p_ForegroundLossTime += 2;
          --v24;
        }
        while ( v24 );
        v21 = *(char **)&stru_140E62450.WaitBlockFill11[64];
      }
      v26 = 64;
      v27 = (char *)stru_140E62450.WaitBlock[2].Object + 112;
      for ( i = (char *)stru_140E62450.WaitBlock[2].Object + 112;
            i < (char *)stru_140E62450.WaitBlock[2].Object + 176;
            i += 64 )
      {
        _mm_prefetch(i, 0);
      }
      v29 = 8LL;
      do
      {
        v26 -= 8;
        v21 = (char *)__ROR8__(&v21[-*v27++], stru_140E62450.WaitBlockFill6[72]);
        --v29;
      }
      while ( v29 );
      for ( ; v26; --v26 )
      {
        v30 = *(unsigned __int8 *)v27;
        v27 = (_QWORD *)((char *)v27 + 1);
        v21 = (char *)__ROR8__(&v21[-v30], stru_140E62450.WaitBlockFill6[72]);
      }
      if ( stru_140E62450.WaitBlock[2].SparePtr != v21 )
      {
        if ( *(_QWORD *)&stru_140E62450.WaitBlockFill11[16] )
          goto LABEL_68;
        stru_140E62450.WaitBlock[0].SparePtr = (PVOID)268;
        *(_QWORD *)&stru_140E62450.WaitBlockFill11[16] = (unsigned int)__ROR4__(4341760, 110);
        *(_OWORD *)&stru_140E62450.WaitBlockFill11[24] = 0LL;
        stru_140E62450.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)stru_140E62450.WaitBlock[2].Object;
      }
    }
    if ( !*(_QWORD *)&stru_140E62450.WaitBlockFill11[16] )
    {
LABEL_59:
      stru_140E62450.WaitBlock[1].Object = (PVOID)(MEMORY[0xFFFFF78000000008]
                                                 + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                                                 - MEMORY[0xFFFFF780000003B0]
                                                 + 288000000000LL);
      goto LABEL_15;
    }
LABEL_68:
    if ( stru_140E62450.Timer.TimerListEntry.Blink != (struct _LIST_ENTRY *)KiScanQueues )
      KeInitializeDpc(
        (PRKDPC)&stru_140E62450.Timer.Header.WaitListHead.Blink,
        (PKDEFERRED_ROUTINE)KiScanQueues,
        &stru_140E62450.Timer.Header.WaitListHead.Blink);
    stru_140E62450.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)1845888;
    KeInsertQueueDpc((PRKDPC)&stru_140E62450.Timer.Header.WaitListHead.Blink, 0LL, 0LL);
    goto LABEL_59;
  }
LABEL_15:
  result = Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1936) )
    {
      result = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1936), 0LL);
      v9 = result & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        result &= 0xFu;
        if ( (_DWORD)result )
        {
          result = (unsigned int)-(int)result;
          _InterlockedAdd64((volatile signed __int64 *)(v9 - 48), (int)result);
        }
      }
    }
  }
  v12 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v12 )
  {
    v13 = (__int64 *)(BugCheckParameter1 + 1400);
    if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread, v10, v11);
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 188), 0LL, 0LL, v14);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 376, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12 + 188, v15, (__int64)(v12 + 188));
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v17, v16);
        else
          *((_BYTE *)v17 + 10) = 1;
      }
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v18 = (__int64 *)*v13;
      if ( *(__int64 **)(*v13 + 8) != v13 || (v19 = *(__int64 ***)(BugCheckParameter1 + 1408), *v19 != v13) )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 188, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12 + 188);
      KeAbPostRelease((unsigned __int64)(v12 + 188));
      result = PspUnlockProcessExclusive((__int64)v12, (__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1440) & 0x100000) != 0 )
      result = guard_dispatch_icall_no_overrides(BugCheckParameter1, v9);
    if ( v12 != PsIdleProcess )
      return ObfDereferenceObjectWithTag(v12, 0x72437350u);
  }
  return result;
}
