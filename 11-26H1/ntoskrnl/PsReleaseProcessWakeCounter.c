/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1409BE200
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     EtwpReleaseQueueEntry @ 0x140A86BA8 (EtwpReleaseQueueEntry.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF1C64 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140AF1D8C (PopPowerRequestSpecialRequestClear.c)
 *     PspCloseActivityReference @ 0x140B3DF70 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
