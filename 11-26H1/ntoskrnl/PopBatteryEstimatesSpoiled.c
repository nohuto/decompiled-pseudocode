/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x140B24920
 * Callers:
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x140B24738 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
