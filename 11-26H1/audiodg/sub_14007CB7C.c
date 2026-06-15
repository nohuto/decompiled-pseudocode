/*
 * XREFs of sub_14007CB7C @ 0x14007CB7C
 * Callers:
 *     sub_14007C98C @ 0x14007C98C (sub_14007C98C.c)
 * Callees:
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 */

__int64 __fastcall sub_14007CB7C(int a1, int a2, int a3)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  return sub_14007CC24(a1, (unsigned int)&v4, 4, (unsigned int)&v5, 4LL, 1);
}
