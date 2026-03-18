/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0CNE@$0CNF@$0A@$0JD@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234964
 * Callers:
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14017BDB0 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<724,725,0,147>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 724, 725);
}
