/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x1800914F8
 * Callers:
 *     RtlpHpHeapHandleError @ 0x18011F8D0 (RtlpHpHeapHandleError.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014F270 (HeapCommitFailAvoidTriageRules.c)
 * Callees:
 *     RtlReportFatalFailure @ 0x180091238 (RtlReportFatalFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpRaiseFatalLimitError(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&v2, 0, 0x98uLL);
  v2.ExceptionCode = qword_1801C5100;
  v2.ExceptionInformation[0] = dword_1801C50E8;
  v2.ExceptionInformation[1] = qword_1801C50F0;
  v2.ExceptionInformation[2] = qword_1801C5108;
  v2.ExceptionInformation[3] = qword_1801C5110;
  v2.ExceptionFlags = 1;
  v2.ExceptionRecord = 0LL;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  RtlReportFatalFailure(&v2);
}
