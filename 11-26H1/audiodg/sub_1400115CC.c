/*
 * XREFs of sub_1400115CC @ 0x1400115CC
 * Callers:
 *     sub_1400114F0 @ 0x1400114F0 (sub_1400114F0.c)
 *     sub_140011550 @ 0x140011550 (sub_140011550.c)
 *     sub_140011590 @ 0x140011590 (sub_140011590.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_14006F430 @ 0x14006F430 (sub_14006F430.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400115CC(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)sub_1400B6010(v2);
  }
  return result;
}
