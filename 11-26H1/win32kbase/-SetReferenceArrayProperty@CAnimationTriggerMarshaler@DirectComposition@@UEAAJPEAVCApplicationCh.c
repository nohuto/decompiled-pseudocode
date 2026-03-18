/*
 * XREFs of ?SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402377A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0BGL@$0BGM@$0A@$09@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140235264 (-Set@-$CResourceMarshalerArray@$0BGL@$0BGM@$0A@$09@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<363,364,0,10>::Set(
             (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 80),
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
