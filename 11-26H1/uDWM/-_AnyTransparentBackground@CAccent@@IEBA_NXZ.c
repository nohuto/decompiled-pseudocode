/*
 * XREFs of ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18008DA1C
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180042A30 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18007034C (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 * Callees:
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 */

char __fastcall CAccent::_AnyTransparentBackground(CAccent *this)
{
  char IsAcrylicBlurEnabledAndAllowed; // al
  char v2; // cl

  if ( *((_DWORD *)this + 46) == 2 )
    return 1;
  IsAcrylicBlurEnabledAndAllowed = CAccent::_IsAcrylicBlurEnabledAndAllowed(this);
  v2 = 0;
  if ( IsAcrylicBlurEnabledAndAllowed )
    return 1;
  return v2;
}
