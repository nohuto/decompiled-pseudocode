/*
 * XREFs of sub_180084328 @ 0x180084328
 * Callers:
 *     sub_180050E10 @ 0x180050E10 (sub_180050E10.c)
 * Callees:
 *     sub_18001E844 @ 0x18001E844 (sub_18001E844.c)
 */

__int64 __fastcall sub_180084328(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  sub_18001E844((__int64)(a1 + 15));
  return sub_180093840(a1);
}
