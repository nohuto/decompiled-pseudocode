/*
 * XREFs of sub_140030488 @ 0x140030488
 * Callers:
 *     sub_140030434 @ 0x140030434 (sub_140030434.c)
 *     sub_1400304D0 @ 0x1400304D0 (sub_1400304D0.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400304D0 @ 0x1400304D0 (sub_1400304D0.c)
 */

__int64 __fastcall sub_140030488(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v5; // zf

  sub_140003238(a2 + 2);
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v5 )
    return sub_1400304D0(a1);
  return result;
}
