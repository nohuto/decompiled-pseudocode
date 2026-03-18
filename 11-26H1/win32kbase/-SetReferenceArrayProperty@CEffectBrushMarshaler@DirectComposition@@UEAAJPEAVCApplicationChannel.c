/*
 * XREFs of ?SetReferenceArrayProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402377F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0BLH@$0BLI@$0A@$0BA@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x1402352BC (-Set@-$CResourceMarshalerArray@$0BLH@$0BLI@$0A@$0BA@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 4 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<439,440,0,16>::Set(
             (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 104),
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
