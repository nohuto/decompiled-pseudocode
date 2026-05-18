/*
 * XREFs of sub_18008497C @ 0x18008497C
 * Callers:
 *     sub_180051010 @ 0x180051010 (sub_180051010.c)
 *     sub_1800C9300 @ 0x1800C9300 (sub_1800C9300.c)
 * Callees:
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 */

__int64 __fastcall sub_18008497C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_180078020((__int64)(a1 + 14));
  return sub_180027BC8((__int64)a1);
}
