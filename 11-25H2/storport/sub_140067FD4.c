/*
 * XREFs of sub_140067FD4 @ 0x140067FD4
 * Callers:
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 *     StorPortBusy @ 0x140042460 (StorPortBusy.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_14006A2B0 @ 0x14006A2B0 (sub_14006A2B0.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_14017AB2C @ 0x14017AB2C (sub_14017AB2C.c)
 *     sub_14017F720 @ 0x14017F720 (sub_14017F720.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140067FD4(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
