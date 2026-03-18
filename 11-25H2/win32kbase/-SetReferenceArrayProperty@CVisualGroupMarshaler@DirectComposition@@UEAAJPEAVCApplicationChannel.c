/*
 * XREFs of ?SetReferenceArrayProperty@CVisualGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LG@$0CA@$0CIK@$0CIL@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DB38 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LG@$0CA@$0CIK@$0CIL@@Dir.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,182,32,650,651>::Set(
             (DirectComposition::CVisualGroupMarshaler *)((char *)this + 56),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *a6 = 1;
  }
  return result;
}
