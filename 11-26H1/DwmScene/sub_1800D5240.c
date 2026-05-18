/*
 * XREFs of sub_1800D5240 @ 0x1800D5240
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_1800D5240(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::Tweening::ICurve::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
