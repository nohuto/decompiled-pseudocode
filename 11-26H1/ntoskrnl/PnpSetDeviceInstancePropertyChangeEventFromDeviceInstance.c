/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404C2EA8
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1404C2E8C (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiCMSetRegistryProperty @ 0x14098D258 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x14098DA68 (PiCMSetObjectProperty.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x14090962C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(unsigned __int16 *a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*a1 + 202);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 120) = GUID_DEVICE_PROPERTY_CHANGED;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 136) = 9;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 152) = 0;
  *(_DWORD *)(DeviceEventEntry + 156) = v2;
  *(_QWORD *)(DeviceEventEntry + 160) = 0LL;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 168), v5, *a1);
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*a1 >> 1) + 168) = 0;
  return PnpInsertEventInQueue(v4);
}
