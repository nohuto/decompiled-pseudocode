/*
 * XREFs of PnprCompleteWake @ 0x1405DBC4C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140BF1744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF2BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1407B029C (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
