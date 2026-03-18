/*
 * XREFs of WerpFreeMem @ 0x140059140
 * Callers:
 *     CheckSpaceAvailable @ 0x1400582A4 (CheckSpaceAvailable.c)
 *     WerKernelSubmitReport @ 0x140058738 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x140058EE4 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
