/*
 * XREFs of PnpSetBlockedDriverEvent @ 0x1407B09D4
 * Callers:
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetBlockedDriverEvent(_OWORD *a1)
{
  __int64 DeviceEventEntry; // rax

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(200LL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 7;
  *(_DWORD *)(DeviceEventEntry + 156) = 80;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DRIVER_BLOCKED;
  *(_OWORD *)(DeviceEventEntry + 168) = *a1;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
