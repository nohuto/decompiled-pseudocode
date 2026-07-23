/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x140ACA4C8
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1403E2D50 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1408503FC (WheapPfaMemoryCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ecx
  unsigned int *v4; // r8
  char v5; // r9
  unsigned int i; // edx
  unsigned int *v7; // rdi
  void *Pool2; // rbp
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rcx
  signed __int8 v16; // cf
  AutoBoost *v17; // rsi

  v1 = a1 + 40;
  if ( (unsigned int)PshedDoPfa(a1 + 40) != 1 && !*(_BYTE *)off_140E09398 )
  {
    if ( LOBYTE(WheapPfaLock.Header.WaitListHead.Flink) )
    {
      v3 = *(unsigned __int16 *)(v1 + 10);
      if ( (_WORD)v3 )
      {
        if ( *(_DWORD *)(v1 + 12) == 2 && (*(_BYTE *)(v1 + 104) & 1) == 0 )
        {
          v4 = 0LL;
          v5 = 0;
          for ( i = 0; i < v3; ++i )
          {
            v4 = (unsigned int *)(v1 + 8 * (i + 8 * (i + 2LL)));
            if ( (v4[3] & 1) != 0 )
            {
              v5 = 1;
              break;
            }
          }
          v7 = (unsigned int *)(v1 + 128);
          if ( v5 )
            v7 = v4;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            if ( !memcmp(v7 + 4, &MEMORY_ERROR_SECTION_GUID, 0x10uLL) )
            {
              v10 = *(_DWORD *)(a1 + 24);
              v11 = v1 + *v7;
              if ( (v10 & 4) != 0 )
              {
                if ( (v10 & 8) != 0 && (*(_BYTE *)v11 & 2) != 0 )
                  WheaAttemptPhysicalPageOffline(*(_QWORD *)(v11 + 16) >> 12, 1, 0, 0, (__int64)Pool2);
              }
              else
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v13 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock, 0LL, 0LL, v9);
                v16 = _interlockedbittestandset64(&WheapPfaLock.Header.Lock, 0LL);
                v17 = v13;
                if ( v16 )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&WheapPfaLock, v13, (__int64)&WheapPfaLock);
                if ( v17 )
                {
                  if ( (KiAbpGlobalState & 1) != 0 )
                    AutoBoost::KiAbpPostAcquire(v17, v14);
                  else
                    *((_BYTE *)v17 + 10) = 1;
                }
                WheapPfaMemoryCheck(v15, v11, (__int64)Pool2);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.Header.Lock);
                KeAbPostRelease((unsigned __int64)&WheapPfaLock);
                KeLeaveCriticalRegion();
              }
            }
            ExFreePoolWithTag(Pool2, 0x61656857u);
          }
        }
      }
    }
  }
}
