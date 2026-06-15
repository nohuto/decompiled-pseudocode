/*
 * XREFs of sub_14000E3A4 @ 0x14000E3A4
 * Callers:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 * Callees:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 */

void __fastcall sub_14000E3A4(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    sub_14000D9B8(a1);
}
