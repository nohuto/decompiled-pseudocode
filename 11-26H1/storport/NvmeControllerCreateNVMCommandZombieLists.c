/*
 * XREFs of NvmeControllerCreateNVMCommandZombieLists @ 0x14011FBF8
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeControllerCreateNVMCommandZombieLists(__int64 a1)
{
  __int64 Pool; // rax
  unsigned int v3; // ebx

  Pool = RaidAllocatePool(
           72LL,
           16LL * *(unsigned __int16 *)(a1 + 22),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  v3 = 0;
  *(_QWORD *)(a1 + 1184) = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
      InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(a1 + 1184) + 16LL * v3++));
    while ( v3 < *(unsigned __int16 *)(a1 + 22) );
  }
  return 0LL;
}
