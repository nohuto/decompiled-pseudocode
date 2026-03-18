/*
 * XREFs of ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x140100A6C
 * Callers:
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x14002432C (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025020 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D0F80 (-EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F952C (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F9658 (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectC.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103A10 (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401043EC (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CEF8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131B2C (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131E88 (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019919C (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1402316E8 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x140232F38 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402357E0 (-EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___ @ 0x1402367B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215c.c)
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140236C14 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 *     ?EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14023C4C8 (-EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___ @ 0x14023C98C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CBatch::AllocateNewFragment(
        struct DirectComposition::CBatch ***a1,
        unsigned __int64 *a2)
{
  struct DirectComposition::CBatch **v2; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax

  v2 = *a1;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                    (*a1)[1],
                    *((_DWORD *)*a1 + 4),
                    (_BYTE)(*a1)[4] & 1,
                    1,
                    0);
  if ( BatchFragment )
  {
    *((_BYTE *)v2[17] + 64) = 0;
    *v2 = BatchFragment;
    *a1 = (struct DirectComposition::CBatch **)BatchFragment;
    if ( a2 )
      *a2 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    LOBYTE(BatchFragment) = 1;
  }
  return (char)BatchFragment;
}
