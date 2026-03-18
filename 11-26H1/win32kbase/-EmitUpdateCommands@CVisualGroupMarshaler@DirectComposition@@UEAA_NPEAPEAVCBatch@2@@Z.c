/*
 * XREFs of ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402337F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@?$CResourceMarshalerArray@$0COD@$0COE@$00$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234988 (-Marshal@-$CResourceMarshalerArray@$0COD@$0COE@$00$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshalerArray<739,740,1,156>::Marshal((DirectComposition::CVisualGroupMarshaler *)((char *)this + 56));
}
