/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x180112C00
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x180096A80 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FC70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FDB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlRaiseException(&ExceptionRecord);
}
