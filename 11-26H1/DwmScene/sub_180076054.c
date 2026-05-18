/*
 * XREFs of sub_180076054 @ 0x180076054
 * Callers:
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180029634 @ 0x180029634 (sub_180029634.c)
 *     sub_1800764E0 @ 0x1800764E0 (sub_1800764E0.c)
 *     sub_180077E54 @ 0x180077E54 (sub_180077E54.c)
 */

__int64 sub_180076054(__int64 a1, void *a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = (a3 - (__int64)a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012A30();
    sub_180077E54();
    *(_QWORD *)(a1 + 8) = sub_180029634(a2, a3, *(char **)a1);
    v8 = 0LL;
    sub_1800764E0((__int64 *)va);
  }
  return a1;
}
