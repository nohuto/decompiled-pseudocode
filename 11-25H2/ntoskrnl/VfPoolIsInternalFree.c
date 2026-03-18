/*
 * XREFs of VfPoolIsInternalFree @ 0x14048D140
 * Callers:
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140B97B1C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140B97CB0 (VfCheckForLookaside.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **i; // rax

  CurrentThread = KeGetCurrentThread();
  for ( i = (struct _KTHREAD **)&unk_140E286E8; ; i += 8 )
  {
    if ( (__int64)i >= (__int64)&ViHalWaitBlockLookaside.L.Tag )
      return 0LL;
    if ( CurrentThread == *i )
      break;
  }
  return 1LL;
}
