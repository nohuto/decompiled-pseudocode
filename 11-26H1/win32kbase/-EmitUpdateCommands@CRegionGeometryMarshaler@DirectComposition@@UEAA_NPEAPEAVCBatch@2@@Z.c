/*
 * XREFs of ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0B50
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AFDD0 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402346C4 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAA_NPEAPEA.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CMarshaledArray<tagRECT,1735541572,591,592,0>::Marshal(
                              (char *)this + 96,
                              a2,
                              *((unsigned int *)this + 8)) != 0;
  return v4;
}
