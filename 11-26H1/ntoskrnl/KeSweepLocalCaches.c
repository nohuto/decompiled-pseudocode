/*
 * XREFs of KeSweepLocalCaches @ 0x1404B7D00
 * Callers:
 *     HalpFlushAndWait @ 0x140722F50 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BEDED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
