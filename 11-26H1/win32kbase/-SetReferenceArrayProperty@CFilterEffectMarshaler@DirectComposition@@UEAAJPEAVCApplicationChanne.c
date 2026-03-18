/*
 * XREFs of ?SetReferenceArrayProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140237840
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0BLP@$0BMA@$0A@$0DD@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140235314 (-Set@-$CResourceMarshalerArray@$0BLP@$0BMA@$0A@$0DD@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 *     ?Set@?$CResourceMarshalerArray@$0BMD@$0BME@$0A@$0BP@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023536C (-Set@-$CResourceMarshalerArray@$0BMD@$0BME@$0A@$0BP@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 == 3 )
  {
    result = DirectComposition::CResourceMarshalerArray<447,448,0,51>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 104),
               a2,
               a4,
               a5);
  }
  else
  {
    if ( a3 != 5 )
      return 3221225485LL;
    result = DirectComposition::CResourceMarshalerArray<451,452,0,31>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 152),
               a2,
               a4,
               a5);
  }
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
