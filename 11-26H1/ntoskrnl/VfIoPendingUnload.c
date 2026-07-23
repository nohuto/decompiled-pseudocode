/*
 * XREFs of VfIoPendingUnload @ 0x140649100
 * Callers:
 *     VfIoPendingEntry @ 0x140649020 (VfIoPendingEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PpvUtilInit @ 0x140C27154 (PpvUtilInit.c)
 */

void VfIoPendingUnload()
{
  PpvUtilInit(0LL);
  if ( VfForcedPendingLog )
  {
    ExFreePoolWithTag(VfForcedPendingLog, 0);
    VfForcedPendingLog = 0LL;
  }
}
