/*
 * XREFs of RtlHeapsStackCollection @ 0x180096678
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800963D8 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 RtlHeapsStackCollection()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 1;
  v1[1] = 0x8000000;
  v1[2] = 0x8000000;
  return RtlpEnumProcessHeaps(
           (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpStackTraceDatabaseHeapEnum,
           (__int64)v1,
           0);
}
