/*
 * XREFs of IoQueueThreadIrp @ 0x1404E9F20
 * Callers:
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1407B7B78 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx

  IopQueueThreadIrp((__int64)Irp, v1);
}
