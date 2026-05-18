/*
 * XREFs of sub_18001E5F8 @ 0x18001E5F8
 * Callers:
 *     sub_18002D3D4 @ 0x18002D3D4 (sub_18002D3D4.c)
 *     sub_18002D748 @ 0x18002D748 (sub_18002D748.c)
 *     sub_18005ECC0 @ 0x18005ECC0 (sub_18005ECC0.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_1800D0740 @ 0x1800D0740 (sub_1800D0740.c)
 * Callees:
 *     sub_18001C7B8 @ 0x18001C7B8 (sub_18001C7B8.c)
 */

_QWORD *__fastcall sub_18001E5F8(_QWORD *a1, __int64 a2)
{
  sub_18001C7B8((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
