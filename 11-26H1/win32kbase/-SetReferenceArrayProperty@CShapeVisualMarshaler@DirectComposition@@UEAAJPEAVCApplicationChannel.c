/*
 * XREFs of ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14023E190
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0EH@$0EG@$0A@$0JK@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023E12C (-Set@-$CResourceMarshalerArray@$0EH@$0EG@$0A@$0JK@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CShapeVisualMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  if ( a3 != 51 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<71,70,0,154>::Set(
             (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 344),
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
