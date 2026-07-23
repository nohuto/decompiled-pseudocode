/*
 * XREFs of MiAcquireRemoveMemoryResources @ 0x1406EC780
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiAllocateInitialMemoryBlocks @ 0x14086BDD8 (MiAllocateInitialMemoryBlocks.c)
 */

__int64 __fastcall MiAcquireRemoveMemoryResources(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  int InitialMemoryBlocks; // eax
  unsigned int v4; // ecx

  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
  {
    v1 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
    v2 = v1 + 48LL * *(_QWORD *)(a1 + 32);
    while ( v1 < v2 )
    {
      if ( (*(_DWORD *)(v1 + 32) & 0x40000000) != 0 )
        return 3221227273LL;
      v1 += 48LL;
    }
  }
  InitialMemoryBlocks = MiAllocateInitialMemoryBlocks();
  v4 = 0;
  if ( InitialMemoryBlocks < 0 )
    return (unsigned int)InitialMemoryBlocks;
  return v4;
}
