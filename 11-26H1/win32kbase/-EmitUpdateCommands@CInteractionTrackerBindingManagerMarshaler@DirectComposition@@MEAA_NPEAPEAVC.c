/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244180
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEE00 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140120744 (-EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14017DA88 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402440B8 (-EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectCompos.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(this, a2) )
  {
    return DirectComposition::CResourceMarshaler::EmitUpdatesCompletedForResource(this, a2) != 0;
  }
  return v4;
}
