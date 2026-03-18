/*
 * XREFs of ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B578
 * Callers:
 *     ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236100 (-SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<tagRECT,1735541572,591,592,0>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x67724344u);
}
