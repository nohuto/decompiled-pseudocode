/*
 * XREFs of sub_18005FD4C @ 0x18005FD4C
 * Callers:
 *     sub_18005EB9C @ 0x18005EB9C (sub_18005EB9C.c)
 * Callees:
 *     sub_18008A284 @ 0x18008A284 (sub_18008A284.c)
 */

__int64 __fastcall sub_18005FD4C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_18008A284(a1, v4);
}
