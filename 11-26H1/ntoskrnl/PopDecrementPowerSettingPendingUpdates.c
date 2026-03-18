/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x1403B4260
 * Callers:
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140A401E0 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopDecrementPowerSettingPendingUpdates(char a1)
{
  unsigned __int64 v2; // rdi

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount);
  if ( a1 )
  {
    _InterlockedAdd(
      (volatile signed __int32 *)&stru_140F10828.KernelShadowStack,
      -LODWORD(stru_140F10828.InGlobalUpdateVpThreadPriorityList));
    LODWORD(stru_140F10828.InGlobalUpdateVpThreadPriorityList) = 0;
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)&stru_140F10828.KernelShadowStack);
  }
  if ( !LODWORD(stru_140F10828.KernelShadowStack) )
  {
    *(_QWORD *)&stru_140F10828.SchedulerAssistPriorityFloor = 0LL;
    PopDeepSleepClearDisengageReason(3LL);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
