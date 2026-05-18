/*
 * XREFs of sub_1800299DC @ 0x1800299DC
 * Callers:
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_1800433C4 @ 0x1800433C4 (sub_1800433C4.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 */

__int64 __fastcall sub_1800299DC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180029674(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
