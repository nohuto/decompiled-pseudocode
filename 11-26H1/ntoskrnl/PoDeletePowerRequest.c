/*
 * XREFs of PoDeletePowerRequest @ 0x14094CE80
 * Callers:
 *     PoUnregisterSystemState @ 0x1404E9F70 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14049FCF8 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
