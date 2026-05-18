/*
 * XREFs of sub_180038FE0 @ 0x180038FE0
 * Callers:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_180038FE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  result = sub_180013540((__int64 *)(v2 + 9712), a2);
  *(_DWORD *)(v2 + 9760) = 0;
  return result;
}
