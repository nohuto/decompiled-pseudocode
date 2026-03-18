/*
 * XREFs of ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( a2 )
  {
    case 0xAu:
      *(_DWORD *)(a1 + 16) |= 0x1000u;
      *(float *)(a1 + 104) = a3;
      goto LABEL_8;
    case 0xBu:
      *(_DWORD *)(a1 + 16) |= 0x2000u;
      *(float *)(a1 + 108) = a3;
      goto LABEL_8;
    case 0xCu:
      *(_DWORD *)(a1 + 16) |= 0x4000u;
      *(float *)(a1 + 112) = a3;
LABEL_8:
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
}
