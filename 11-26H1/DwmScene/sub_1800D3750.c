/*
 * XREFs of sub_1800D3750 @ 0x1800D3750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D3750(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+28h] [rbp-60h] BYREF

  v10[4] = a3;
  v8 = sub_180013440(v10, a3);
  LODWORD(a1) = sub_1800D0FD4(a1, a2, (__int64)v8, a4);
  sub_180014244(a3);
  return (unsigned int)a1;
}
