/*
 * XREFs of sub_180052820 @ 0x180052820
 * Callers:
 *     sub_1800520A4 @ 0x1800520A4 (sub_1800520A4.c)
 *     sub_180052774 @ 0x180052774 (sub_180052774.c)
 *     sub_18005325C @ 0x18005325C (sub_18005325C.c)
 *     sub_18005ABB0 @ 0x18005ABB0 (sub_18005ABB0.c)
 *     sub_180080C94 @ 0x180080C94 (sub_180080C94.c)
 *     sub_180082100 @ 0x180082100 (sub_180082100.c)
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 * Callees:
 *     sub_1800276EC @ 0x1800276EC (sub_1800276EC.c)
 */

__int64 __fastcall sub_180052820(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_1800276EC((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
