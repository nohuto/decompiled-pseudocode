/*
 * XREFs of ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x14011CB80
 * Callers:
 *     <none>
 * Callees:
 *     AlignRects @ 0x14011CB98 (AlignRects.c)
 */

__int64 __fastcall DxgkEngAdjustMonitorPosition(struct tagRECT *a1, unsigned int a2)
{
  return AlignRects(a1, a2);
}
