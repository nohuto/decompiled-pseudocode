/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x1407DA2F0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x140456C5C (KeInitializeIRTimer.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS PopIdleInitAoAcDozeS4Timer()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 131080;
  PopIdleAoAcDozeS4Lock = 0LL;
  KeInitializeIRTimer(
    (__int64)&PopIdleAoAcDozeS4Timer,
    (__int64)PopIdleAoAcDozeS4TimerCallback,
    0LL,
    (unsigned __int16 *)&v1,
    2);
  PopIdleAoAcDozeS4WorkItem.Parameter = 0LL;
  PopIdleAoAcDozeS4WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopIdleAoAcDozeToS4;
  PopIdleAoAcDozeS4WorkItem.List.Flink = 0LL;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)PopIdleGlobalUserPresenceCallback,
           0LL,
           0LL);
}
