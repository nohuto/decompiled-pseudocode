/*
 * XREFs of sub_18006A5C8 @ 0x18006A5C8
 * Callers:
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 * Callees:
 *     sub_180041964 @ 0x180041964 (sub_180041964.c)
 */

__int64 __fastcall sub_18006A5C8(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_180041964((__int64)a1, a1[2] + 1LL);
  return sub_18006A3F0(a1, v2);
}
