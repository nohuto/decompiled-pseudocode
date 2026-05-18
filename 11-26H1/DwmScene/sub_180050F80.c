/*
 * XREFs of sub_180050F80 @ 0x180050F80
 * Callers:
 *     sub_180051690 @ 0x180051690 (sub_180051690.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180052060 @ 0x180052060 (sub_180052060.c)
 */

_QWORD *__fastcall sub_180050F80(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::SamplerGeneric::`vftable';
  sub_180052060();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
