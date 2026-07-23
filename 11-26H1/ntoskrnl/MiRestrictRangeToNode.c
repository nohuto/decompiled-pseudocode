/*
 * XREFs of MiRestrictRangeToNode @ 0x1402AC9B0
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 *     MiDescribePageRun @ 0x14086C5E8 (MiDescribePageRun.c)
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140CFE128 (MxMapPfnRange.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  int v4; // r8d
  char *v5; // r9
  ULONG_PTR v6; // rcx
  int i; // edx
  int v9; // r10d
  ULONG_PTR v10; // rcx

  v4 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v5 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v5)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; ; i = v9 + 1 )
    {
      while ( 1 )
      {
        if ( v4 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v9 = (i + v4) >> 1;
        v5 = (char *)qword_140E2D860 + 16 * v9;
        if ( BugCheckParameter2 >= *(_QWORD *)v5 )
          break;
        if ( !v9 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v4 = v9 - 1;
      }
      if ( v9 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v5 + 2) )
        break;
    }
    dword_140E2D800 = (i + v4) >> 1;
  }
  v6 = *((_QWORD *)v5 + 2);
  if ( BugCheckParameter2 + a2 > v6 )
    a2 = v6 - BugCheckParameter2;
  if ( qword_140E2D868 )
  {
    v10 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    if ( BugCheckParameter2 + a2 > v10 )
      return v10 - BugCheckParameter2;
  }
  return a2;
}
