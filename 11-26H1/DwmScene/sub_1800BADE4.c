/*
 * XREFs of sub_1800BADE4 @ 0x1800BADE4
 * Callers:
 *     sub_1800BB4B0 @ 0x1800BB4B0 (sub_1800BB4B0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180027B20 @ 0x180027B20 (sub_180027B20.c)
 */

__int64 __fastcall sub_1800BADE4(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  sub_18001DCFC(&qword_1801BD4C8, 3);
  sub_18001DCFC(&qword_1801BD4C8, 3);
  sub_18000F938((__int64 *)(a1 + 4640));
  sub_180014244(a1 + 4600);
  sub_18000F938((__int64 *)(a1 + 4280));
  sub_18000F938((__int64 *)(a1 + 4272));
  sub_18000F938((__int64 *)(a1 + 4264));
  sub_18000F938((__int64 *)(a1 + 4256));
  sub_180027B20((void **)(a1 + 4152));
  sub_180027B20((void **)(a1 + 4136));
  return sub_180025C5C(a1);
}
