/*
 * XREFs of sub_180078F30 @ 0x180078F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18005CDF8 @ 0x18005CDF8 (sub_18005CDF8.c)
 */

_QWORD *__fastcall sub_180078F30(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::FontShaderExtension::`vftable';
  sub_18005CDF8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
