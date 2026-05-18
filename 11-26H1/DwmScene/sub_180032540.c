/*
 * XREFs of sub_180032540 @ 0x180032540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_180032540(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
