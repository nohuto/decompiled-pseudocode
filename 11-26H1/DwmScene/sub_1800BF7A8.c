/*
 * XREFs of sub_1800BF7A8 @ 0x1800BF7A8
 * Callers:
 *     sub_180011E94 @ 0x180011E94 (sub_180011E94.c)
 *     sub_1800BF800 @ 0x1800BF800 (sub_1800BF800.c)
 *     sub_1800BF850 @ 0x1800BF850 (sub_1800BF850.c)
 *     sub_1800BF8D0 @ 0x1800BF8D0 (sub_1800BF8D0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18003154C @ 0x18003154C (sub_18003154C.c)
 *     sub_1800BF76C @ 0x1800BF76C (sub_1800BF76C.c)
 */

__int64 __fastcall sub_1800BF7A8(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  sub_18003154C((void **)(a1 + 1680));
  sub_18003154C((void **)(a1 + 1664));
  sub_1800BF76C((void **)(a1 + 1648));
  sub_18000F938((__int64 *)(a1 + 504));
  return sub_18002B48C(a1);
}
