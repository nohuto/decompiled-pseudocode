/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x180081C90
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ @ 0x180101390 (-IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
