/*
 * XREFs of sub_18002D978 @ 0x18002D978
 * Callers:
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 * Callees:
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 */

__int64 __fastcall sub_18002D978(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_180056AE0(a1, v4);
}
