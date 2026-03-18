/*
 * XREFs of ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CCL@$0CCM@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229310
 * Callers:
 *     ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14010C2C0 (-SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<tagRECT,1735541572,2048,555,556>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x67724344u);
}
