/*
 * XREFs of PnpInsertNoopEvent @ 0x1409AB01C
 * Callers:
 *     PnpDeferNotification @ 0x1409AAF28 (PnpDeferNotification.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpInsertNoopEvent(__int64 a1, __int64 a2)
{
  __int64 DeviceEventEntry; // rax

  DeviceEventEntry = PnpCreateDeviceEventEntry(200LL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = a1;
  *(_DWORD *)(DeviceEventEntry + 136) = 1;
  *(_QWORD *)(DeviceEventEntry + 144) = a2;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 156) = 80;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
