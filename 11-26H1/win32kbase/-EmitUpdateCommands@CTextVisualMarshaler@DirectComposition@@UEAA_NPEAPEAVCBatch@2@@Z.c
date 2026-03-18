/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233400
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CMM@$0CMN@$0A@$0BM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402348D4 (-Marshal@-$CResourceMarshalerArray@$0CMM@$0CMN@$0A@$0BM@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CMO@$0CMP@$0A@$0CA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402348F8 (-Marshal@-$CResourceMarshalerArray@$0CMO@$0CMP@$0A@$0CA@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CNA@$0CNB@$0A@$0CA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023491C (-Marshal@-$CResourceMarshalerArray@$0CNA@$0CNB@$0A@$0CA@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

bool __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<716,717,0,28>::Marshal(
                          (char *)this + 336,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<718,719,0,32>::Marshal(
                          (char *)this + 360,
                          a2,
                          *((unsigned int *)this + 8)) )
  {
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<720,721,0,32>::Marshal(
                              (char *)this + 384,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  }
  return v4;
}
