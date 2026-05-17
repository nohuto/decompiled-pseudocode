/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x180113150
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FD70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FEB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
