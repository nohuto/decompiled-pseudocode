/*
 * XREFs of sub_180076598 @ 0x180076598
 * Callers:
 *     sub_1800765E0 @ 0x1800765E0 (sub_1800765E0.c)
 * Callees:
 *     sub_180076520 @ 0x180076520 (sub_180076520.c)
 */

__int64 __fastcall sub_180076598(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_180076520((__int64)(a1 + 19), a2);
  return sub_180090744(a1);
}
