/*
 * XREFs of RaBuildHwBootPartitionActivateBufferForMiniport @ 0x140090D60
 * Callers:
 *     RaidAdapterHwBootPartitionActivateIoctl @ 0x140061434 (RaidAdapterHwBootPartitionActivateIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildHwBootPartitionActivateBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r15
  int v5; // edi
  unsigned int v9; // esi
  __int64 v10; // r11
  int v11; // r10d
  int v12; // r14d
  unsigned __int8 v13; // cl
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 Pool; // rax
  int v17; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(v4 + 8);
  v12 = (v11 & 0x40000000) != 0 ? 0x40000000 : 0;
  if ( v11 < 0 )
    v12 = 0x80000000;
  v13 = ((*(_DWORD *)(v4 + 8) & 0x40000000) != 0) + 1;
  if ( v11 >= 0 )
    v13 = (*(_DWORD *)(v4 + 8) & 0x40000000) != 0;
  if ( v13 <= 1u )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v14 == 1431193940 )
      v15 = *(_QWORD *)(v14 + 24);
    else
      v15 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v14 != 1431193940 )
      v14 = 0LL;
    Pool = RaidAllocatePool(64LL, 68LL, 1918067026LL, a1);
    v10 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 1771408;
      *(_QWORD *)(Pool + 4) = 0x464E4950544F4F42LL;
      if ( v14 )
        v17 = *(_DWORD *)(v14 + 1392);
      else
        v17 = *(_DWORD *)(v15 + 4188);
      *(_DWORD *)(v10 + 12) = v17;
      *(_DWORD *)(v10 + 24) = 40;
      *(_DWORD *)(v10 + 28) = 1;
      *(_DWORD *)(v10 + 32) = 24;
      *(_DWORD *)(v10 + 36) = 2;
      *(_DWORD *)(v10 + 48) = 12;
      *(_DWORD *)(v10 + 44) = 56;
      *(_DWORD *)(v10 + 40) |= *(_DWORD *)(v4 + 8) | v12;
      *(_DWORD *)(v10 + 56) = 1;
      *(_DWORD *)(v10 + 60) = 12;
      *(_BYTE *)(v10 + 64) = *(_BYTE *)(v4 + 12);
    }
    else
    {
      v9 = -1073741670;
    }
    v5 = 68;
  }
  else
  {
    v9 = -1073741811;
  }
  result = v9;
  *a3 = v10;
  *a4 = v5;
  return result;
}
