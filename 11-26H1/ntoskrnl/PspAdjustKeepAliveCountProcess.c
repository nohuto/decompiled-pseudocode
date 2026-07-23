/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x140B07994
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x14044D080 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1404C4130 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(void *a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
