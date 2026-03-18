/*
 * XREFs of ?EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233480
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CNC@$0CND@$0A@$0JE@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234940 (-Marshal@-$CResourceMarshalerArray@$0CNC@$0CND@$0A@$0JE@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransform3DGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<722,723,0,148>::Marshal(
                              (char *)this + 72,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  return v4;
}
