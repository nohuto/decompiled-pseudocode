/*
 * XREFs of KeSweepLocalCaches @ 0x1404B1530
 * Callers:
 *     HalpFlushAndWait @ 0x140727B20 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BF3ED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
