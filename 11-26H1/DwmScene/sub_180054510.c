/*
 * XREFs of sub_180054510 @ 0x180054510
 * Callers:
 *     sub_18005293C @ 0x18005293C (sub_18005293C.c)
 *     sub_1800533F0 @ 0x1800533F0 (sub_1800533F0.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_180053FD0 @ 0x180053FD0 (sub_180053FD0.c)
 * Callees:
 *     sub_180038ACC @ 0x180038ACC (sub_180038ACC.c)
 */

__int64 (__fastcall ***__fastcall sub_180054510(_QWORD *a1, __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))sub_180038ACC((__int64)a1, result);
  return result;
}
