/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0EH@$0EG@$0A@$0JK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023E988
 * Callers:
 *     ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023E8F0 (-EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<71,70,0,154>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 71, 70);
}
