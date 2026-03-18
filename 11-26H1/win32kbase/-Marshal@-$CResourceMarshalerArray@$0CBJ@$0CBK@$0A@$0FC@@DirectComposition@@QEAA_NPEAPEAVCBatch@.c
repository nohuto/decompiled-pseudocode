/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0CBJ@$0CBK@$0A@$0FC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402347FC
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230FE0 (-EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<537,538,0,82>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 537, 538);
}
