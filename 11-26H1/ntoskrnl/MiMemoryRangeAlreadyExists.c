/*
 * XREFs of MiMemoryRangeAlreadyExists @ 0x1406E9920
 * Callers:
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMemoryRangeAlreadyExists(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int i; // r8d
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
  {
    v4 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 3);
    if ( v4 )
    {
      v5 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 2);
      if ( a1 >= v5 )
      {
        if ( a1 < v4 + v5 )
          return 1LL;
      }
      else if ( a2 > v5 )
      {
        return 1LL;
      }
    }
  }
  return 0LL;
}
