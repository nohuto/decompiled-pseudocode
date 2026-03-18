/*
 * XREFs of DbgkpSuspendProcess @ 0x140953D38
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409552D4 (DbgkpSendApiMessageLpc.c)
 *     DbgkExitThread @ 0x14095559C (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v2, v3);
  return 0;
}
