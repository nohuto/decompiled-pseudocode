/*
 * XREFs of sub_180082810 @ 0x180082810
 * Callers:
 *     sub_180082750 @ 0x180082750 (sub_180082750.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_180082810(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
