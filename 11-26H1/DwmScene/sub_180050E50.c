/*
 * XREFs of sub_180050E50 @ 0x180050E50
 * Callers:
 *     sub_180051630 @ 0x180051630 (sub_180051630.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18006ACC0 @ 0x18006ACC0 (sub_18006ACC0.c)
 */

_QWORD *__fastcall sub_180050E50(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_18006ACC0();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
