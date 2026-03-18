/*
 * XREFs of ?SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235910
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B59C (-Copy@-$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<tagRECT,1952727876,415,416,1>::Copy(
             (DirectComposition::CMarshaledArrayBase *)(a1 + 56),
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
