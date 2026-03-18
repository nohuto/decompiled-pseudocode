/*
 * XREFs of ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1401A17D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0BMD@$0BME@$0A@$0BP@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023536C (-Set@-$CResourceMarshalerArray@$0BMD@$0BME@$0A@$0BP@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 *     ?Set@?$CResourceMarshalerArray@$0NC@$0MP@$0A@$0FN@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023F940 (-Set@-$CResourceMarshalerArray@$0NC@$0MP@$0A@$0FN@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // edx

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = DirectComposition::CResourceMarshalerArray<210,207,0,93>::Set(
             (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 104),
             a2);
      if ( v6 >= 0 )
        *a6 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v6 = DirectComposition::CResourceMarshalerArray<451,452,0,31>::Set(
           (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 80),
           a2);
    if ( v6 >= 0 )
      *a6 = 1;
  }
  return (unsigned int)v6;
}
