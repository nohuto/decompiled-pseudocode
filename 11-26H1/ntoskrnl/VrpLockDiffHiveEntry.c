/*
 * XREFs of VrpLockDiffHiveEntry @ 0x1409798A8
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14097955C (VrpLoadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B50E94 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall VrpLockDiffHiveEntry(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 24);
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 24, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
}
