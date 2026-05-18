/*
 * XREFs of sub_18003160C @ 0x18003160C
 * Callers:
 *     sub_18002F4FC @ 0x18002F4FC (sub_18002F4FC.c)
 * Callees:
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 */

__int64 __fastcall sub_18003160C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180014244(v2 + 64);
  return sub_1800313A0(a1);
}
