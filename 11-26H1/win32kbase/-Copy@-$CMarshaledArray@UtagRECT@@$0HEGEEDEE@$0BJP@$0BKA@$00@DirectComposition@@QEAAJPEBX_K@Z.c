/*
 * XREFs of ?Copy@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B59C
 * Callers:
 *     ?SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235910 (-SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<tagRECT,1952727876,415,416,1>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x74644344u);
}
