/*
 * XREFs of sub_1800CFB6C @ 0x1800CFB6C
 * Callers:
 *     sub_1800CF8E4 @ 0x1800CF8E4 (sub_1800CF8E4.c)
 *     sub_1800E4FDE @ 0x1800E4FDE (sub_1800E4FDE.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800CFB6C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18000F938((__int64 *)(v2 + 40));
  return sub_1800313C4(a1);
}
