/*
 * XREFs of ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140245170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 *     ?FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1401C3FB8 (-FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 *     DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1401C5AE0 (DirectComposition--_anonymous_namespace_--UpdatePropertyIfChanged_float_.c)
 *     ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x140245084 (-EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimati.c)
 *     ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1402450F8 (-InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  float *v5; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v6; // rcx
  bool *v7; // r9
  unsigned int v8; // r10d
  float *v9; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v10; // rcx
  bool *v11; // r9
  __int64 v12; // rcx
  float *v13; // rdx
  bool v14; // cf
  int v15; // edx
  __int64 v16; // rcx

  *a4 = 0;
  if ( a2 > 0x2D )
  {
    switch ( a2 )
    {
      case '.':
        v13 = (float *)(a1 + 164);
        goto LABEL_45;
      case '/':
        v13 = (float *)(a1 + 168);
        goto LABEL_45;
      case '1':
        v15 = 2;
        break;
      case '2':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)a1, 2);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        v14 = a3 < 0.0;
LABEL_40:
        if ( v14 )
          return (unsigned int)-1073741811;
        *(float *)(a1 + 180) = a3;
LABEL_37:
        *(_DWORD *)(a1 + 16) |= 0x20000u;
        return v8;
      case '3':
        v15 = 1;
        break;
      case '4':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)a1, 1);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        if ( a3 < 0.0 )
          return (unsigned int)-1073741811;
        v14 = a3 > 1.0;
        goto LABEL_40;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
    }
    v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)a1, v15);
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    if ( a3 < 0.0 )
      return (unsigned int)-1073741811;
    *(float *)(a1 + 176) = a3;
    goto LABEL_37;
  }
  if ( a2 != 45 )
  {
    if ( a2 != 16 )
    {
      switch ( a2 )
      {
        case '%':
          v9 = (float *)(a1 + 148);
          break;
        case '&':
          v9 = (float *)(a1 + 152);
          break;
        case '\'':
          v9 = (float *)(a1 + 156);
          break;
        case ')':
          v5 = (float *)(a1 + 136);
          goto LABEL_13;
        case '*':
          v5 = (float *)(a1 + 140);
          goto LABEL_13;
        case '+':
          v5 = (float *)(a1 + 144);
LABEL_13:
          DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v5, a4);
          DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(v6, v7);
          return v8;
        default:
          return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
      }
      DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v9, a4);
      DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(v10, v11);
      return v8;
    }
    if ( a3 >= 0.0 )
    {
      if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, (float *)(a1 + 192), a4) )
        *(_DWORD *)(v12 + 16) |= 0x40000u;
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  v13 = (float *)(a1 + 160);
LABEL_45:
  if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v13, a4) )
    *(_DWORD *)(v16 + 16) |= 0x10000u;
  return v8;
}
