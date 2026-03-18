/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B1F1C (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2590 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPointerList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2634 (-EmitPointerList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2710 (-EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2818 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitManipulation@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B28F8 (-EmitManipulation@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B297C (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDisableOutputPrediction@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2A10 (-EmitDisableOutputPrediction@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2A98 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
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
