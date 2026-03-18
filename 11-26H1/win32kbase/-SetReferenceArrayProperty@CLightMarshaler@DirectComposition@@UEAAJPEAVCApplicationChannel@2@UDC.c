/*
 * XREFs of ?SetReferenceArrayProperty@CLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140237970
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0CCG@$0CCH@$0A@$0JM@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x1402354CC (-Set@-$CResourceMarshalerArray@$0CCG@$0CCH@$0A@$0JM@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CLightMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // r8d
  __int64 result; // rax

  *a6 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 3221225485LL;
    result = DirectComposition::CResourceMarshalerArray<550,551,0,156>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 88),
               a2,
               a4,
               a5);
  }
  else
  {
    result = DirectComposition::CResourceMarshalerArray<550,551,0,156>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 64),
               a2,
               a4,
               a5);
  }
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
