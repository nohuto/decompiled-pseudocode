/*
 * XREFs of sub_1800C5D7C @ 0x1800C5D7C
 * Callers:
 *     sub_1800C56C0 @ 0x1800C56C0 (sub_1800C56C0.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 */

_QWORD *__fastcall sub_1800C5D7C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = sub_1800277FC((__int64 *)(a1 + 120), (__int64)v6, &v7);
  sub_180012C40(a2, (_QWORD *)(*(_QWORD *)v4 + 40LL));
  return a2;
}
