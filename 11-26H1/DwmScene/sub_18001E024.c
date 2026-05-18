/*
 * XREFs of sub_18001E024 @ 0x18001E024
 * Callers:
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 */

__int64 __fastcall sub_18001E024(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18001CBA0((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
