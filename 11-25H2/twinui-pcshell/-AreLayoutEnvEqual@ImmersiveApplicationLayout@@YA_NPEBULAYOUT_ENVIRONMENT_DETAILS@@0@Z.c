/*
 * XREFs of ?AreLayoutEnvEqual@ImmersiveApplicationLayout@@YA_NPEBULAYOUT_ENVIRONMENT_DETAILS@@0@Z @ 0x180659788
 * Callers:
 *     ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x18069ED00 (-IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ImmersiveApplicationLayout::AreLayoutEnvEqual(
        const RECT *this,
        const RECT *a2,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a3)
{
  BOOL v5; // eax
  char v6; // r8

  v5 = EqualRect(this, a2);
  v6 = 0;
  if ( v5 && this[1].left == a2[1].left )
    return this[1].top == a2[1].top;
  return v6;
}
