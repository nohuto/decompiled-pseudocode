/*
 * XREFs of PnprCompleteWake @ 0x1405DE4FC
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1407B32FC (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
