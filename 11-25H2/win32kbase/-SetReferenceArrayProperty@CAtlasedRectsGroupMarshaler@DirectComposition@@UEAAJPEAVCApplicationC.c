/*
 * XREFs of ?SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022E870
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$07$0EA@$0BNJ@$0BNK@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022D9F8 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$07$0EA@$0BNJ@$0BNK@@Direc.c)
 */

__int64 __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
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
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,8,64,473,474>::Set(
             (DirectComposition::CAtlasedRectsGroupMarshaler *)((char *)this + 64),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *a6 = 1;
  }
  return result;
}
