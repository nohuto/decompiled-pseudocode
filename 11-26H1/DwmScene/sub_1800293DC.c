/*
 * XREFs of sub_1800293DC @ 0x1800293DC
 * Callers:
 *     sub_1800291E0 @ 0x1800291E0 (sub_1800291E0.c)
 *     sub_18002932C @ 0x18002932C (sub_18002932C.c)
 *     sub_180082100 @ 0x180082100 (sub_180082100.c)
 *     sub_1800987DC @ 0x1800987DC (sub_1800987DC.c)
 * Callees:
 *     sub_180027744 @ 0x180027744 (sub_180027744.c)
 */

__int64 __fastcall sub_1800293DC(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_180027744((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
