/*
 * XREFs of sub_18001896C @ 0x18001896C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003D5B8 @ 0x18003D5B8 (sub_18003D5B8.c)
 *     sub_18005AF08 @ 0x18005AF08 (sub_18005AF08.c)
 *     sub_18005B508 @ 0x18005B508 (sub_18005B508.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18001B858 @ 0x18001B858 (sub_18001B858.c)
 */

_OWORD *__fastcall sub_18001896C(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm5
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v12[0] = *a3;
  v8 = a3[2];
  v12[1] = v3;
  v9 = a3[3];
  v12[2] = v8;
  v12[3] = v9;
  *(double *)&v4 = sub_18001B858(a1, v12);
  *v10 = v4;
  result = v10;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  return result;
}
