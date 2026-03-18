/*
 * XREFs of PspThreadDelete @ 0x140AA21E0
 * Callers:
 *     <none>
 * Callees:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeEnumerateKernelStackSegments @ 0x1404107D8 (KeEnumerateKernelStackSegments.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeFoldProcessStatisticsThread @ 0x140484EB0 (KeFoldProcessStatisticsThread.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404F4824 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14092C030 (ExDestroyHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  _KPROCESS **p_Process; // rdx
  __int64 v24; // r9
  __int64 v25; // r10
  int v26; // r9d
  _QWORD *v27; // r8
  const char *v28; // rax
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
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62400 )
  {
    v21 = qword_140E623F0;
    if ( qword_140E623F0 )
    {
      if ( (_DWORD)qword_140E62408 )
      {
        v22 = 0LL;
        p_Process = &stru_140F132C8.SavedApcState.Process;
        v24 = (unsigned int)qword_140E62408;
        do
        {
          v25 = (__int64)*p_Process;
          if ( (((*p_Process)->ProcessLock & 0x400000) != 0) != _bittest64(qword_140E62410, v22) && !qword_140E623C0 )
          {
            qword_140E623C0 = (unsigned int)__ROR4__(8480, 101);
            xmmword_140E623C8 = 0LL;
            qword_140E623D8 = 268LL;
            qword_140E623E0 = v25;
          }
          ++v22;
          ++p_Process;
          --v24;
        }
        while ( v24 );
        v21 = qword_140E623F0;
      }
      v26 = 64;
      v27 = (_QWORD *)(qword_140E62430 + 112);
      v28 = (const char *)(qword_140E62430 + 112);
      if ( qword_140E62430 + 112 < (unsigned __int64)(qword_140E62430 + 176) )
      {
        do
        {
          _mm_prefetch(v28, 0);
          v28 += 64;
        }
        while ( (unsigned __int64)v28 < qword_140E62430 + 176 );
      }
      v29 = 8LL;
      do
      {
        v26 -= 8;
        v21 = __ROR8__(v21 - *v27++, qword_140E623F8);
        --v29;
      }
      while ( v29 );
      for ( ; v26; --v26 )
      {
        v30 = *(unsigned __int8 *)v27;
        v27 = (_QWORD *)((char *)v27 + 1);
        v21 = __ROR8__(v21 - v30, qword_140E623F8);
      }
      if ( qword_140E62438 != v21 )
      {
        if ( qword_140E623C0 )
          goto LABEL_68;
        qword_140E623D8 = 268LL;
        qword_140E623C0 = (unsigned int)__ROR4__(4341760, 110);
        xmmword_140E623C8 = 0LL;
        qword_140E623E0 = qword_140E62430;
      }
    }
    if ( !qword_140E623C0 )
    {
LABEL_59:
      qword_140E62400 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_15;
    }
LABEL_68:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))stru_140E62380.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140E62380, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140E62380);
    qword_140E623E8 = 1845888LL;
    KeInsertQueueDpc(&stru_140E62380, 0LL, 0LL);
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
