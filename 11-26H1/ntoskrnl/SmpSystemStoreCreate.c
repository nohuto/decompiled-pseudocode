/*
 * XREFs of SmpSystemStoreCreate @ 0x140820570
 * Callers:
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmGetNumberOfPhysicalPages @ 0x1404A8DD0 (MmGetNumberOfPhysicalPages.c)
 *     SmpDirtyStoreCreate @ 0x140ADC3B8 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  int v10; // esi

  v4 = (unsigned __int64 *)(a1 + 2392);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 2392, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( *(_DWORD *)(a1 + 2384) == -1 )
  {
    MmGetNumberOfPhysicalPages(0);
    v10 = SmpDirtyStoreCreate((struct _SM_PARTITION *)a1);
    if ( v10 >= 0 )
      *(_DWORD *)(a1 + 2384) = 0;
  }
  else
  {
    v10 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
