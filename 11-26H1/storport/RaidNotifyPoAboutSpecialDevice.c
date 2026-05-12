/*
 * XREFs of RaidNotifyPoAboutSpecialDevice @ 0x1400C54E8
 * Callers:
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1400360D4 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     NvmeAdapterDeviceUsageNotificationIrp @ 0x1400D4AA0 (NvmeAdapterDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidNotifyPoAboutSpecialDevice(__int64 a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3[1] = 0;
  v5 = 16LL;
  v3[0] = 59 - (a2 != 0);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v3, 0x18u, 0LL, 0);
}
