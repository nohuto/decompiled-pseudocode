/*
 * XREFs of sub_18008BD78 @ 0x18008BD78
 * Callers:
 *     sub_18008BE20 @ 0x18008BE20 (sub_18008BE20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18008BD78(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  v2 = a1[28];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[26];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[24];
  if ( v4 )
    sub_180010EC8(v4);
  return sub_18008FBE0(a1);
}
