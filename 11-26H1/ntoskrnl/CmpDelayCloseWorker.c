/*
 * XREFs of CmpDelayCloseWorker @ 0x1408CE720
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

_KAFFINITY_EX *__fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  _BYTE *v4; // r9
  int Flink; // eax
  unsigned __int64 v6; // r8
  unsigned __int64 **v7; // rdx
  __int64 v8; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned int v10; // esi
  _DWORD *v11; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v13; // rbp
  unsigned __int64 *v14; // r13
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r15
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  unsigned int v20; // ebp
  ULONG_PTR *v21; // rbx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  ULONG_PTR v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 *v27; // rbx
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  __int64 v30; // rtt
  __int64 v31; // rcx
  __int64 v33; // rdx
  __int128 v34; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v35[232]; // [rsp+40h] [rbp-E8h] BYREF

  v34 = 0LL;
  memset(v35, 0, 72);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v35);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v35[24]);
  CmpInitializeDelayDerefContext(&v34);
  CmpLockRegistry(v2);
  if ( a1 )
    goto LABEL_3;
  do
  {
    _InterlockedExchange((_DWORD *)&WheapPfaLock.WaitBlockList + 1, 2);
    do
    {
LABEL_3:
      v3 = 0;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      v4 = &v35[88];
      do
      {
        Flink = (int)WheapPfaLock.WaitListEntry.Flink;
        if ( LODWORD(WheapPfaLock.WaitListEntry.Flink) <= CmpDelayedCloseSize
          && (!a1 || !LODWORD(WheapPfaLock.WaitListEntry.Flink)) )
        {
          break;
        }
        v6 = CmpKeyLockTracker.CycleTime - 224;
        if ( *(struct _KTHREAD **)CmpKeyLockTracker.CycleTime == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
        {
          v7 = *(unsigned __int64 ***)(CmpKeyLockTracker.CycleTime + 8);
          if ( *v7 == (unsigned __int64 *)CmpKeyLockTracker.CycleTime )
            continue;
        }
        __fastfail(3u);
        CmpKeyLockTracker.CycleTime = *(_QWORD *)(CmpKeyLockTracker.CycleTime + 8);
        *v7 = &CmpKeyLockTracker.ThreadLock;
        --KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
        LODWORD(WheapPfaLock.WaitListEntry.Flink) = Flink - 1;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v6 + 32);
        *(_QWORD *)v4 = v6;
        v8 = v3++;
        v35[24 * v8 + 96] = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v6 + 16);
        v4 += 24;
        *(_BYTE *)(v6 + 64) |= 4u;
        *(_QWORD *)(v6 + 224) = &v35[24 * v8 + 96];
      }
      while ( v3 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      v10 = 0;
      if ( v3 )
      {
        v11 = &v35[100];
        do
        {
          BugCheckParameter4 = (unsigned int)*v11;
          v13 = *(_QWORD *)(v11 - 5);
          v14 = (unsigned __int64 *)(*(_QWORD *)(v13 + 1648)
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v13 + 1656) - 1) & ((101027
                                                                                    * ((unsigned int)BugCheckParameter4 ^ (*v11 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ (*v11 >> 9))) >> 9))));
          v15 = (AutoBoost *)KeAbPreAcquire((__int64)v14, 0LL, 0LL, v9);
          v17 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
            ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
          if ( v17 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v17, v16);
            else
              *((_BYTE *)v17 + 10) = 1;
          }
          v14[1] = (unsigned __int64)KeGetCurrentThread();
          _m_prefetchw((const void *)(v13 + 4240));
          v18 = *(_DWORD *)(v13 + 4240);
          do
          {
            if ( !v18 )
              KeBugCheckEx(0x51u, 0x17uLL, v13, 0xCuLL, BugCheckParameter4);
            v19 = v18;
            v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 4240), v18 + 1, v18);
          }
          while ( v19 != v18 );
          v20 = v10;
          if ( v10 < v3 )
          {
            v21 = (ULONG_PTR *)&v35[24 * v10 + 88];
            do
            {
              if ( *((_DWORD *)v21 + 3) == *v11 && *(v21 - 1) == *(_QWORD *)(v11 - 5) && !*((_BYTE *)v21 + 8) )
              {
                CmpLockKcbExclusive(*v21);
                v24 = 0LL;
                v25 = *(_QWORD *)(*v21 + 192);
                if ( v25 )
                {
                  v33 = *(_QWORD *)(v25 + 24);
                  if ( v33 )
                  {
                    v24 = *(_QWORD *)(v33 + 16);
                    CmpUnlockKcb(*v21);
                    CmpLockKcbExclusive(v24);
                    CmpLockKcbExclusive(*v21);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*v21, (__int64)&v34, v22, v23);
                CmpUnlockKcb(*v21);
                if ( v24 )
                  CmpUnlockKcb(v24);
                v35[24 * v20 + 96] = 1;
              }
              ++v20;
              v21 += 3;
            }
            while ( v20 < v3 );
          }
          v26 = *(_QWORD *)(v11 - 5);
          v27 = (__int64 *)(*(_QWORD *)(v26 + 1648)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v26 + 1656) - 1) & ((unsigned int)(101027 * (*v11 ^ (*v11 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v11 ^ (*v11 >> 9))) >> 9))));
          v27[1] = 0LL;
          _m_prefetchw(v27);
          v28 = *v27;
          v29 = *v27 - 16;
          if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v29 = 0LL;
          if ( (v28 & 2) != 0 || (v30 = *v27, v30 != _InterlockedCompareExchange64(v27, v29, v28)) )
            ExfReleasePushLock(v27);
          KeAbPostRelease((unsigned __int64)v27);
          CmpDereferenceHive((char *)v26);
          ++v10;
          v11 += 6;
        }
        while ( v10 < v3 );
      }
    }
    while ( v3 == 4 );
  }
  while ( !a1 && _InterlockedCompareExchange((_DWORD *)&WheapPfaLock.WaitBlockList + 1, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v34);
  CmpUnlockRegistry(v31);
  CmpDetachFromRegistryProcess(&v35[24]);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)v35);
}
