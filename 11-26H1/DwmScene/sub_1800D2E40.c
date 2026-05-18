/*
 * XREFs of sub_1800D2E40 @ 0x1800D2E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800D1DF4 @ 0x1800D1DF4 (sub_1800D1DF4.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2C04 @ 0x1800D2C04 (sub_1800D2C04.c)
 *     sub_1800D41AC @ 0x1800D41AC (sub_1800D41AC.c)
 *     sub_1800D4248 @ 0x1800D4248 (sub_1800D4248.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800D2E40(__int64 a1)
{
  __int64 *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _BYTE v9[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (__int64 *)(a1 + 144);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180012AC4(a1 + 64);
  v3 = (_QWORD *)*v1;
  sub_1800D1DF4((__int64)v1, (__int64)v1, *(char **)(*v1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v1[1] = 0LL;
  v4 = sub_1800D41AC(v10);
  v5 = (_QWORD *)sub_1800D21F4(v1, (__int64)v9, (__int64)&unk_1801CD980);
  sub_1800D2C04(*v5 + 64LL, v4);
  sub_1800D4248(v10);
  v6 = sub_1800D41AC(v10);
  v7 = (_QWORD *)sub_1800D21F4(v1, (__int64)v9, (__int64)&unk_1801CD9A0);
  sub_1800D2C04(*v7 + 64LL, v6);
  sub_1800D4248(v10);
  return Mtx_unlock(v2);
}
