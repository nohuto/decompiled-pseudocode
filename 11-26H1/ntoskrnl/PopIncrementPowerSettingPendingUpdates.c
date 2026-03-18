/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x1403B4070
 * Callers:
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140A401E0 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  unsigned __int64 v2; // rdi

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount);
  _InterlockedIncrement((volatile signed __int32 *)&stru_140F10828.KernelShadowStack);
  if ( a1 )
    ++LODWORD(stru_140F10828.InGlobalUpdateVpThreadPriorityList);
  if ( LODWORD(stru_140F10828.KernelShadowStack) == 1 )
  {
    *(_QWORD *)&stru_140F10828.SchedulerAssistPriorityFloor = MEMORY[0xFFFFF78000000008];
    PopDeepSleepSetDisengageReason(3LL);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WriteTransferCount);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
