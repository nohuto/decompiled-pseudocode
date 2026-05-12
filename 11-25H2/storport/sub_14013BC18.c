/*
 * XREFs of sub_14013BC18 @ 0x14013BC18
 * Callers:
 *     sub_14013AFF4 @ 0x14013AFF4 (sub_14013AFF4.c)
 *     sub_14013B2AC @ 0x14013B2AC (sub_14013B2AC.c)
 *     sub_14013BB14 @ 0x14013BB14 (sub_14013BB14.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14013BC18(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           &unk_1401552C8,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
