/*
 * XREFs of DbgkpResumeProcess @ 0x1409535CC
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409552D4 (DbgkpSendApiMessageLpc.c)
 *     DbgkExitThread @ 0x14095559C (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PsThawMultiProcess(a1, 0, 1LL, a4);
  KeLeaveCriticalRegion();
}
