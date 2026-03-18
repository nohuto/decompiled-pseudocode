/*
 * XREFs of MiMirrorNodeFreeZeroPages @ 0x140BE94D4
 * Callers:
 *     MiMirrorReduceBlackWrites @ 0x140C03640 (MiMirrorReduceBlackWrites.c)
 *     MiWalkPagesOnLists @ 0x140C05688 (MiWalkPagesOnLists.c)
 * Callees:
 *     MiWalkAllFreeZeroLists @ 0x14042F800 (MiWalkAllFreeZeroLists.c)
 *     MiWalkAllHugeRanges @ 0x140532B50 (MiWalkAllHugeRanges.c)
 */

__int64 __fastcall MiMirrorNodeFreeZeroPages(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v6 = 0;
  v4[0] = a1;
  v5 = a3;
  v4[1] = a2;
  MiWalkAllFreeZeroLists(a2, (__int64)MiMirrorZeroFreeListsCallback, (__int64)v4);
  return MiWalkAllHugeRanges((__int64)MiMirrorHugeRangeZeroFreeListsCallback, (__int64)v4);
}
