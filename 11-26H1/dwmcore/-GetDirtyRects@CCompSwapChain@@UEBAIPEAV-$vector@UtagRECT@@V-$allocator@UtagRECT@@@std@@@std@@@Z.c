/*
 * XREFs of ?GetDirtyRects@CCompSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802A3810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((int **)(a1 + 152), a2);
}
