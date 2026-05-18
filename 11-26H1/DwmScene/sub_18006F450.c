/*
 * XREFs of sub_18006F450 @ 0x18006F450
 * Callers:
 *     sub_18006F5C4 @ 0x18006F5C4 (sub_18006F5C4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 *     sub_18002AA30 @ 0x18002AA30 (sub_18002AA30.c)
 *     sub_18002B5E4 @ 0x18002B5E4 (sub_18002B5E4.c)
 *     sub_18002CCEC @ 0x18002CCEC (sub_18002CCEC.c)
 *     sub_18002CD34 @ 0x18002CD34 (sub_18002CD34.c)
 *     sub_18006F538 @ 0x18006F538 (sub_18006F538.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F450(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  v3 = sub_18002CCEC(a1, 0xF0uLL);
  v4 = sub_18002AA04(v3);
  v5 = sub_180011790(v4);
  v7 = a1;
  v8 = v5;
  v9 = v3;
  v10 = v5 + 152 * v2;
  v11 = sub_18006F538(v10, 240 - v2, a1);
  sub_18002AA30(*a1, a1[1], v5);
  v8 = 0LL;
  sub_18002CD34((__int64)a1, v5, 240LL, v3);
  return sub_18002B5E4((__int64)&v7);
}
