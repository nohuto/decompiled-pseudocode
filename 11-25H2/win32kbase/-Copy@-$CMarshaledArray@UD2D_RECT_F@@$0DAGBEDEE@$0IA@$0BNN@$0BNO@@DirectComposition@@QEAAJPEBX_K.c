/*
 * XREFs of ?Copy@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292A4
 * Callers:
 *     ?SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DBC0 (-SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,477,478>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x30614344u);
}
