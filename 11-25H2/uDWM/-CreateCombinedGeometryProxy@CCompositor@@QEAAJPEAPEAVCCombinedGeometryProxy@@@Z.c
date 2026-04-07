/*
 * XREFs of ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x180040C38
 * Callers:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x18003FD34 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateCombinedGeometryProxy(CCompositor *this, struct CCombinedGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CCombinedGeometryProxy>(this, a2);
}
