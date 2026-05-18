/*
 * XREFs of sub_180082524 @ 0x180082524
 * Callers:
 *     sub_180082A20 @ 0x180082A20 (sub_180082A20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_1800825A0 @ 0x1800825A0 (sub_1800825A0.c)
 */

__int64 *__fastcall sub_180082524(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800825A0(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180012BF8(a1 + 8, &v7);
  sub_1800291F0(v4, v5);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
