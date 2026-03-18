/*
 * XREFs of ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14015CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1401A09DC (-FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 *     DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1401A1BB8 (DirectComposition--_anonymous_namespace_--UpdatePropertyIfChanged_float_.c)
 *     ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x14023B130 (-EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimati.c)
 *     ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x14023B1A4 (-InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  char *v5; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v6; // rcx
  bool *v7; // r9
  unsigned int v8; // r10d
  char *v9; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v10; // rcx
  bool *v11; // r9
  __int64 v12; // rcx
  char *v13; // rdx
  bool v14; // cf
  __int64 v15; // rdx
  __int64 v16; // rcx

  *a4 = 0;
  if ( a2 > 0x2B )
  {
    switch ( a2 )
    {
      case ',':
        v13 = (char *)this + 156;
        goto LABEL_45;
      case '-':
        v13 = (char *)this + 160;
        goto LABEL_45;
      case '/':
        v15 = 2LL;
        break;
      case '0':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(this, 2LL);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        v14 = a3 < 0.0;
LABEL_40:
        if ( v14 )
          return (unsigned int)-1073741811;
        *((float *)this + 43) = a3;
LABEL_37:
        *((_DWORD *)this + 4) |= 0x10000u;
        return v8;
      case '1':
        v15 = 1LL;
        break;
      case '2':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(this, 1LL);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        if ( a3 < 0.0 )
          return (unsigned int)-1073741811;
        v14 = a3 > 1.0;
        goto LABEL_40;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(this, v15);
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    if ( a3 < 0.0 )
      return (unsigned int)-1073741811;
    *((float *)this + 42) = a3;
    goto LABEL_37;
  }
  if ( a2 != 43 )
  {
    if ( a2 != 15 )
    {
      switch ( a2 )
      {
        case '#':
          v9 = (char *)this + 140;
          break;
        case '$':
          v9 = (char *)this + 144;
          break;
        case '%':
          v9 = (char *)this + 148;
          break;
        case '\'':
          v5 = (char *)this + 128;
          goto LABEL_13;
        case '(':
          v5 = (char *)this + 132;
          goto LABEL_13;
        case ')':
          v5 = (char *)this + 136;
LABEL_13:
          DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(this, v5, a4);
          DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(v6, v7);
          return v8;
        default:
          return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
      }
      DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(this, v9, a4);
      DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(v10, v11);
      return v8;
    }
    if ( a3 >= 0.0 )
    {
      if ( (unsigned __int8)DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(
                              this,
                              (char *)this + 184,
                              a4) )
        *(_DWORD *)(v12 + 16) |= 0x20000u;
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  v13 = (char *)this + 152;
LABEL_45:
  if ( (unsigned __int8)DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(this, v13, a4) )
    *(_DWORD *)(v16 + 16) |= 0x8000u;
  return v8;
}
