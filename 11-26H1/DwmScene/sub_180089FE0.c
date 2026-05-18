/*
 * XREFs of sub_180089FE0 @ 0x180089FE0
 * Callers:
 *     sub_18008A780 @ 0x18008A780 (sub_18008A780.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18008A284 @ 0x18008A284 (sub_18008A284.c)
 */

__int64 __fastcall sub_180089FE0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_18008A284(v3, v2);
}
