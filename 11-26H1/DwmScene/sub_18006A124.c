/*
 * XREFs of sub_18006A124 @ 0x18006A124
 * Callers:
 *     sub_18006A650 @ 0x18006A650 (sub_18006A650.c)
 * Callees:
 *     sub_18005FEF0 @ 0x18005FEF0 (sub_18005FEF0.c)
 */

__int64 __fastcall sub_18006A124(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18005FEF0((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
