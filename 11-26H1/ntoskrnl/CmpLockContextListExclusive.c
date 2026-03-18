/*
 * XREFs of CmpLockContextListExclusive @ 0x140A318F8
 * Callers:
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmSetCallbackObjectContext @ 0x140A31530 (CmSetCallbackObjectContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockContextListExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock.SListFaultAddress, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpCallbackListLock.SListFaultAddress,
      v5,
      (__int64)&CmpCallbackListLock.SListFaultAddress);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
