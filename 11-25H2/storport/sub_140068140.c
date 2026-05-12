/*
 * XREFs of sub_140068140 @ 0x140068140
 * Callers:
 *     sub_1400081BC @ 0x1400081BC (sub_1400081BC.c)
 *     sub_140008510 @ 0x140008510 (sub_140008510.c)
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_14005C728 @ 0x14005C728 (sub_14005C728.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140068140(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va2; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           va3,
           4LL,
           0LL);
}
