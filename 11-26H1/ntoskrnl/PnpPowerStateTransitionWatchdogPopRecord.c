/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140B46AD8
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C04DF0 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 */

NTSTATUS PnpPowerStateTransitionWatchdogPopRecord()
{
  _OWORD InputBuffer[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+60h] [rbp-18h]

  v2 = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[0]) = 88;
  DWORD2(InputBuffer[0]) = 1;
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x38u, 0LL, 0);
}
