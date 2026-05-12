/*
 * XREFs of RaBuildHwFirmwareActivateBufferForMiniport @ 0x14009110C
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildHwFirmwareActivateBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  int v4; // ebx
  unsigned int v8; // esi
  int v9; // r10d
  __int64 v10; // r11
  unsigned int v11; // r15d
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // cl
  int v15; // r10d
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // cl
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 Pool; // rax
  int v21; // eax
  __int64 result; // rax
  __int64 v23; // [rsp+58h] [rbp+10h]

  v4 = 0;
  v23 = *(_QWORD *)(a2 + 24);
  v8 = 0;
  v9 = *(_DWORD *)(v23 + 8);
  v10 = 0LL;
  v11 = (v9 >> 31) & 0x80000000;
  if ( (v9 & 0x40000000) != 0 )
    v11 = 0x40000000;
  v12 = (v9 < 0) + 1;
  if ( (*(_DWORD *)(v23 + 8) & 0x40000000) == 0 )
    v12 = v9 < 0;
  v13 = v12;
  if ( (v9 & 0x20000000) != 0 )
    v11 = 0x20000000;
  v14 = v12 + 1;
  if ( (v9 & 0x20000000) == 0 )
    v14 = v13;
  v15 = v9 & 0x10000000;
  v16 = v14;
  if ( v15 )
    v11 = 0x10000000;
  v17 = v14 + 1;
  if ( !v15 )
    v17 = v16;
  if ( v17 <= 1u )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v18 == 1431193940 )
      v19 = *(_QWORD *)(v18 + 24);
    else
      v19 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v18 != 1431193940 )
      v18 = 0LL;
    Pool = RaidAllocatePool(64LL, 68LL, 1918067026LL, a1);
    v10 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 1771392;
      *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
      if ( v18 )
        v21 = *(_DWORD *)(v18 + 1392);
      else
        v21 = *(_DWORD *)(v19 + 4188);
      *(_DWORD *)(v10 + 12) = v21;
      *(_DWORD *)(v10 + 24) = 40;
      *(_DWORD *)(v10 + 28) = 1;
      *(_DWORD *)(v10 + 32) = 24;
      LOBYTE(v4) = v18 == 0;
      *(_DWORD *)(v10 + 36) = 3;
      *(_DWORD *)(v10 + 48) = 12;
      *(_DWORD *)(v10 + 40) = v11 | v4;
      *(_DWORD *)(v10 + 44) = 56;
      *(_DWORD *)(v10 + 56) = 1;
      *(_DWORD *)(v10 + 60) = 12;
      *(_BYTE *)(v10 + 64) = *(_BYTE *)(v23 + 12);
    }
    else
    {
      v8 = -1073741670;
    }
    v4 = 68;
  }
  else
  {
    v8 = -1073741811;
  }
  result = v8;
  *a4 = v4;
  *a3 = v10;
  return result;
}
