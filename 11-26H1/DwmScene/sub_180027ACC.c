/*
 * XREFs of sub_180027ACC @ 0x180027ACC
 * Callers:
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_1800906B4 @ 0x1800906B4 (sub_1800906B4.c)
 *     sub_1800D9168 @ 0x1800D9168 (sub_1800D9168.c)
 *     sub_1800D9613 @ 0x1800D9613 (sub_1800D9613.c)
 *     sub_1800DC49D @ 0x1800DC49D (sub_1800DC49D.c)
 *     sub_1800DE121 @ 0x1800DE121 (sub_1800DE121.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180027ACC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x38uLL);
  return result;
}
