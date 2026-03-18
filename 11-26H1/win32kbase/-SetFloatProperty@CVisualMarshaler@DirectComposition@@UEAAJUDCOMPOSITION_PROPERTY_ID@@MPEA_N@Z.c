/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14019A010
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140199FF0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComp.c)
 * Callees:
 *     ?HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193858 (-HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        char *a4)
{
  unsigned int v4; // esi
  int v7; // edi
  float v8; // xmm1_4
  char v9; // r11
  int v10; // edx
  char v11; // r11
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  v4 = 0;
  if ( a2 > 0x20 )
  {
    switch ( a2 )
    {
      case '!':
        v7 = 0x2000000;
        if ( *(float *)(a1 + 96) != a3 )
        {
          *(float *)(a1 + 96) = a3;
          goto LABEL_40;
        }
        goto LABEL_38;
      case '"':
        v7 = 0x2000000;
        if ( *(float *)(a1 + 100) != a3 )
        {
          *(float *)(a1 + 100) = a3;
          goto LABEL_40;
        }
        goto LABEL_38;
      case '#':
        v7 = 0x4000000;
        if ( *(float *)(a1 + 104) != a3 )
        {
          *(float *)(a1 + 104) = a3;
          goto LABEL_40;
        }
        goto LABEL_38;
      case '$':
        v7 = 0x4000000;
        if ( *(float *)(a1 + 108) != a3 )
        {
          *(float *)(a1 + 108) = a3;
          goto LABEL_40;
        }
        goto LABEL_38;
      case ',':
        v7 = 0x40000000;
        if ( *(float *)(a1 + 116) != a3 )
        {
          *(float *)(a1 + 116) = a3;
          goto LABEL_40;
        }
        goto LABEL_38;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty();
  }
  switch ( a2 )
  {
    case 0x20u:
      v7 = 0x2000000;
      if ( *(float *)(a1 + 92) != a3 )
      {
        *(float *)(a1 + 92) = a3;
        goto LABEL_40;
      }
      goto LABEL_38;
    case 1u:
      v7 = 256;
      if ( *(float *)(a1 + 72) != a3 )
      {
        *(float *)(a1 + 72) = a3;
        goto LABEL_40;
      }
      goto LABEL_38;
    case 2u:
      v7 = 256;
      if ( *(float *)(a1 + 76) != a3 )
      {
        *(float *)(a1 + 76) = a3;
        goto LABEL_40;
      }
      goto LABEL_38;
    case 3u:
      v7 = 256;
      if ( *(float *)(a1 + 80) != a3 )
      {
        *(float *)(a1 + 80) = a3;
        goto LABEL_40;
      }
      goto LABEL_38;
    case 0x18u:
      v7 = 0x400000;
      if ( *(float *)(a1 + 84) != a3 )
      {
        *(float *)(a1 + 84) = a3;
        goto LABEL_40;
      }
      goto LABEL_38;
  }
  if ( a2 != 25 )
  {
    if ( a2 == 26 )
    {
      v7 = 0x800000;
      v8 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *(float *)(a1 + 112) != v8 )
      {
        *(float *)(a1 + 112) = v8;
LABEL_40:
        v9 = 1;
        goto LABEL_41;
      }
      goto LABEL_38;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty();
  }
  v7 = 0x400000;
  if ( *(float *)(a1 + 88) != a3 )
  {
    *(float *)(a1 + 88) = a3;
    goto LABEL_40;
  }
LABEL_38:
  v9 = 0;
LABEL_41:
  *a4 = v9;
  if ( DirectComposition::CResourceMarshaler::HasAnimations(a1, a2) )
  {
    *a4 = 1;
    v11 = 1;
  }
  v12 = v10 - 1;
  if ( v12 && (v13 = v12 - 1) != 0 && (v14 = v13 - 1) != 0 && (v15 = v14 - 21) != 0 && (unsigned int)(v15 - 1) >= 2 )
  {
    if ( !v11 )
      return v4;
  }
  else
  {
    *a4 = 1;
  }
  *(_DWORD *)(a1 + 16) |= v7;
  return v4;
}
