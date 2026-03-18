/*
 * XREFs of ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IN@$0EA@$0CFI@$0CFJ@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DA98 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IN@$0EA@$0CFI@$0CFJ@@Dir.c)
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JE@$0CA@$0CFG@$0CFH@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DAB8 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JE@$0CA@$0CFG@$0CFH@@Dir.c)
 */

__int64 __fastcall DirectComposition::CSceneNodeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( !a3 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,148,32,598,599>::Set(
               (DirectComposition::CSceneNodeMarshaler *)((char *)this + 56),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_8;
  }
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,141,64,600,601>::Set(
             (DirectComposition::CSceneNodeMarshaler *)((char *)this + 80),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
