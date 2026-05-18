/*
 * XREFs of sub_180053D44 @ 0x180053D44
 * Callers:
 *     sub_18005377C @ 0x18005377C (sub_18005377C.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     sub_180052FF0 @ 0x180052FF0 (sub_180052FF0.c)
 *     sub_180053C4C @ 0x180053C4C (sub_180053C4C.c)
 */

__int64 __fastcall sub_180053D44(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = sub_180053C4C(v9, a2, a4);
  sub_180052FF0(a1, v7, a3, a4);
  return a1;
}
