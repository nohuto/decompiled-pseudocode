/*
 * XREFs of PoDiagTraceIRTimerSleepStudyRundown @ 0x1404F8504
 * Callers:
 *     ExStopRecordingIRTimerExpiries @ 0x140B190AC (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PoDiagTraceIRTimerSleepStudyRundown(int a1, __int16 a2, const WCHAR *a3)
{
  _UNKNOWN **v3; // rax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  __int16 *v8; // [rsp+68h] [rbp+27h]
  __int64 v9; // [rsp+70h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+78h] [rbp+37h]
  int Length; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v14; // [rsp+A8h] [rbp+67h] BYREF
  __int16 v15; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v15 = a2;
  v14 = a1;
  DestinationString = 0LL;
  if ( byte_140E67628 )
  {
    LOBYTE(v3) = EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA);
    if ( (_BYTE)v3 )
    {
      RtlInitUnicodeString(&DestinationString, a3);
      UserData.Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v15;
      Buffer = DestinationString.Buffer;
      Length = DestinationString.Length;
      v9 = 2LL;
      v12 = 0;
      LOBYTE(v3) = EtwWriteEx(
                     *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                     &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     3u,
                     &UserData);
    }
  }
  return (char)v3;
}
