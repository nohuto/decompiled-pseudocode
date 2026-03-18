/*
 * XREFs of PopModernStandbyNotificationInit @ 0x140CD6534
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 */

__int64 __fastcall PopModernStandbyNotificationInit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopModernStandbyStateNotify.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&PopModernStandbyStateNotify.Header.Lock = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify, a2, a3, a4);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_GLOBAL_USER_PRESENCE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         (PVOID *)&PopModernStandbyStateNotify.QuantumTarget) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_CONSOLE_DISPLAY_STATE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &PopModernStandbyStateNotify.InitialStack) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         (PVOID *)&PopModernStandbyStateNotify.StackLimit) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &PopModernStandbyStateNotify.StackBase) < 0 )
  {
    if ( PopModernStandbyStateNotify.StackBase )
    {
      PoUnregisterPowerSettingCallback(PopModernStandbyStateNotify.StackBase);
      PopModernStandbyStateNotify.StackBase = 0LL;
    }
    if ( PopModernStandbyStateNotify.StackLimit )
    {
      PoUnregisterPowerSettingCallback(PopModernStandbyStateNotify.StackLimit);
      PopModernStandbyStateNotify.StackLimit = 0LL;
    }
    if ( PopModernStandbyStateNotify.InitialStack )
    {
      PoUnregisterPowerSettingCallback(PopModernStandbyStateNotify.InitialStack);
      PopModernStandbyStateNotify.InitialStack = 0LL;
    }
    if ( PopModernStandbyStateNotify.QuantumTarget )
    {
      PoUnregisterPowerSettingCallback((PVOID)PopModernStandbyStateNotify.QuantumTarget);
      PopModernStandbyStateNotify.QuantumTarget = 0LL;
    }
  }
  return PopReleaseRwLock(&PopModernStandbyStateNotify);
}
