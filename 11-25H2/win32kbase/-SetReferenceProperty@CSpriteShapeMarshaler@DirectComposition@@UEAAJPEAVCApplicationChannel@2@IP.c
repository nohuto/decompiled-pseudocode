/*
 * XREFs of ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A630
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005AE90 (-SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCRe.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CResourceMarshaler *v5; // r10
  int v9; // r8d

  v5 = a4;
  if ( a3 == 1 )
  {
    v9 = 0;
    if ( !a4
      || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 17LL) )
    {
      if ( v5 == *((DirectComposition::CResourceMarshaler **)this + 9)
        || (v9 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                   a2,
                   (struct DirectComposition::CResourceMarshaler **)this + 9,
                   v5,
                   0LL),
            v9 >= 0) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *a5 = 1;
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 2 )
  {
    if ( a3 != 3 )
      return DirectComposition::CShapeMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
    v9 = 0;
    if ( !a4
      || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 66LL) )
    {
      if ( v5 != *((DirectComposition::CResourceMarshaler **)this + 8) )
      {
        v9 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 8,
               v5,
               0LL);
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      *((_DWORD *)this + 4) |= 0x80u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v9 = 0;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 17LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( v5 != *((DirectComposition::CResourceMarshaler **)this + 10) )
  {
    v9 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
           a2,
           (struct DirectComposition::CResourceMarshaler **)this + 10,
           v5,
           0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  *((_DWORD *)this + 4) |= 0x100u;
LABEL_10:
  *a5 = 1;
  return (unsigned int)v9;
}
