/*
 * XREFs of ?EmitUpdateCommands@CGeometry2DGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B030
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0ED@$0CA@$0CAF@$0CAG@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D280 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0ED@$0CA@$0CAF@$0CAG@.c)
 */

__int64 __fastcall DirectComposition::CGeometry2DGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CGeometry2DGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,67,32,517,518>::Marshal(
           (char *)this + 56,
           a2,
           *((unsigned int *)this + 8),
           (char *)this + 16);
}
