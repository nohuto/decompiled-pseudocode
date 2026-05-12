/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x14004B798
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1400370BC (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x140098F10 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x14009B0F4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x14005BF64 (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // r10
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r9

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v4 = 0LL;
    v7 = MaximumProcessorCount;
    do
    {
      v8 = _InterlockedExchange((volatile __int32 *)(v4 + *(_QWORD *)(a1 + 40)), 1);
      v3 = (unsigned int)(v8 >> 31);
      v4 += 64LL;
      LODWORD(v3) = v8 % 2;
      v5 = (unsigned int)(v8 / 2 + v5);
      --v7;
    }
    while ( v7 );
  }
  if ( (int)v5 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), v5 - 0x10000000) - 0x10000000 <= 0 )
    v9 = 0;
  else
    v9 = StorWaitForSingleObject(a1 + 520, v3, v5, v4);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1032), 0x10000000u);
  if ( (_DWORD)v6 )
  {
    v10 = 0LL;
    v11 = v6;
    do
    {
      _InterlockedExchange((volatile __int32 *)(v10 + *(_QWORD *)(a1 + 40)), 0);
      v10 += 64LL;
      --v11;
    }
    while ( v11 );
  }
  return v9;
}
