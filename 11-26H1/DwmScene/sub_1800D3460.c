/*
 * XREFs of sub_1800D3460 @ 0x1800D3460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800D2CA8 @ 0x1800D2CA8 (sub_1800D2CA8.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D3460(__int64 *a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180012AC4((__int64)(a1 + 8));
  v5 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v9, a2);
  v6 = sub_1800D2CA8(a1 + 18, v5);
  sub_180014244((__int64)v9);
  v7 = sub_1800141BC(a2);
  LOBYTE(v6) = sub_1800D4380(v6, v7);
  Mtx_unlock(v4);
  return v6;
}
