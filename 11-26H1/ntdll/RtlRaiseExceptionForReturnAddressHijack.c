/*
 * XREFs of RtlRaiseExceptionForReturnAddressHijack @ 0x1801634B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 */

void RtlRaiseExceptionForReturnAddressHijack(void)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+18h] [rbp-C0h] BYREF

  ExceptionRecord.ExceptionCode = -2147483597;
  memset(&ExceptionRecord.ExceptionFlags, 0, 24);
  RtlRaiseException(&ExceptionRecord);
}
