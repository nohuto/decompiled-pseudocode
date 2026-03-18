/*
 * XREFs of IoQueueThreadIrp @ 0x1404F0940
 * Callers:
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1407B4B18 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx

  IopQueueThreadIrp((__int64)Irp, v1);
}
