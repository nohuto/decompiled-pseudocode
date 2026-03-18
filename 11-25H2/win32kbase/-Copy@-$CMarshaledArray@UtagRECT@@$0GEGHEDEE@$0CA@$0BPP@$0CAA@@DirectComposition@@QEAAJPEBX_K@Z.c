/*
 * XREFs of ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0BPP@$0CAA@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292EC
 * Callers:
 *     ?SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1401001E0 (-SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<tagRECT,1684489028,32,511,512>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x64674344u);
}
