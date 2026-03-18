/*
 * XREFs of ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402AE7F4
 * Callers:
 *     xxxQueryInformationThread @ 0x14002C784 (xxxQueryInformationThread.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401EEBFC (-InterQueueMsgCleanup@@YAXK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall IsThreadHungTimeCheck(const struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 271);
  v4 = *((_QWORD *)a1 + 61);
  return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *(_DWORD *)(v4 + 20) > a2
      && (*(_DWORD *)(v4 + 16) & 0x1C07) == 0
      && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
      && (*(_DWORD *)(*((_QWORD *)a1 + 58) + 12LL) & 0x40) == 0;
}
