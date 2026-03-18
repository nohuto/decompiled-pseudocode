/*
 * XREFs of VfPoolIsInternalFree @ 0x1404CFC34
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140C453C8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C46340 (VfCheckForLookaside.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  PVOID *i; // rax

  CurrentThread = KeGetCurrentThread();
  for ( i = &stru_140E27B08.WaitBlock[0].Object; ; i += 8 )
  {
    if ( (__int64)i >= (__int64)&stru_140E27B08.WaitBlockFill11[160] )
      return 0LL;
    if ( CurrentThread == *i )
      break;
  }
  return 1LL;
}
