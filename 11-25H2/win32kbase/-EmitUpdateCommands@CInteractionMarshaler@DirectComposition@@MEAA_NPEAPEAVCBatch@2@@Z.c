/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140056B10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056BDC (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPointerList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056C74 (-EmitPointerList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056D4C (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056DE0 (-EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056EE4 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140056FC4 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitManipulation@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140057644 (-EmitManipulation@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDisableOutputPrediction@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400576CC (-EmitDisableOutputPrediction@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140057750 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2)
    && DirectComposition::CInteractionMarshaler::EmitPointerList(this, a2)
    && DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2)
    && DirectComposition::CInteractionMarshaler::EmitManipulationCaptureList(this, a2)
    && DirectComposition::CInteractionMarshaler::EmitManipulation(this, a2)
    && DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
         (DirectComposition::CInteractionMarshaler *)((char *)this + 56),
         a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
         (DirectComposition::CInteractionMarshaler *)((char *)this + 160),
         a2)
    && DirectComposition::CInteractionMarshaler::EmitDisableOutputPrediction(this, a2) )
  {
    return DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2);
  }
  return v4;
}
