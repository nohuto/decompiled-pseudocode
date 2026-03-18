/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140240D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402404D0 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?Set@?$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14024090C (-Set@-$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // ecx

  if ( a3 == 15 )
  {
    v6 = DirectComposition::CResourceMarshalerArray<141,138,0,50>::Set(
           (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 152),
           a2,
           a4,
           a5);
    if ( v6 >= 0 )
      *a6 = 1;
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(a1, a2, a3, a4, a5, a6);
  }
  return (unsigned int)v6;
}
