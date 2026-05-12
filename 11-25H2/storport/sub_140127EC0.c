/*
 * XREFs of sub_140127EC0 @ 0x140127EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14012A71C @ 0x14012A71C (sub_14012A71C.c)
 */

__int64 __fastcall sub_140127EC0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  LOBYTE(a3) = 1;
  return sub_14012A71C(a1, &v4, a3, 2LL);
}
