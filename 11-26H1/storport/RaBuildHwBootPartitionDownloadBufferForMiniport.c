/*
 * XREFs of RaBuildHwBootPartitionDownloadBufferForMiniport @ 0x140090EBC
 * Callers:
 *     RaidAdapterHwBootPartitionDownloadIoctl @ 0x140061864 (RaidAdapterHwBootPartitionDownloadIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaBuildHwBootPartitionDownloadBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 Pool; // rax
  int v14; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a2 + 24);
  v8 = 0LL;
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  v10 = *(_QWORD *)(v6 + 24) + 96LL;
  LODWORD(v11) = -1;
  if ( v10 >= 0x60 )
    v11 = *(_QWORD *)(v6 + 24) + 96LL;
  v12 = *(_QWORD *)(v6 + 24) >= 0xFFFFFFFFFFFFFFA0uLL ? 0xC0000095 : 0;
  if ( v10 >= 0x60 )
  {
    Pool = RaidAllocatePool(64LL, (unsigned int)v11, 1918067026LL, a1);
    v8 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 1771408;
      *(_QWORD *)(Pool + 4) = 0x464E4950544F4F42LL;
      if ( v4 )
        v14 = *(_DWORD *)(v4 + 1392);
      else
        v14 = *(_DWORD *)(v9 + 4188);
      *(_DWORD *)(v8 + 12) = v14;
      *(_DWORD *)(v8 + 24) = v11 - 28;
      *(_DWORD *)(v8 + 48) = v11 - 56;
      *(_DWORD *)(v8 + 28) = 1;
      *(_DWORD *)(v8 + 36) = 1;
      *(_DWORD *)(v8 + 32) = 24;
      *(_DWORD *)(v8 + 44) = 56;
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v8 + 56) = 1;
      *(_DWORD *)(v8 + 60) = *(_DWORD *)(v6 + 24) + 32;
      *(_QWORD *)(v8 + 72) = *(_QWORD *)(v6 + 16);
      *(_BYTE *)(v8 + 64) = *(_BYTE *)(v6 + 12);
      *(_QWORD *)(v8 + 80) = *(_QWORD *)(v6 + 24);
      memmove((void *)(v8 + 88), (const void *)(v6 + 32), *(unsigned int *)(v6 + 24));
    }
    else
    {
      v12 = -1073741670;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  result = v12;
  *a3 = v8;
  *a4 = v11;
  return result;
}
