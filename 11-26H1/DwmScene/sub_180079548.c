/*
 * XREFs of sub_180079548 @ 0x180079548
 * Callers:
 *     sub_180079580 @ 0x180079580 (sub_180079580.c)
 * Callees:
 *     sub_180076520 @ 0x180076520 (sub_180076520.c)
 */

__int64 __fastcall sub_180079548(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_180076520((__int64)(a1 + 14), a2);
  return sub_18005CDF8(a1);
}
