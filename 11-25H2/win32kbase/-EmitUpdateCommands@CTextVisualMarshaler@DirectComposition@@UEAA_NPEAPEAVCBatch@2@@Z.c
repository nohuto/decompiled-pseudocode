/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025730 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CHK@$0CHL@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D1F0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CHK@$0CHL@@D.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$01$0CHM@$0CHN@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D220 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$01$0CHM@$0CHN@@D.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$03$0CHO@$0CHP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D250 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$03$0CHO@$0CHP@@D.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,35,1,634,635>::Marshal(
                          (char *)this + 376,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 368)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,42,2,636,637>::Marshal(
                          (char *)this + 400,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 368) )
  {
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,42,4,638,639>::Marshal(
                              (char *)this + 424,
                              a2,
                              *((unsigned int *)this + 8),
                              (char *)this + 368) != 0;
  }
  return v4;
}
