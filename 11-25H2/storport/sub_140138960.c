/*
 * XREFs of sub_140138960 @ 0x140138960
 * Callers:
 *     sub_140138764 @ 0x140138764 (sub_140138764.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 sub_140138960(int **a1, __int64 a2, __int64 a3, ...)
{
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  sub_1400859FC(*a1, "SetACEBooleanExpr", a3, 23, v7, 0LL);
  return sub_140137E38(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1401385C0,
           (__int64)va,
           0LL,
           0LL,
           0LL,
           0LL);
}
