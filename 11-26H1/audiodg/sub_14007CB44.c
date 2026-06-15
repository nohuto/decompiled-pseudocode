/*
 * XREFs of sub_14007CB44 @ 0x14007CB44
 * Callers:
 *     sub_14007C98C @ 0x14007C98C (sub_14007C98C.c)
 * Callees:
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 */

__int64 __fastcall sub_14007CB44(int a1, int a2, int a3, int a4)
{
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  return sub_14007CC24(a1, (unsigned int)&v5, 4, (unsigned int)&v6, 4LL, a4);
}
