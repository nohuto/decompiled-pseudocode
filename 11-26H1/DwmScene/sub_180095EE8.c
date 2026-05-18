/*
 * XREFs of sub_180095EE8 @ 0x180095EE8
 * Callers:
 *     sub_180095F70 @ 0x180095F70 (sub_180095F70.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

__int64 __fastcall sub_180095EE8(_QWORD *a1)
{
  *a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000BFA4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
  sub_18000BFA4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
  return sub_18000BFA4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
}
