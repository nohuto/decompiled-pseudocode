/*
 * XREFs of ViRemLockFindSurrogate @ 0x140B829C4
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140B825B0 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B82640 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140B827D0 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140B82840 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v5, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)&v5, v3);
  return v2;
}
