/*
 * XREFs of ?Marshal@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402346C4
 * Callers:
 *     ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0B50 (-EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<tagRECT,1735541572,591,592,0>::Marshal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::ValueTypeMarshal(a1, a2, a3);
}
