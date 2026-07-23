/*
 * XREFs of PnpSetDeviceInstanceRemovalEvent @ 0x1404DD860
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstanceRemovalEvent(__int64 a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *(unsigned __int16 *)(a1 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(a1 + 40) + 202);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVINST_REMOVE_COMPLETE;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 10;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 152) = 0;
  *(_DWORD *)(DeviceEventEntry + 156) = v2;
  *(_QWORD *)(DeviceEventEntry + 160) = 0LL;
  v5 = *(const void **)(a1 + 48);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 168), v5, *(unsigned __int16 *)(a1 + 40));
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 40) >> 1) + 168) = 0;
  return PnpInsertEventInQueue(v4);
}
