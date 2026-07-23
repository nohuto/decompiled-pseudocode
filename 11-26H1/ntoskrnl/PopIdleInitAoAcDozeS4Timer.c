/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x1407DE22C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS PopIdleInitAoAcDozeS4Timer()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 131080;
  PopPdcDeviceListLock.SystemAffinityTokenListHead.Next = 0LL;
  KeInitializeIRTimer(
    (__int64)&PopPdcDeviceListLock.SchedulerAssistLastYieldBoostTime,
    (__int64)PopIdleAoAcDozeS4TimerCallback,
    0LL,
    (unsigned __int16 *)&v1,
    2);
  *(_QWORD *)&PopPdcDeviceListLock.SchedulerAssistYieldCounter = 0LL;
  PopPdcDeviceListLock.KcsanThread = (unsigned __int64)PopIdleAoAcDozeToS4;
  PopPdcDeviceListLock.AutoBoostThreadState = 0LL;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)PopIdleGlobalUserPresenceCallback,
           0LL,
           0LL);
}
