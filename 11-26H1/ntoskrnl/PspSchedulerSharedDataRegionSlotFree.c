/*
 * XREFs of PspSchedulerSharedDataRegionSlotFree @ 0x14094C09C
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeSwappablePageDereference @ 0x14040FC5C (KeSwappablePageDereference.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionSlotFree(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbp
  unsigned int v6; // edi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r14d
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r15

  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v5 = *(_QWORD *)(a1 + 1760);
    v6 = 0;
    if ( v5 )
    {
      *(_QWORD *)(a1 + 800) = 0LL;
      KeSwappablePageDereference(*(_QWORD *)(a1 + 1128), a2, a3, a4);
      v7 = *(_DWORD *)(a1 + 1124);
      v8 = *(_QWORD *)(a1 + 1128) - v5;
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1124) = 0;
      *(_QWORD *)(a1 + 1760) = 0LL;
      CurrentThread = KeGetCurrentThread();
      v10 = (v7 >> 6) + (((int)v8 / 80) << 6);
      --CurrentThread->KernelApcDisable;
      v12 = (AutoBoost *)KeAbPreAcquire(v5 + 200, 0LL, 0LL, v11);
      v14 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 200), v12, v5 + 200);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v13);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      *(_BYTE *)(((unsigned __int64)v10 >> 3) + *(_QWORD *)(v5 + 216)) &= ~(1 << (v10 & 7));
      if ( *(_DWORD *)(v5 + 224) > v10 )
        *(_DWORD *)(v5 + 224) = v10;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 200));
      KeAbPostRelease(v5 + 200);
      KeLeaveCriticalRegion();
      ObfDereferenceObjectWithTag((PVOID)v5, 0x61537350u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
