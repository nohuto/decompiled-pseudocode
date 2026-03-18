/*
 * XREFs of KeIsThreadRunning @ 0x1403F72D0
 * Callers:
 *     KeInsertQueue @ 0x1403F6B50 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F6CA0 (IopPassiveInterruptDpc.c)
 *     KeTryToInsertQueueApc @ 0x1403F7408 (KeTryToInsertQueueApc.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F1610 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
