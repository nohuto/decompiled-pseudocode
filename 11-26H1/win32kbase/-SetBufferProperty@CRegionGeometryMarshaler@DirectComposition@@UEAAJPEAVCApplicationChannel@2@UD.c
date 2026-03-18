/*
 * XREFs of ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236100
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B578 (-Copy@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0CEP@$0CFA@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CRegionGeometryMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 5 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<tagRECT,1735541572,591,592,0>::Copy(
             (DirectComposition::CMarshaledArrayBase *)(a1 + 96),
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
