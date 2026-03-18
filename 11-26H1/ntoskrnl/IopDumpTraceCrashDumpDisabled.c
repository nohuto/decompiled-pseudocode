/*
 * XREFs of IopDumpTraceCrashDumpDisabled @ 0x1405C8EC8
 * Callers:
 *     IopDisableCrashDump @ 0x1405C8BA8 (IopDisableCrashDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x14052CC84 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char IopDumpTraceCrashDumpDisabled()
{
  char result; // al
  __int64 v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+68h] [rbp-20h]
  __int64 v4; // [rsp+70h] [rbp-18h]

  result = IopDumpIsTracingEnabled();
  if ( result )
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLED, 0LL, 0, 0LL, 0LL, 0, 0LL);
  if ( (unsigned int)dword_140E06CD8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06CD8, 0x400000000000LL);
    if ( result )
    {
      v1 = 0x1000000LL;
      v3 = &v1;
      v4 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06CD8,
               (unsigned __int8 *)word_140046D62,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
