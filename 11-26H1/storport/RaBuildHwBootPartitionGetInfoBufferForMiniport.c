/*
 * XREFs of RaBuildHwBootPartitionGetInfoBufferForMiniport @ 0x140091018
 * Callers:
 *     RaidAdapterHwBootPartitionGetInfoIoctl @ 0x140061CB8 (RaidAdapterHwBootPartitionGetInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildHwBootPartitionGetInfoBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v9; // rsi
  __int64 Pool; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 88LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 1771408;
    *(_QWORD *)(Pool + 4) = 0x464E4950544F4F42LL;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1392);
    else
      v11 = *(_DWORD *)(v9 + 4188);
    *(_DWORD *)(Pool + 12) = v11;
    *(_DWORD *)(Pool + 24) = 60;
    *(_DWORD *)(Pool + 28) = 1;
    *(_DWORD *)(Pool + 32) = 24;
    *(_DWORD *)(Pool + 36) = 3;
    *(_DWORD *)(Pool + 40) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(Pool + 48) = 32;
    *(_DWORD *)(Pool + 44) = 56;
    *(_DWORD *)(Pool + 56) = 1;
    *(_DWORD *)(Pool + 60) = 32;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = Pool;
  result = v5;
  *a4 = 88;
  return result;
}
