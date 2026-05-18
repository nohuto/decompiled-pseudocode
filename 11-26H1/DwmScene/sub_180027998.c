/*
 * XREFs of sub_180027998 @ 0x180027998
 * Callers:
 *     sub_180011958 @ 0x180011958 (sub_180011958.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18001E148 @ 0x18001E148 (sub_18001E148.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180027998(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  void *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[32]; // [rsp+50h] [rbp-38h] BYREF

  sub_180028DF4(a1, 10LL, 3LL);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = sub_180011790(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 120) = v2;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  _InterlockedIncrement(&dword_1801C8558);
  v3 = sub_18001E148((unsigned int *)&dword_1801C8558);
  v4 = (void *)sub_180028AE4(v8, v3);
  v5 = sub_18001C928((__int64)v7, (__int64)"FrameBuffer", v4);
  sub_1800292C4(a1, v5);
  sub_1800129D0((__int64)v8);
  return a1;
}
