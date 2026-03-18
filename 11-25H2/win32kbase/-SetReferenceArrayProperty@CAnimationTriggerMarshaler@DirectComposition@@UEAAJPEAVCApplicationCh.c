/*
 * XREFs of ?SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14014B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0L@$0BAA@$0BNE@$0BNF@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DB18 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0L@$0BAA@$0BNE@$0BNF@@Dir.c)
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,11,256,468,469>::Set(
             (char *)this + 80,
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *a6 = 1;
  }
  return result;
}
