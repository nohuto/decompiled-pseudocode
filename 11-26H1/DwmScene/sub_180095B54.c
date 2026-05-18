/*
 * XREFs of sub_180095B54 @ 0x180095B54
 * Callers:
 *     sub_180095C40 @ 0x180095C40 (sub_180095C40.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE5AC @ 0x1800DE5AC (sub_1800DE5AC.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

__int64 __fastcall sub_180095B54(_QWORD *a1)
{
  *a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000BFA4((__int64)(a1 + 385), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
  sub_18000BFA4((__int64)(a1 + 193), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
  return sub_18000BFA4((__int64)(a1 + 1), 256LL, 6LL, (void (__fastcall *)(__int64))sub_180057050);
}
