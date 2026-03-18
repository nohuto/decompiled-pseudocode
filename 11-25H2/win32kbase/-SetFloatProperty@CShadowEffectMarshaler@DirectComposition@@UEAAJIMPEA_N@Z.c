/*
 * XREFs of ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1402321C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetFloatProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v5; // al

  switch ( a2 )
  {
    case 4u:
      if ( *((float *)this + 28) != a3 )
      {
        *((float *)this + 28) = a3;
        goto LABEL_18;
      }
      break;
    case 6u:
      if ( *((float *)this + 29) != a3 )
      {
        *((float *)this + 29) = a3;
        goto LABEL_18;
      }
      break;
    case 7u:
      if ( *((float *)this + 30) != a3 )
      {
        *((float *)this + 30) = a3;
        goto LABEL_18;
      }
      break;
    case 8u:
      if ( *((float *)this + 31) != a3 )
      {
        *((float *)this + 31) = a3;
        goto LABEL_18;
      }
      break;
    case 9u:
      if ( *((float *)this + 32) == a3 )
        break;
      *((float *)this + 32) = a3;
LABEL_18:
      v5 = 1;
      goto LABEL_19;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v5 = 0;
LABEL_19:
  *a4 = v5;
  return 0LL;
}
