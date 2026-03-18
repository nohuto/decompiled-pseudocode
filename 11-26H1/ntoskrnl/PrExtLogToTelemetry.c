/*
 * XREFs of PrExtLogToTelemetry @ 0x1406DCD54
 * Callers:
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1406DE09C (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-18h]
  int Blink; // [rsp+48h] [rbp-10h]

  v0 = -1073741637;
  if ( CmpCallbackListLock.WaitBlockFill5[32]
    || (CmpCallbackListLock.WaitBlockFill5[32] = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                        &dword_140E097A0,
                                                        0LL,
                                                        0LL) >= 0) != 0 )
  {
    Blink = (int)CmpCallbackListLock.Timer.Header.WaitListHead.Blink;
    v2[0] = *(_OWORD *)&CmpCallbackListLock.Queue;
    Flink = CmpCallbackListLock.Timer.Header.WaitListHead.Flink;
    v2[1] = *(_OWORD *)&CmpCallbackListLock.RelativeTimerBias;
    PrpWriteTraceLoggingEvent(v2);
    return 0;
  }
  return v0;
}
