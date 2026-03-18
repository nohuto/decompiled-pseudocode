/*
 * XREFs of ?SetReferenceArrayProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402378F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@$0CBJ@$0CBK@$0A@$0FC@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023541C (-Set@-$CResourceMarshalerArray@$0CBJ@$0CBK@$0A@$0FC@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 *     ?Set@?$CResourceMarshalerArray@$0CBL@$0CBM@$0A@$0EB@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140235474 (-Set@-$CResourceMarshalerArray@$0CBL@$0CBM@$0A@$0EB@@DirectComposition@@QEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CInteractionTracker2Marshaler::SetReferenceArrayProperty(
        _DWORD *a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 52;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 3221225485LL;
    result = DirectComposition::CResourceMarshalerArray<539,540,0,65>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 120),
               a2,
               a4,
               a5);
  }
  else
  {
    result = DirectComposition::CResourceMarshalerArray<537,538,0,82>::Set(
               (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 114),
               a2,
               a4,
               a5);
  }
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    a1[4] &= ~0x20u;
  }
  return result;
}
