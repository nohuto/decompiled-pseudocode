/*
 * XREFs of sub_180014FE0 @ 0x180014FE0
 * Callers:
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 * Callees:
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 */

__int64 __fastcall sub_180014FE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[1] = v2;
  return sub_1800494AC(a1, v4);
}
