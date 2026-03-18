/*
 * XREFs of ?EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AA7C (-EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AB54 (-EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

bool __fastcall DirectComposition::CManipulationTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CManipulationTransformMarshaler::EmitSetComponents(this, a2) )
    return DirectComposition::CManipulationTransformMarshaler::EmitSetTracingCookie(this, a2);
  return v4;
}
