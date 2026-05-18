/*
 * XREFs of sub_180075FB8 @ 0x180075FB8
 * Callers:
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180076378 @ 0x180076378 (sub_180076378.c)
 *     sub_1800764C0 @ 0x1800764C0 (sub_1800764C0.c)
 *     sub_180077E10 @ 0x180077E10 (sub_180077E10.c)
 */

_QWORD *sub_180075FB8(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 6;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFLL )
      sub_180012A30();
    sub_180077E10();
    a1[1] = sub_180076378(a2, a3, *a1);
    v8 = 0LL;
    sub_1800764C0((__int64 *)va);
  }
  return a1;
}
