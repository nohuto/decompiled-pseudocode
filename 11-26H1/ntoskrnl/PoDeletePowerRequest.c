/*
 * XREFs of PoDeletePowerRequest @ 0x140ABB790
 * Callers:
 *     PoUnregisterSystemState @ 0x1404F0990 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x1404A6668 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
