/*
 * XREFs of PsGetThreadId @ 0x14047FA80
 * Callers:
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 *     PfSnBeginTrace @ 0x140AA32C0 (PfSnBeginTrace.c)
 *     PfpScenCtxServiceThreadSet @ 0x140BF8D14 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
