/*
 * XREFs of sub_18004D1D8 @ 0x18004D1D8
 * Callers:
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 * Callees:
 *     sub_18004D2E8 @ 0x18004D2E8 (sub_18004D2E8.c)
 */

__int64 __fastcall sub_18004D1D8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004D2E8(v2 + 32);
  return sub_18001D5A4(a1);
}
