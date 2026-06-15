/*
 * XREFs of sub_1400A95C8 @ 0x1400A95C8
 * Callers:
 *     sub_1400A9A10 @ 0x1400A9A10 (sub_1400A9A10.c)
 *     sub_1400A9B50 @ 0x1400A9B50 (sub_1400A9B50.c)
 * Callees:
 *     sub_1400A4ED4 @ 0x1400A4ED4 (sub_1400A4ED4.c)
 *     sub_1400A93A8 @ 0x1400A93A8 (sub_1400A93A8.c)
 */

__int64 __fastcall sub_1400A95C8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = sub_1400A4ED4((unsigned __int64)v5, (_QWORD *)(a1 + 32));
  sub_1400A93A8(a2, v3);
  return a2;
}
