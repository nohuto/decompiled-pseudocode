/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0CCG@$0CCH@$0A@$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234868
 * Callers:
 *     ?EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402316D0 (-EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<550,551,0,156>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 550, 551);
}
