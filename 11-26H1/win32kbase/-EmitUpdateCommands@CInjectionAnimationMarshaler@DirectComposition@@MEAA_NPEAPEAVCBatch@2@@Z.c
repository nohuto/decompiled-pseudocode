/*
 * XREFs of ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244920
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140120744 (-EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140244860 (-EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInjectionAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CInjectionAnimationMarshaler::EmitSetInjectionData(this, a2) )
  {
    return DirectComposition::CResourceMarshaler::EmitUpdatesCompletedForResource(this, a2) != 0;
  }
  return v4;
}
