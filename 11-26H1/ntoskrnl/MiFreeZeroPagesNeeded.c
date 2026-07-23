/*
 * XREFs of MiFreeZeroPagesNeeded @ 0x1402AAA2C
 * Callers:
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1404B1BD0 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1402AAAA8 (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiFreeZeroPagesNeeded(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 NodeStandbyPageCount; // rax
  __int64 v9; // r10
  __int64 v10; // rcx

  v3 = a2;
  v6 = 56320LL * (unsigned int)a2;
  LOBYTE(a2) = a3;
  if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + v6, a2, 0x80000) >= 0x200 )
    return 0LL;
  LOBYTE(v7) = a3;
  NodeStandbyPageCount = MiGetNodeStandbyPageCount(a1, v3, v7);
  v10 = 1024 - v9;
  if ( NodeStandbyPageCount < 0x1000 )
    return 0LL;
  return v10;
}
