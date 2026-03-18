/*
 * XREFs of PnpInsertNoopEvent @ 0x14090945C
 * Callers:
 *     PnpDeferNotification @ 0x140909368 (PnpDeferNotification.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x14090962C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
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
