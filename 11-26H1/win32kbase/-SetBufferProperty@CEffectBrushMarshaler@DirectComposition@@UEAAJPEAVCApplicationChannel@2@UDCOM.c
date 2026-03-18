/*
 * XREFs of ?SetBufferProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B4E8 (-Copy@-$CMarshaledArray@I$0GFGKEDEE@$0BLF@$0BLG@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<unsigned int,1701462852,437,438,0>::Copy(
             (DirectComposition::CMarshaledArrayBase *)(a1 + 80),
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
