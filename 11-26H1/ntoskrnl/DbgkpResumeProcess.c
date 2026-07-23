/*
 * XREFs of DbgkpResumeProcess @ 0x1409CEF0C
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140ACD5FC (DbgkpSendApiMessageLpc.c)
 *     DbgkExitThread @ 0x140B3C484 (DbgkExitThread.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PsThawMultiProcess(a1, 0, 1LL, a4);
  KeLeaveCriticalRegion();
}
