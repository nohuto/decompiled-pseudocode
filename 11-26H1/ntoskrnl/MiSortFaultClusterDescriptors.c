/*
 * XREFs of MiSortFaultClusterDescriptors @ 0x14048E790
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSortFaultClusterDescriptors(unsigned __int64 a1)
{
  unsigned __int64 *i; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 *j; // r8

  for ( i = (unsigned __int64 *)(a1 + 8); (unsigned __int64)i < a1 + 32; ++i )
  {
    v2 = *i;
    for ( j = i - 1; (unsigned __int64)j >= a1; --j )
    {
      if ( *j >> 16 <= v2 >> 16 )
        break;
      j[1] = *j;
    }
    j[1] = v2;
  }
}
