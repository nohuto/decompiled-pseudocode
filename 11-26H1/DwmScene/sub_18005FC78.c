/*
 * XREFs of sub_18005FC78 @ 0x18005FC78
 * Callers:
 *     sub_18005E70C @ 0x18005E70C (sub_18005E70C.c)
 * Callees:
 *     sub_18008E674 @ 0x18008E674 (sub_18008E674.c)
 */

__int64 __fastcall sub_18005FC78(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_18008E674(a1, v4);
}
