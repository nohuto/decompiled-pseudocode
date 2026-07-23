/*
 * XREFs of PnpSetPowerVetoEvent @ 0x1407B0CA8
 * Callers:
 *     IoNotifyPowerOperationVetoed @ 0x1407A47A8 (IoNotifyPowerOperationVetoed.c)
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetPowerVetoEvent(int a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, const void **a6)
{
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r15d
  __int64 DeviceEventEntry; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  GUID v15; // xmm0

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v9 = *(_QWORD *)(a4[39] + 40LL);
  if ( !v9 )
    return 3221225712LL;
  if ( a6 )
    v10 = *(unsigned __int16 *)a6;
  else
    v10 = 0;
  v11 = v10 + *(unsigned __int16 *)(v9 + 40) + 84;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)(v11 + 120));
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(a4, 0x56706E50u);
  *(_DWORD *)(DeviceEventEntry + 168) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 156) = v11;
  *(_QWORD *)(DeviceEventEntry + 160) = a4;
  *(_QWORD *)(DeviceEventEntry + 144) = 0LL;
  memmove((void *)(DeviceEventEntry + 172), *(const void **)(v9 + 48), *(unsigned __int16 *)(v9 + 40));
  v13 = (unsigned __int64)*(unsigned __int16 *)(v9 + 40) >> 1;
  *(_WORD *)(DeviceEventEntry + 2 * v13 + 172) = 0;
  if ( a6 )
  {
    v14 = DeviceEventEntry + 2 * v13;
    memmove((void *)(v14 + 174), a6[1], *(unsigned __int16 *)a6);
    *(_WORD *)(v14 + 2 * ((unsigned __int64)*(unsigned __int16 *)a6 >> 1) + 174) = 0;
  }
  if ( a1 == 7 )
  {
    v15 = GUID_DEVICE_WARM_EJECT_VETOED;
  }
  else if ( a1 == 3 )
  {
    v15 = GUID_DEVICE_HIBERNATE_VETOED;
  }
  else
  {
    v15 = GUID_DEVICE_STANDBY_VETOED;
  }
  *(_DWORD *)(DeviceEventEntry + 136) = 6;
  *(GUID *)(DeviceEventEntry + 120) = v15;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
