/*
 * XREFs of ProcLibTraceEnergyCounterUpdate @ 0x140008410
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x140006200 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceEnergyCounterUpdate(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS ProcessorNumberFromIndex; // eax
  unsigned __int8 Number; // [rsp+38h] [rbp-9h] BYREF
  unsigned __int16 Group; // [rsp+3Ch] [rbp-5h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp+17h]
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  int *v12; // [rsp+68h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  __int64 *v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+B8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  ProcNumber = 0;
  LOBYTE(ProcessorNumberFromIndex) = EtwEventEnabled(
                                       (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                       &PPM_ETW_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)ProcessorNumberFromIndex )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      Group = ProcNumber.Group;
      Number = ProcNumber.Number;
      UserData.Ptr = (unsigned __int64)&Group;
      p_Number = &Number;
      v12 = &v16;
      v14 = &v17;
      *(_QWORD *)&UserData.Size = 2LL;
      v11 = 1LL;
      v13 = 4LL;
      v15 = 8LL;
      LOBYTE(ProcessorNumberFromIndex) = EtwWrite(
                                           (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                           &PPM_ETW_ENERGY_COUNTER_UPDATE,
                                           0LL,
                                           (ULONG)4,
                                           &UserData);
    }
  }
  return ProcessorNumberFromIndex;
}
