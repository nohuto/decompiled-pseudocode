/*
 * XREFs of MiMakeColor @ 0x14041CB50
 * Callers:
 *     MiInitializePartitionFreeZeroLists @ 0x14086FDC8 (MiInitializePartitionFreeZeroLists.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeColor(char a1, char a2, unsigned __int8 a3, char a4, char a5)
{
  return a3 | ((a2 & 1 | (2 * (a1 & 0x3F | ((a4 & 3 | (4 * (a5 & 3u))) << 7)))) << 8);
}
