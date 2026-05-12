/*
 * XREFs of WPP_SF_qqdqiqLq @ 0x140097E24
 * Callers:
 *     RaidLockContiguousPhysicalPages @ 0x1400952B0 (RaidLockContiguousPhysicalPages.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qqdqiqLq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v6; // [rsp+E0h] [rbp+28h] BYREF
  va_list va1; // [rsp+E0h] [rbp+28h]
  __int64 v8; // [rsp+E8h] [rbp+30h] BYREF
  va_list va2; // [rsp+E8h] [rbp+30h]
  __int64 v10; // [rsp+F0h] [rbp+38h] BYREF
  va_list va3; // [rsp+F0h] [rbp+38h]
  __int64 v12; // [rsp+F8h] [rbp+40h] BYREF
  va_list va4; // [rsp+F8h] [rbp+40h]
  __int64 v14; // [rsp+100h] [rbp+48h] BYREF
  va_list va5; // [rsp+100h] [rbp+48h]
  __int64 v16; // [rsp+108h] [rbp+50h] BYREF
  va_list va6; // [rsp+108h] [rbp+50h]
  va_list va7; // [rsp+110h] [rbp+58h] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v10 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v12 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v14 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v16 = va_arg(va7, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids,
           12LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           (__int64 *)va4,
           8LL,
           (__int64 *)va5,
           8LL,
           (__int64 *)va6,
           4LL,
           va7,
           8LL,
           0LL);
}
