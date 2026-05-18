/*
 * XREFs of sub_180014FA4 @ 0x180014FA4
 * Callers:
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 * Callees:
 *     sub_180048938 @ 0x180048938 (sub_180048938.c)
 */

__int64 __fastcall sub_180014FA4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_180048938(a1, v4);
}
