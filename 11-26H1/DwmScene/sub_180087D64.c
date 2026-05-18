/*
 * XREFs of sub_180087D64 @ 0x180087D64
 * Callers:
 *     sub_18005FCB4 @ 0x18005FCB4 (sub_18005FCB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 *     sub_1800896CC @ 0x1800896CC (sub_1800896CC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180087D64(__int64 a1, _QWORD *a2)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180011CC4(v5, "ColorTransform");
  sub_18007A800(a1, (__int64)v5, a2);
  sub_1800129D0((__int64)v5);
  *(_QWORD *)a1 = &Spectre::Engine::ColorTransform::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  sub_1800896CC(a1);
  return a1;
}
