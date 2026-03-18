/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@$0COD@$0COE@$00$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234988
 * Callers:
 *     ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402337F0 (-EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<739,740,1,156>::Marshal(
        DirectComposition::CResourceMarshalerArrayBase *this,
        struct DirectComposition::CBatch ***a2,
        int a3)
{
  bool v5; // di
  __int64 v6; // r9

  v5 = DirectComposition::CResourceMarshalerArrayBase::ReferenceTypeMarshal(this, a2, a3, 739, 740);
  if ( v5 && *((_QWORD *)this + 1) )
    DirectComposition::CResourceMarshalerArrayBase::Clear(this, (*a2)[1], 0LL, v6);
  return v5;
}
