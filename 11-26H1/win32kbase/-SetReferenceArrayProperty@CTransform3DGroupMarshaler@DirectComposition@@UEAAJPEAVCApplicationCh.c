/*
 * XREFs of ?SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140237AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0CNC@$0CND@$0A@$0JE@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140235684 (-Set@-$CResourceMarshalerArray@$0CNC@$0CND@$0A@$0JE@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CTransform3DGroupMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<722,723,0,148>::Set(
             (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 72),
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
