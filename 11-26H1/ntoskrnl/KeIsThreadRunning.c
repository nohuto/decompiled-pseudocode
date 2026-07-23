/*
 * XREFs of KeIsThreadRunning @ 0x1403F0C80
 * Callers:
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
