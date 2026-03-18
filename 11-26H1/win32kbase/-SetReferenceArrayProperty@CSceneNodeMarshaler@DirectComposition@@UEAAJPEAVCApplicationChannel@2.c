/*
 * XREFs of ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402379D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0CHO@$0CHP@$0A@$0HM@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140235524 (-Set@-$CResourceMarshalerArray@$0CHO@$0CHP@$0A@$0HM@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 *     ?Set@?$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023557C (-Set@-$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CSceneNodeMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    result = DirectComposition::CResourceMarshalerArray<640,641,0,117>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 80),
               a2,
               a4,
               a5);
  }
  else
  {
    result = DirectComposition::CResourceMarshalerArray<638,639,0,124>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 56),
               a2,
               a4,
               a5);
  }
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
