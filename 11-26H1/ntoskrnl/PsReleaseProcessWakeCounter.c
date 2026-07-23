/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14098F1E0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     EtwpReleaseQueueEntry @ 0x140A8BB28 (EtwpReleaseQueueEntry.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF4534 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140AF465C (PopPowerRequestSpecialRequestClear.c)
 *     PspCloseActivityReference @ 0x140B40050 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
