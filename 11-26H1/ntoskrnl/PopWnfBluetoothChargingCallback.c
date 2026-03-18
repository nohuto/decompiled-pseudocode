/*
 * XREFs of PopWnfBluetoothChargingCallback @ 0x140603E10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfBluetoothChargingCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  KIRQL v5; // al
  _BYTE v7[4]; // [rsp+20h] [rbp-18h] BYREF
  int v8[5]; // [rsp+24h] [rbp-14h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v7[0] = 0;
  v8[0] = 1;
  v4 = ExQueryWnfStateData(a1, &v9, v7, v8);
  if ( v4 >= 0 )
  {
    if ( v8[0] )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
      HIBYTE(word_140F10724) = v7[0];
      if ( LOBYTE(stru_140F10828.Spare35[0]) && v7[0] && !BYTE3(stru_140F10828.Spare35[0]) )
        BYTE3(stru_140F10828.Spare35[0]) = 1;
      KeReleaseSpinLock(&stru_140F10070.Spare35[1], v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
