/*
 * XREFs of sub_1400A90C4 @ 0x1400A90C4
 * Callers:
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400A6508 @ 0x1400A6508 (sub_1400A6508.c)
 *     sub_1400A6B14 @ 0x1400A6B14 (sub_1400A6B14.c)
 *     sub_1400A9518 @ 0x1400A9518 (sub_1400A9518.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 */

__int64 __fastcall sub_1400A90C4(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[1];
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( result )
    return sub_140007588(result);
  return result;
}
