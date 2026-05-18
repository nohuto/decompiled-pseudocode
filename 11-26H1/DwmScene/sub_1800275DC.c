/*
 * XREFs of sub_1800275DC @ 0x1800275DC
 * Callers:
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 * Callees:
 *     sub_180027484 @ 0x180027484 (sub_180027484.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 */

__int64 __fastcall sub_1800275DC(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 )
    sub_180027484(1);
  if ( *((_BYTE *)a1 + 8) )
    sub_180027484(36);
  result = sub_180029674(v2);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
