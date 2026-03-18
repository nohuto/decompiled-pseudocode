/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140CD4C90
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404ECAE8 (PopReadRegKeyValue.c)
 *     PopReadUlongPowerKey @ 0x140600D50 (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

char PopBatteryInitPhaseTwo()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  v0 = EtwRegister(
         &BATTERY_ETW_PROVIDER,
         (PETWENABLECALLBACK)PopBatteryEtwCallback,
         0LL,
         (PREGHANDLE)&PopWeakChargerLock.Header.WaitListHead.Blink);
  if ( v0 >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange((__int64)&v2, (__int64)&WNF_USB_ERROR_NOTIFICATION);
    ExSubscribeWnfStateChange((__int64)&v2, (__int64)&WNF_PO_POWER_ADAPTER_REC_OVERRIDE);
    v2 = 0;
    LOBYTE(stru_140F10070.FirstArgument) = 0;
    v0 = PopReadRegKeyValue(
           (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           L"BatteryFeaturesGranted",
           4uLL,
           0,
           &v2);
    if ( v0 >= 0 )
    {
      LOBYTE(v0) = v2 & 1;
      LOBYTE(stru_140F10070.FirstArgument) = v2 & 1;
    }
  }
  return v0;
}
