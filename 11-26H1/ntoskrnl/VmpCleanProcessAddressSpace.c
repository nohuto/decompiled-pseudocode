/*
 * XREFs of VmpCleanProcessAddressSpace @ 0x14081CB04
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VmpCleanProcessAddressSpace(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  __int64 v11; // rdx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a2 + 136);
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a2 + 136, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  *(_WORD *)(a2 + 154) |= 1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)stru_140F066E8.InitialStack) )
  {
    guard_dispatch_icall_no_overrides(a1, v11);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)stru_140F066E8.InitialStack);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 144));
}
