/*
 * XREFs of ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140115F50
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025020 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSelection@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140115FB8 (-EmitSetSelection@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140116038 (-EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401161C0 (-EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(this, a2)
    && DirectComposition::CConditionalExpressionMarshaler::EmitSetDefaultAnimation(this, a2) )
  {
    return DirectComposition::CConditionalExpressionMarshaler::EmitSetSelection(this, a2);
  }
  return v4;
}
