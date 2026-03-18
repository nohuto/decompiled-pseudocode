/*
 * XREFs of ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14017BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CNE@$0CNF@$0A@$0JD@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234964 (-Marshal@-$CResourceMarshalerArray@$0CNE@$0CNF@$0A@$0JD@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<724,725,0,147>::Marshal(
                              (char *)this + 72,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  return v4;
}
