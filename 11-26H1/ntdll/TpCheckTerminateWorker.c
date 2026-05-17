/*
 * XREFs of TpCheckTerminateWorker @ 0x180086AD0
 * Callers:
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     TppIsWorkerThread @ 0x180086B60 (TppIsWorkerThread.c)
 *     TppReportExceptionFilter @ 0x1801593DC (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TpCheckTerminateWorker(const void *a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread() )
  {
    DbgPrintEx(
      84,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      a1);
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    RtlRaiseException(&ExceptionRecord);
  }
}
