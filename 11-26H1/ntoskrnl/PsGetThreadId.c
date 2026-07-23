/*
 * XREFs of PsGetThreadId @ 0x1404793F0
 * Callers:
 *     PspFindFirstThreadByTebValue @ 0x140949C14 (PspFindFirstThreadByTebValue.c)
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x140BFED14 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
