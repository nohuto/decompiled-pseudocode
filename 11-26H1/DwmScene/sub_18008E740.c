/*
 * XREFs of sub_18008E740 @ 0x18008E740
 * Callers:
 *     sub_18008E780 @ 0x18008E780 (sub_18008E780.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_18008E740(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010EC8(v2);
  return sub_180041EB4(a1);
}
