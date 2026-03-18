/*
 * XREFs of ?SetReferenceArrayProperty@CAnimationControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1401102A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FL@$0IA@$0BMO@$0BMP@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DA78 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FL@$0IA@$0BMO@$0BMP@@Dir.c)
 */

__int64 __fastcall DirectComposition::CAnimationControllerMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAnimationControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,91,128,462,463>::Set(
             (char *)this + 72,
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *a6 = 1;
  }
  return result;
}
