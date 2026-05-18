/*
 * XREFs of sub_180013090 @ 0x180013090
 * Callers:
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 * Callees:
 *     sub_180041DF0 @ 0x180041DF0 (sub_180041DF0.c)
 */

__int64 __fastcall sub_180013090(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_180041DF0(a1, v4);
}
