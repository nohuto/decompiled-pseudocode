/*
 * XREFs of VslRegisterIumPowerCallbacks @ 0x140CB99FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

void VslRegisterIumPowerCallbacks()
{
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, &OutputBuffer, 1u) >= 0 )
  {
    if ( OutputBuffer )
    {
      ExSubscribeWnfStateChange((__int64)&VslpIumCsWnfSubscription, (__int64)&WNF_PO_SCENARIO_CHANGE);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
    }
  }
}
