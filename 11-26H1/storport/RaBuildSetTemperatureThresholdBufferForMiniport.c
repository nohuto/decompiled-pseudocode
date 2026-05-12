/*
 * XREFs of RaBuildSetTemperatureThresholdBufferForMiniport @ 0x140091A14
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x14005FA7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1400A0F8C (RaUnitSetTemperatureThresholdIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildSetTemperatureThresholdBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _OWORD *v6; // rbp
  __int64 v9; // rsi
  __int64 Pool; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_OWORD **)(a2 + 24);
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 44LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_QWORD *)(Pool + 4) = 0x54504D4554544553LL;
    *(_DWORD *)(Pool + 16) = 3002880;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1392);
    else
      v11 = *(_DWORD *)(v9 + 4188);
    *(_DWORD *)(Pool + 12) = v11;
    *(_DWORD *)(Pool + 24) = 16;
    *(_OWORD *)(Pool + 28) = *v6;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = Pool;
  result = v5;
  *a4 = 44;
  return result;
}
