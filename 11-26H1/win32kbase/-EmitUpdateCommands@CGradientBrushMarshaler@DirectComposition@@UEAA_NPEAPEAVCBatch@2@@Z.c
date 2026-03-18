/*
 * XREFs of ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C3730
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A4330 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A90 (-EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetExtendModeCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019FCA0 (-EmitSetExtendModeCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTransformCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A3DB4 (-EmitSetTransformCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInterpolationSpaceCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CFB4 (-EmitSetInterpolationSpaceCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetMappingModeCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022D204 (-EmitSetMappingModeCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0BNO@$0BNP@$0A@$0BE@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402347D8 (-Marshal@-$CResourceMarshalerArray@$0BNO@$0BNP@$0A@$0BE@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGradientBrushMarshaler::EmitSetTransformCommand(this, a2)
    && DirectComposition::CGradientBrushMarshaler::EmitSetExtendModeCommand(this, a2)
    && DirectComposition::CGradientBrushMarshaler::EmitSetMappingModeCommand(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CGradientBrushMarshaler::EmitSetInterpolationSpaceCommand(
         this,
         (struct DirectComposition::CBatch **)a2) )
  {
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<478,479,0,20>::Marshal(
                              (char *)this + 80,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  }
  return v4;
}
