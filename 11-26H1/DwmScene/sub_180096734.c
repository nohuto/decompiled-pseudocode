/*
 * XREFs of sub_180096734 @ 0x180096734
 * Callers:
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800968F4 @ 0x1800968F4 (sub_1800968F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096734(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_18000D81C(a1 + 8, 16LL, 8LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 136, 16LL, 8LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 264, 16LL, 8LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  sub_1800968F4(a1 + 264, a2 + 1184);
  sub_180013540((__int64 *)(a1 + 424), (_QWORD *)(a2 + 1312));
  return a1;
}
