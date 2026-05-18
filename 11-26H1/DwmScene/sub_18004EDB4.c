/*
 * XREFs of sub_18004EDB4 @ 0x18004EDB4
 * Callers:
 *     sub_18005A4A4 @ 0x18005A4A4 (sub_18005A4A4.c)
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006A350 @ 0x18006A350 (sub_18006A350.c)
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 */

__int64 __fastcall sub_18004EDB4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v7, a3);
  return sub_18007EFAC(v4, v5, v3);
}
