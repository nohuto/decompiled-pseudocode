/*
 * XREFs of PopWnfBluetoothChargingCallback @ 0x140606910
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
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
      v5 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      BYTE5(PpmIdlePolicyLock.ReadOperationCount) = v7[0];
      if ( PopCsResiliencyStats[0] && v7[0] && !HIBYTE(word_140F10082) )
        HIBYTE(word_140F10082) = 1;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
