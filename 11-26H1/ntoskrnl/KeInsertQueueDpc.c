/*
 * XREFs of KeInsertQueueDpc @ 0x1402BDB30
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     PnprQuiesceProcessors @ 0x140BF26B4 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, (__int64)SystemArgument1, (__int64)SystemArgument2, 0LL, 0);
}
