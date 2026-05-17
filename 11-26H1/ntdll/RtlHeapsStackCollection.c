/*
 * XREFs of RtlHeapsStackCollection @ 0x180075A88
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800757E8 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 RtlHeapsStackCollection()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 1;
  v1[1] = 0x8000000;
  v1[2] = 0x8000000;
  return RtlpEnumProcessHeaps(RtlpStackTraceDatabaseHeapEnum, v1, 0LL);
}
