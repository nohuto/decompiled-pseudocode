/*
 * XREFs of sub_18004C840 @ 0x18004C840
 * Callers:
 *     sub_18004E988 @ 0x18004E988 (sub_18004E988.c)
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 * Callees:
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 */

__int64 __fastcall sub_18004C840(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18004BDD8(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
