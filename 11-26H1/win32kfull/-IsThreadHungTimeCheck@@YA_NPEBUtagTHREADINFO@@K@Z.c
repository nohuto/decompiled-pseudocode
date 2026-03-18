/*
 * XREFs of ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x140264778
 * Callers:
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401F1FAC (-InterQueueMsgCleanup@@YAXK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall IsThreadHungTimeCheck(const struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 271LL);
  v4 = *((_QWORD *)a1 + 60);
  return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *(_DWORD *)(v4 + 20) > a2
      && (*(_DWORD *)(v4 + 16) & 0x1C07) == 0
      && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
      && (*(_DWORD *)(*((_QWORD *)a1 + 57) + 12LL) & 0x40) == 0;
}
