/*
 * XREFs of ViDeadlockKernelVerifierLookasideAllocate @ 0x140C37B20
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ViDeadlockKernelVerifierLookasideAllocate(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  if ( (ViDeadlockState & 2) != 0 )
    return 0LL;
  else
    return ExAllocatePoolWithTag(a1, a2, a3);
}
