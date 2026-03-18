/*
 * XREFs of ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005AE90
 * Callers:
 *     ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A630 (-SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CShapeMarshaler::SetReferenceProperty(
        DirectComposition::CShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CResourceMarshaler *v5; // r10

  v5 = a4;
  if ( a3 )
    return 3221225485LL;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 29LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v5 == *((DirectComposition::CResourceMarshaler **)this + 7)
         || (a3 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                    a2,
                    (struct DirectComposition::CResourceMarshaler **)this + 7,
                    v5,
                    0LL),
             a3 >= 0) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return (unsigned int)a3;
}
