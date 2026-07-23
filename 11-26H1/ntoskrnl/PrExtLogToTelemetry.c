/*
 * XREFs of PrExtLogToTelemetry @ 0x1406E0FF4
 * Callers:
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1406E233C (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]
  int Flink; // [rsp+48h] [rbp-10h]

  v0 = -1073741637;
  if ( CmpContextListLock.WaitBlockFill5[25]
    || (CmpContextListLock.WaitBlockFill5[25] = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                       &dword_140E097C0,
                                                       0LL,
                                                       0LL) >= 0) != 0 )
  {
    Flink = (int)CmpContextListLock.Timer.Header.WaitListHead.Flink;
    v2[0] = *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&CmpContextListLock.216 + 8);
    v3 = *(_QWORD *)&CmpContextListLock.Timer.Header.Lock;
    v2[1] = *(_OWORD *)&CmpContextListLock.Teb;
    PrpWriteTraceLoggingEvent(v2);
    return 0;
  }
  return v0;
}
