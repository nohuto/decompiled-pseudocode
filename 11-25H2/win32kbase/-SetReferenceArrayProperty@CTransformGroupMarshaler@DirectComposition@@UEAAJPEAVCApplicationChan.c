/*
 * XREFs of ?SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1401412C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0KM@$0IA@$0CIC@$0CID@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DAD8 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0KM@$0IA@$0CIC@$0CID@@Dir.c)
 */

__int64 __fastcall DirectComposition::CTransformGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTransformGroupMarshaler *this,
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
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,172,128,642,643>::Set(
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
