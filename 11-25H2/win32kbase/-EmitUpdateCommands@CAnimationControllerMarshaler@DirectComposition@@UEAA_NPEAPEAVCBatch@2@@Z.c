/*
 * XREFs of ?EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140108AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetProgressCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140108B24 (-EmitSetProgressCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetPlaybackRateCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140108B98 (-EmitSetPlaybackRateCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FL@$0IA@$0BMO@$0BMP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D2B0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FL@$0IA@$0BMO@$0BMP@.c)
 */

bool __fastcall DirectComposition::CAnimationControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,91,128,462,463>::Marshal(
                          (char *)this + 72,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 16)
    && DirectComposition::CAnimationControllerMarshaler::EmitSetProgressCommand(this, a2) )
  {
    return DirectComposition::CAnimationControllerMarshaler::EmitSetPlaybackRateCommand(this, a2);
  }
  return v4;
}
