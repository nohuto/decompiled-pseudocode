/*
 * XREFs of ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022E950
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CHK@$0CHL@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DA18 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CHK@$0CHL@@Direc.c)
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$03$0CHO@$0CHP@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022DA38 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CK@$03$0CHO@$0CHP@@Direc.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140230500 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 == 52 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,35,1,634,635>::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 376),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 92) |= 1u;
    goto LABEL_11;
  }
  if ( a3 == 53 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,42,4,638,639>::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 400),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 92) |= 2u;
    goto LABEL_11;
  }
  if ( a3 != 54 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,42,4,638,639>::Set(
             (DirectComposition::CTextVisualMarshaler *)((char *)this + 424),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 92) |= 4u;
LABEL_11:
    *a6 = 1;
  }
  return result;
}
