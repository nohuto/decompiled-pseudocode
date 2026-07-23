/*
 * XREFs of CmpDelayCloseWorker @ 0x1408D4CD0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

_KAFFINITY_EX *__fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  _BYTE *v7; // r9
  int Flink_high; // eax
  unsigned __int64 v9; // r8
  unsigned __int64 **v10; // rdx
  __int64 v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned int v13; // esi
  _DWORD *v14; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v16; // rbp
  unsigned __int64 *v17; // r13
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // r15
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned int v23; // ebp
  ULONG_PTR *v24; // rbx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  ULONG_PTR v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rbx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  __int64 v34; // rcx
  __int64 v36; // rdx
  __int128 v37; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v38[232]; // [rsp+40h] [rbp-E8h] BYREF

  v37 = 0LL;
  memset(v38, 0, 72);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v38);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v38[24]);
  CmpInitializeDelayDerefContext(&v37);
  CmpLockRegistry(v3, v2, v4, v5);
  if ( a1 )
    goto LABEL_3;
  do
  {
    _InterlockedExchange((volatile __int32 *)&WheapPfaLock.Timer.Header.WaitListHead, 2);
    do
    {
LABEL_3:
      v6 = 0;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      v7 = &v38[88];
      do
      {
        Flink_high = HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink);
        if ( HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) <= CmpDelayedCloseSize
          && (!a1 || !HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink)) )
        {
          break;
        }
        v9 = CmpKeyLockTracker.CycleTime - 224;
        if ( *(struct _KTHREAD **)CmpKeyLockTracker.CycleTime == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
        {
          v10 = *(unsigned __int64 ***)(CmpKeyLockTracker.CycleTime + 8);
          if ( *v10 == (unsigned __int64 *)CmpKeyLockTracker.CycleTime )
            continue;
        }
        __fastfail(3u);
        CmpKeyLockTracker.CycleTime = *(_QWORD *)(CmpKeyLockTracker.CycleTime + 8);
        *v10 = &CmpKeyLockTracker.ThreadLock;
        --KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
        HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) = Flink_high - 1;
        *((_QWORD *)v7 - 1) = *(_QWORD *)(v9 + 32);
        *(_QWORD *)v7 = v9;
        v11 = v6++;
        v38[24 * v11 + 96] = 0;
        *((_DWORD *)v7 + 3) = *(_DWORD *)(v9 + 16);
        v7 += 24;
        *(_BYTE *)(v9 + 64) |= 4u;
        *(_QWORD *)(v9 + 224) = &v38[24 * v11 + 96];
      }
      while ( v6 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      v13 = 0;
      if ( v6 )
      {
        v14 = &v38[100];
        do
        {
          BugCheckParameter4 = (unsigned int)*v14;
          v16 = *(_QWORD *)(v14 - 5);
          v17 = (unsigned __int64 *)(*(_QWORD *)(v16 + 1648)
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v16 + 1656) - 1) & ((101027
                                                                                    * ((unsigned int)BugCheckParameter4 ^ (*v14 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ (*v14 >> 9))) >> 9))));
          v18 = (AutoBoost *)KeAbPreAcquire((__int64)v17, 0LL, 0LL, v12);
          v20 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
            ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
          if ( v20 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v20, v19);
            else
              *((_BYTE *)v20 + 10) = 1;
          }
          v17[1] = (unsigned __int64)KeGetCurrentThread();
          _m_prefetchw((const void *)(v16 + 4240));
          v21 = *(_DWORD *)(v16 + 4240);
          do
          {
            if ( !v21 )
              KeBugCheckEx(0x51u, 0x17uLL, v16, 0xCuLL, BugCheckParameter4);
            v22 = v21;
            v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 4240), v21 + 1, v21);
          }
          while ( v22 != v21 );
          v23 = v13;
          if ( v13 < v6 )
          {
            v24 = (ULONG_PTR *)&v38[24 * v13 + 88];
            do
            {
              if ( *((_DWORD *)v24 + 3) == *v14 && *(v24 - 1) == *(_QWORD *)(v14 - 5) && !*((_BYTE *)v24 + 8) )
              {
                CmpLockKcbExclusive(*v24);
                v27 = 0LL;
                v28 = *(_QWORD *)(*v24 + 192);
                if ( v28 )
                {
                  v36 = *(_QWORD *)(v28 + 24);
                  if ( v36 )
                  {
                    v27 = *(_QWORD *)(v36 + 16);
                    CmpUnlockKcb(*v24);
                    CmpLockKcbExclusive(v27);
                    CmpLockKcbExclusive(*v24);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*v24, (__int64)&v37, v25, v26);
                CmpUnlockKcb(*v24);
                if ( v27 )
                  CmpUnlockKcb(v27);
                v38[24 * v23 + 96] = 1;
              }
              ++v23;
              v24 += 3;
            }
            while ( v23 < v6 );
          }
          v29 = *(_QWORD *)(v14 - 5);
          v30 = (__int64 *)(*(_QWORD *)(v29 + 1648)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v29 + 1656) - 1) & ((unsigned int)(101027 * (*v14 ^ (*v14 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v14 ^ (*v14 >> 9))) >> 9))));
          v30[1] = 0LL;
          _m_prefetchw(v30);
          v31 = *v30;
          v32 = *v30 - 16;
          if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v32 = 0LL;
          if ( (v31 & 2) != 0 || (v33 = *v30, v33 != _InterlockedCompareExchange64(v30, v32, v31)) )
            ExfReleasePushLock(v30);
          KeAbPostRelease((unsigned __int64)v30);
          CmpDereferenceHive((char *)v29);
          ++v13;
          v14 += 6;
        }
        while ( v13 < v6 );
      }
    }
    while ( v6 == 4 );
  }
  while ( !a1
       && _InterlockedCompareExchange((volatile signed __int32 *)&WheapPfaLock.Timer.Header.WaitListHead, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v37);
  CmpUnlockRegistry(v34);
  CmpDetachFromRegistryProcess(&v38[24]);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)v38);
}
