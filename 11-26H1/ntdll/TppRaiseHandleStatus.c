/*
 * XREFs of TppRaiseHandleStatus @ 0x1800C7568
 * Callers:
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TppJobpRundownJob @ 0x1800C7350 (TppJobpRundownJob.c)
 *     TppSetupNextWait @ 0x1800C7470 (TppSetupNextWait.c)
 *     TppWaitTimerExpiration @ 0x1800FB6CC (TppWaitTimerExpiration.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseHandleStatus(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  void (__fastcall *v6)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int); // r8
  __int64 v7; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+28h] [rbp-59h] BYREF

  v4 = a1;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( a3 )
  {
    v6 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v6 == RtlpTpWaitCallback && (v7 = *(_QWORD *)(a3 + 88), *(_QWORD *)(v7 + 32)) )
      ExceptionRecord.ExceptionInformation[4] = *(_QWORD *)(v7 + 32);
    else
      ExceptionRecord.ExceptionInformation[4] = (unsigned __int64)v6;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[0] = v4;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
