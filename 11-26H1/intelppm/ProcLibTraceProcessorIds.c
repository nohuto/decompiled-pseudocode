/*
 * XREFs of ProcLibTraceProcessorIds @ 0x1400468B4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1400041F8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorIds(__int64 a1)
{
  NTSTATUS ProcessorNumber; // eax
  struct _PROCESSOR_NUMBER v4; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp-9h]
  __int64 v7; // [rsp+58h] [rbp-1h]
  __int64 v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  __int64 v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  v4 = 0;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PROCESSOR_ID_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v4);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Ptr = (unsigned __int64)&v4;
      *(_QWORD *)&UserData.Size = 2LL;
      p_Number = &v4.Number;
      v7 = 1LL;
      v8 = a1 + 52;
      v9 = 4LL;
      v10 = a1 + 48;
      v12 = a1 + 56;
      v14 = a1 + 72;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                  &PPM_ETW_PROCESSOR_ID_RUNDOWN,
                                  0LL,
                                  (ULONG)6,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
