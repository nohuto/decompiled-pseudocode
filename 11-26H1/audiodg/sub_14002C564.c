/*
 * XREFs of sub_14002C564 @ 0x14002C564
 * Callers:
 *     sub_14004479C @ 0x14004479C (sub_14004479C.c)
 *     sub_14009604C @ 0x14009604C (sub_14009604C.c)
 * Callees:
 *     sub_14002C5A0 @ 0x14002C5A0 (sub_14002C5A0.c)
 */

__int64 __fastcall sub_14002C564(__int64 a1)
{
  *(_QWORD *)(a1 + 144) = 16LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 152) = 1065353216;
  sub_14002C5A0();
  return a1;
}
