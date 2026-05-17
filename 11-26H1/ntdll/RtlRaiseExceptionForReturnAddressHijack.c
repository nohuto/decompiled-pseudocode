/*
 * XREFs of RtlRaiseExceptionForReturnAddressHijack @ 0x1801635B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 */

void RtlRaiseExceptionForReturnAddressHijack()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+18h] [rbp-C0h] BYREF

  ExceptionRecord.ExceptionCode = -2147483597;
  memset(&ExceptionRecord.ExceptionFlags, 0, 24);
  RtlRaiseException(&ExceptionRecord);
}
