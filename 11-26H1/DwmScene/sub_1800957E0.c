/*
 * XREFs of sub_1800957E0 @ 0x1800957E0
 * Callers:
 *     sub_1800958D0 @ 0x1800958D0 (sub_1800958D0.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE593 @ 0x1800DE593 (sub_1800DE593.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800957E0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000BFA4((__int64)(a1 + 289), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180057020);
  sub_18000BFA4((__int64)(a1 + 145), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180057020);
  return sub_18000BFA4((__int64)(a1 + 1), 192LL, 6LL, (void (__fastcall *)(__int64))sub_180057020);
}
