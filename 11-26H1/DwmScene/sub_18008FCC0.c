/*
 * XREFs of sub_18008FCC0 @ 0x18008FCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_18008FCC0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
