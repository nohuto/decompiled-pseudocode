/*
 * XREFs of sub_1400A6508 @ 0x1400A6508
 * Callers:
 *     sub_1400A8C00 @ 0x1400A8C00 (sub_1400A8C00.c)
 *     sub_1400A8D50 @ 0x1400A8D50 (sub_1400A8D50.c)
 *     sub_1400A8DE0 @ 0x1400A8DE0 (sub_1400A8DE0.c)
 *     sub_1400A8F30 @ 0x1400A8F30 (sub_1400A8F30.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400A90C4 @ 0x1400A90C4 (sub_1400A90C4.c)
 */

__int64 __fastcall sub_1400A6508(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *a1 )
  {
    *a1 = 0LL;
    result = sub_1400A90C4(a1 + 1);
  }
  v3 = a1[2];
  if ( v3 )
    return sub_140007588(v3);
  return result;
}
