/*
 * XREFs of ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x180589C0C
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180587044 (-BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV-$vector@UCRect.c)
 *     ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588234 (-GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV-$vect.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588654 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<Geometry::CRect>::push_back(__int64 a1, _OWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(
             (const void **)a1,
             v3,
             a2);
  *(_OWORD *)v3 = *a2;
  *(_QWORD *)(a1 + 8) += 16LL;
  return result;
}
