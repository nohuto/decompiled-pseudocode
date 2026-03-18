/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A4330
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetEndPointCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A39E0 (-EmitSetEndPointCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C3730 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetStartPointCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F654 (-EmitSetStartPointCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CLinearGradientBrushMarshaler::EmitSetStartPointCommand(
         this,
         (struct DirectComposition::CBatch **)a2) )
  {
    return DirectComposition::CLinearGradientBrushMarshaler::EmitSetEndPointCommand(this, a2) != 0;
  }
  return v4;
}
