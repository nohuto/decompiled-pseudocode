/*
 * XREFs of sub_18006AA98 @ 0x18006AA98
 * Callers:
 *     sub_180024D44 @ 0x180024D44 (sub_180024D44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18001E148 @ 0x18001E148 (sub_18001E148.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18006AA98(_QWORD *a1)
{
  __int64 v2; // rax
  signed int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-38h] BYREF

  sub_180028DF4(a1, 7, 3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  sub_18000D81C((__int64)(a1 + 16), 16LL, 4LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C((__int64)(a1 + 24), 16LL, 4LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  a1[32] = 0LL;
  a1[33] = 0LL;
  v2 = sub_180011790(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[32] = v2;
  _InterlockedIncrement(&dword_1801C85AC);
  v3 = sub_18001E148((unsigned int *)&dword_1801C85AC);
  v4 = sub_180028AE4(v8, v3);
  v5 = sub_18001C928((__int64)v7, (__int64)"DepthBuffer", v4);
  sub_1800292C4((__int64)a1, v5);
  sub_1800129D0((__int64)v8);
  return a1;
}
