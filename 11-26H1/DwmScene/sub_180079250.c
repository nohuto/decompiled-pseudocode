/*
 * XREFs of sub_180079250 @ 0x180079250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180090744 @ 0x180090744 (sub_180090744.c)
 */

_QWORD *__fastcall sub_180079250(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::UnlitShaderExtension::`vftable';
  sub_180090744(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
