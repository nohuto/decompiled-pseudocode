/*
 * XREFs of sub_180028F60 @ 0x180028F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_180028F60(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
