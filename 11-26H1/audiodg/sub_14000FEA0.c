/*
 * XREFs of sub_14000FEA0 @ 0x14000FEA0
 * Callers:
 *     sub_14000F730 @ 0x14000F730 (sub_14000F730.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14000FEA0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
