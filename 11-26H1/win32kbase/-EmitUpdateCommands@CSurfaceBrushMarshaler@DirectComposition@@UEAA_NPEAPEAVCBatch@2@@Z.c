/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14016F970
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetIsAtlasSurfaceCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FA4C (-EmitSetIsAtlasSurfaceCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FAC0 (-EmitSetTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSurfaceCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FB3C (-EmitSetSurfaceCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetVerticalAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FBB8 (-EmitSetVerticalAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetInterpolationModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FC2C (-EmitSetInterpolationModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetStretchModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FCA0 (-EmitSetStretchModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSuperDownSampleCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FD14 (-EmitSetSuperDownSampleCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetSnapToPixelsCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FD8C (-EmitSetSnapToPixelsCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHorizontalAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FE04 (-EmitSetHorizontalAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetSurfaceDirtyRectCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FE78 (-EmitSetSurfaceDirtyRectCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetSurfaceContentRectCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016FF08 (-EmitSetSurfaceContentRectCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 */

bool __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSurfaceBrushMarshaler::EmitSetIsAtlasSurfaceCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetSurfaceDirtyRectCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetSurfaceCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetSurfaceContentRectCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetHorizontalAlignmentCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetVerticalAlignmentCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetStretchModeCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetInterpolationModeCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetTransformCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitSetSnapToPixelsCommand(this, a2) )
  {
    return DirectComposition::CSurfaceBrushMarshaler::EmitSetSuperDownSampleCommand(this, a2);
  }
  return v4;
}
