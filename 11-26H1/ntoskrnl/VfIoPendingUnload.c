/*
 * XREFs of VfIoPendingUnload @ 0x140645520
 * Callers:
 *     VfIoPendingEntry @ 0x140645440 (VfIoPendingEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     PpvUtilInit @ 0x140C21144 (PpvUtilInit.c)
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
