/*
 * XREFs of WerpFreeMem @ 0x1402F4344
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1402F3CA4 (WerKernelSubmitReportForHungProcess.c)
 *     WerpAllocateAndInitializeSid @ 0x1402F4220 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     <none>
 */

void __fastcall WerpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
