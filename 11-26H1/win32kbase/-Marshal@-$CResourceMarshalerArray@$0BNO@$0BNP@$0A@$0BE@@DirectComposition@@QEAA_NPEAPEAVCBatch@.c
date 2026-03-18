/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0BNO@$0BNP@$0A@$0BE@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402347D8
 * Callers:
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C3730 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<478,479,0,20>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 478, 479);
}
