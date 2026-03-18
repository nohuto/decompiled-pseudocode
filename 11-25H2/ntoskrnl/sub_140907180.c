/*
 * XREFs of sub_140907180 @ 0x140907180
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E28D4 @ 0x1409E28D4 (sub_1409E28D4.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     sub_1409072F0 @ 0x1409072F0 (sub_1409072F0.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 */

__int64 __fastcall sub_140907180(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 || a2 <= 0x20 || (v2 = sub_1409072F0(Source1 + 32, a2 - 32), v2 >= 0) )
    v2 = -1073741811;
  SddlpFree(0LL);
  return (unsigned int)v2;
}
