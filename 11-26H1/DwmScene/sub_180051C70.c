/*
 * XREFs of sub_180051C70 @ 0x180051C70
 * Callers:
 *     sub_1800521B0 @ 0x1800521B0 (sub_1800521B0.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_180051CEC @ 0x180051CEC (sub_180051CEC.c)
 */

__int64 *__fastcall sub_180051C70(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180051CEC(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180012BF8(a1 + 8, &v7);
  sub_1800291F0(v4, v5);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
