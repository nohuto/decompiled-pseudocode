/*
 * XREFs of VfPoolIsInternalFree @ 0x1404C9664
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140C4B3D8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C4C350 (VfCheckForLookaside.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  PVOID *i; // rax

  CurrentThread = KeGetCurrentThread();
  for ( i = &stru_140E27C48.WaitBlock[0].Object; ; i += 8 )
  {
    if ( (__int64)i >= (__int64)&stru_140E27C48.WaitBlockFill11[160] )
      return 0LL;
    if ( CurrentThread == *i )
      break;
  }
  return 1LL;
}
