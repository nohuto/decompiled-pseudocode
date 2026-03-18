/*
 * XREFs of ?SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B530 (-Copy@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( !a3 )
  {
    if ( a4 || !a5 )
    {
      result = DirectComposition::CMarshaledArray<tagRECT,1684489028,464,465,1>::Copy(
                 (DirectComposition::CMarshaledArrayBase *)(a1 + 56),
                 a4,
                 a5);
      if ( (int)result < 0 )
        return result;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  if ( a3 != 4 || !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x200u;
  *(_OWORD *)(a1 + 96) = v7;
LABEL_10:
  *a6 = 1;
  return result;
}
