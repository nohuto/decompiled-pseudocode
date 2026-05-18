/*
 * XREFs of sub_180050F30 @ 0x180050F30
 * Callers:
 *     sub_180051670 @ 0x180051670 (sub_180051670.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800841FC @ 0x1800841FC (sub_1800841FC.c)
 */

_QWORD *__fastcall sub_180050F30(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderStateGeneric::`vftable';
  sub_1800841FC();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
