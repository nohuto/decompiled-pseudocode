/*
 * XREFs of RtlpTpImpersonate @ 0x1800671C8
 * Callers:
 *     RtlpTpTimerCallback @ 0x180065FE0 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x1800C0450 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1;
  v1 = 0;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  while ( 1 )
  {
    v2 = NtSetInformationThread(-2LL, 5LL, &v3, 8LL);
    ++v1;
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
