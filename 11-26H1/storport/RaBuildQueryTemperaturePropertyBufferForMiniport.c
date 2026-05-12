/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x140091624
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x14006CDA4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1400A5024 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _DWORD *v8; // r10
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 Pool; // rax
  int v13; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v5 == 1431193940 )
    v10 = *(_QWORD *)(v5 + 24);
  else
    v10 = *(_QWORD *)(a1 + 64);
  v11 = v9 + 28;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( v11 < 0x1C )
  {
    v11 = -1;
    v4 = -1073741675;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, v11, 1918067026LL, a1);
    v8 = (_DWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x54415245504D4554LL;
      if ( v5 )
        v13 = *(_DWORD *)(v5 + 1392);
      else
        v13 = *(_DWORD *)(v10 + 4188);
      v8[3] = v13;
      v8[7] = 40;
      v8[8] = 40;
      v8[6] = v9;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v11;
  *a3 = v8;
  return result;
}
