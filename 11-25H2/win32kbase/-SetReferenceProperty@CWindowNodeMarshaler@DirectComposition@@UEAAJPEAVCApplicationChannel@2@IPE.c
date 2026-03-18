/*
 * XREFs of ?SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005AF10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14005A8A0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetReferenceProperty(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CResourceMarshaler *v5; // r10
  int v8; // r8d
  struct DirectComposition::CResourceMarshaler **v9; // r11
  struct DirectComposition::CResourceMarshaler **v10; // r11
  struct DirectComposition::CResourceMarshaler **v12; // r11

  v5 = a4;
  *a5 = 0;
  if ( a3 != 58 )
  {
    if ( a3 == 66 )
    {
      v8 = 0;
      v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 520);
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              64LL) )
      {
        if ( v5 == *v12
          || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                     a2,
                     v12,
                     v5,
                     0LL),
              v8 >= 0) )
        {
          *((_DWORD *)this + 92) |= 0x4000u;
          goto LABEL_14;
        }
        return (unsigned int)v8;
      }
    }
    else
    {
      if ( a3 != 67 )
        return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
      v8 = 0;
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 528);
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              129LL) )
      {
        if ( v5 == *v9
          || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                     a2,
                     v9,
                     v5,
                     0LL),
              v8 >= 0) )
        {
          *((_DWORD *)this + 92) |= 0x8000u;
LABEL_14:
          *a5 = 1;
          return (unsigned int)v8;
        }
        return (unsigned int)v8;
      }
    }
    return (unsigned int)-1073741811;
  }
  v8 = 0;
  v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 456);
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 66LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( v5 == *v10
    || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
               a2,
               v10,
               v5,
               0LL),
        v8 >= 0) )
  {
    *((_DWORD *)this + 92) |= 0x40u;
    goto LABEL_14;
  }
  return (unsigned int)v8;
}
