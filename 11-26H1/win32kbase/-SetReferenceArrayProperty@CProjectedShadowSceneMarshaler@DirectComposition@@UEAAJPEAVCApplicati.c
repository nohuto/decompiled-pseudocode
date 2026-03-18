/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140246960
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0NP@$0NM@$0A@$0GA@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140246804 (-Set@-$CResourceMarshalerArray@$0NP@$0NM@$0A@$0GA@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 *     ?Set@?$CResourceMarshalerArray@$0OG@$0NN@$0A@$0GB@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14024685C (-Set@-$CResourceMarshalerArray@$0OG@$0NN@$0A@$0GB@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // edx

  if ( a3 == 2 )
  {
    v6 = DirectComposition::CResourceMarshalerArray<223,220,0,96>::Set(
           (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 72),
           a2,
           a4,
           a5);
    if ( v6 >= 0 )
      *a6 = 1;
  }
  else if ( a3 == 9 )
  {
    v6 = DirectComposition::CResourceMarshalerArray<230,221,0,97>::Set(
           (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 96),
           a2,
           a4,
           a5);
    if ( v6 >= 0 )
      *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
