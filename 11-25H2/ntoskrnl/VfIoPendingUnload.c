/*
 * XREFs of VfIoPendingUnload @ 0x140606440
 * Callers:
 *     VfIoPendingEntry @ 0x140606370 (VfIoPendingEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     PpvUtilInit @ 0x140B72C60 (PpvUtilInit.c)
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
