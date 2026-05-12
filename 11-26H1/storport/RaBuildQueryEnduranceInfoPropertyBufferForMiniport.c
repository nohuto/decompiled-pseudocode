/*
 * XREFs of RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x14009155C
 * Callers:
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1400A3DB4 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryEnduranceInfoPropertyBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // rbx
  int v5; // edi
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 Pool; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v8 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 84LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_QWORD *)(Pool + 4) = 0x464E495255444E45LL;
    *(_DWORD *)(Pool + 16) = 2954240;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1392);
    else
      v11 = *(_DWORD *)(v9 + 4188);
    *(_DWORD *)(Pool + 12) = v11;
    *(_DWORD *)(Pool + 24) = 56;
    *(_DWORD *)(Pool + 28) = 56;
    *(_DWORD *)(Pool + 32) = 56;
    v5 = 84;
  }
  else
  {
    v8 = -1073741670;
  }
  *a3 = Pool;
  result = v8;
  *a4 = v5;
  return result;
}
