/*
 * XREFs of sub_1800837B0 @ 0x1800837B0
 * Callers:
 *     sub_1800BA158 @ 0x1800BA158 (sub_1800BA158.c)
 *     sub_1800BA188 @ 0x1800BA188 (sub_1800BA188.c)
 *     sub_1800BA1C4 @ 0x1800BA1C4 (sub_1800BA1C4.c)
 *     sub_1800BA230 @ 0x1800BA230 (sub_1800BA230.c)
 *     sub_1800BA624 @ 0x1800BA624 (sub_1800BA624.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

__int64 __fastcall sub_1800837B0(__int64 a1)
{
  sub_180028D1C(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
