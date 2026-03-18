/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402348B0
 * Callers:
 *     ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402326D0 (-EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<640,641,0,117>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  return DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(a1, a2, a3, 640, 641);
}
