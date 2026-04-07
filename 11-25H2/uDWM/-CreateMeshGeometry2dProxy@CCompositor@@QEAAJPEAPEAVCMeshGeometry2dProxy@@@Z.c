/*
 * XREFs of ?CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18002F5FC
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18002F488 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800CEBD8 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMeshGeometry2dProxy(CCompositor *this, struct CMeshGeometry2dProxy **a2)
{
  return CCompositor::CreateProxy<CMeshGeometry2dProxy>(this, a2);
}
