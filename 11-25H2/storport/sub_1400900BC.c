/*
 * XREFs of sub_1400900BC @ 0x1400900BC
 * Callers:
 *     sub_14008D658 @ 0x14008D658 (sub_14008D658.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_1400900BC(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+A8h] [rbp+20h] BYREF
  __int64 v6; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  __int64 v8; // [rsp+B8h] [rbp+30h] BYREF
  va_list va1; // [rsp+B8h] [rbp+30h]
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va2; // [rsp+C0h] [rbp+38h]
  va_list va3; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v10 = va_arg(va3, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           &unk_140148B00,
           13LL,
           &v5,
           4LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           va3,
           8LL,
           0LL);
}
