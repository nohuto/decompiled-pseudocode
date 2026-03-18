/*
 * XREFs of ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140237A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0CMM@$0CMN@$0A@$0BM@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x1402355D4 (-Set@-$CResourceMarshalerArray@$0CMM@$0CMN@$0A@$0BM@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 *     ?Set@?$CResourceMarshalerArray@$0CNA@$0CNB@$0A@$0CA@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023562C (-Set@-$CResourceMarshalerArray@$0CNA@$0CNB@$0A@$0CA@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // r8d
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v6 = a3 - 51;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225485LL;
      result = DirectComposition::CResourceMarshalerArray<720,721,0,32>::Set(
                 (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 384),
                 a2,
                 a4,
                 a5);
    }
    else
    {
      result = DirectComposition::CResourceMarshalerArray<720,721,0,32>::Set(
                 (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 360),
                 a2,
                 a4,
                 a5);
    }
  }
  else
  {
    result = DirectComposition::CResourceMarshalerArray<716,717,0,28>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 336),
               a2,
               a4,
               a5);
  }
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
