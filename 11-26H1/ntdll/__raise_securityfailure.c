/*
 * XREFs of __raise_securityfailure @ 0x1801269B8
 * Callers:
 *     __report_securityfailure @ 0x180126B7C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18011F2D0 (RtlUnhandledExceptionFilter.c)
 */

__int64 __fastcall _raise_securityfailure(__int64 a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
