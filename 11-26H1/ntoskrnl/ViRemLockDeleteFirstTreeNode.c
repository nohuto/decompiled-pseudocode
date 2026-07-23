/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140C36DA8
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x140C36AC0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140C4B3D8 (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  void *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v0 = 0LL;
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v6, 0);
  v3 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (void *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)&v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)&v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
    VfAvlFreeNodeNoLock((__int64)&ViRemLockAvl, v0);
  return 1LL;
}
