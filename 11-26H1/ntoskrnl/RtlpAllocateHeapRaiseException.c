/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x14061DFE4
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_0(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlRaiseException(&ExceptionRecord);
}
