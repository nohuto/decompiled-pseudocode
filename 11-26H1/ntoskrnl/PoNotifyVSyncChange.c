/*
 * XREFs of PoNotifyVSyncChange @ 0x140394330
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&qword_140F123A0);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&qword_140F123A0);
}
