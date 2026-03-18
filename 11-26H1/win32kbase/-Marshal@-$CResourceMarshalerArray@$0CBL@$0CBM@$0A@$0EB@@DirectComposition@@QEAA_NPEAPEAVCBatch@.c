/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0CBL@$0CBM@$0A@$0EB@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234820
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230FE0 (-EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<539,540,0,65>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 539, 540);
}
