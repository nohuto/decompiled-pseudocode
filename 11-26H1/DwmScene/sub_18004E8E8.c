/*
 * XREFs of sub_18004E8E8 @ 0x18004E8E8
 * Callers:
 *     sub_180018EE0 @ 0x180018EE0 (sub_180018EE0.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_18006541C @ 0x18006541C (sub_18006541C.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_18008E2D0 @ 0x18008E2D0 (sub_18008E2D0.c)
 *     sub_1800946C4 @ 0x1800946C4 (sub_1800946C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004E8E8(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[2] = a3;
  v5 = (__int64 *)(a1 + 18560);
  sub_18004F194(a1 + 18560, v8, a3);
  if ( v8[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = sub_18004C408(v5, (__int64)v8, a3);
    sub_180012C40(a2, (_QWORD *)(*(_QWORD *)v6 + 64LL));
  }
  sub_1800129D0(a3);
  return a2;
}
