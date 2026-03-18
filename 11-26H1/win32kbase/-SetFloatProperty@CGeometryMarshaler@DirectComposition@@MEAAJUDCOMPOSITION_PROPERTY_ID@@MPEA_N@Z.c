/*
 * XREFs of ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023ECC0
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C0B0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@Di.c)
 *     ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023EB10 (-SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPE.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGeometryMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( a2 )
  {
    case 2u:
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(float *)(a1 + 80) = a3;
      goto LABEL_8;
    case 3u:
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(float *)(a1 + 84) = a3;
      goto LABEL_8;
    case 4u:
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(float *)(a1 + 88) = a3;
LABEL_8:
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
}
