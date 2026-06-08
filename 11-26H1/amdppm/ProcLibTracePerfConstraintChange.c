/*
 * XREFs of ProcLibTracePerfConstraintChange @ 0x140024FE0
 * Callers:
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C670 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x140002340 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTracePerfConstraintChange(__int64 a1, int a2, int a3)
{
  NTSTATUS ProcessorNumber; // eax
  struct _PROCESSOR_NUMBER v6; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  int *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF
  int v15; // [rsp+B8h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  v6 = 0;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                              &PPM_ETW_PERF_CONSTRAINT_CHANGE);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v6);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Ptr = (unsigned __int64)&v6;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = 1LL;
      p_Number = &v6.Number;
      v11 = 4LL;
      v10 = &v14;
      v12 = &v15;
      v13 = 4LL;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                  &PPM_ETW_PERF_CONSTRAINT_CHANGE,
                                  0LL,
                                  (ULONG)4,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
