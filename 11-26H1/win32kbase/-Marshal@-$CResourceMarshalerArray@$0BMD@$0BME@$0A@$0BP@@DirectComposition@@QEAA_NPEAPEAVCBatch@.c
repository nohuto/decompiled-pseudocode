/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0BMD@$0BME@$0A@$0BP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402347B4
 * Callers:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<451,452,0,31>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 451, 452);
}
