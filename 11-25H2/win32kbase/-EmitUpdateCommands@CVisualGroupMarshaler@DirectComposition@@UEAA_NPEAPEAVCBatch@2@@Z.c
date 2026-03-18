/*
 * XREFs of ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LG@$0CA@$0CIK@$0CIL@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D3D0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LG@$0CA@$0CIK@$0CIL@.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,182,32,650,651>::Marshal(
           (char *)this + 56,
           a2,
           *((unsigned int *)this + 8),
           (char *)this + 16);
}
