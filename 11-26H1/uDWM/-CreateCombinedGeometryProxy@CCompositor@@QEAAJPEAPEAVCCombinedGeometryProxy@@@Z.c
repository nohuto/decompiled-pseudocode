/*
 * XREFs of ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x180081AF8
 * Callers:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x180066508 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateCombinedGeometryProxy(
        struct IDwmChannel **this,
        struct CCombinedGeometryProxy **a2)
{
  return CResourceProxy::Create<CCombinedGeometryProxy>(this[3]);
}
