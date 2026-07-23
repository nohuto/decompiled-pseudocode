/*
 * XREFs of VfTargetRecoverIoCallbacks @ 0x140645208
 * Callers:
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C3F068 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     VfDifRecoverIoCallbacks @ 0x140644F38 (VfDifRecoverIoCallbacks.c)
 */

__int64 VfTargetRecoverIoCallbacks()
{
  unsigned __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v5, 1);
    v2 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v5, v0, v1);
    v3 = v2;
    if ( v2 )
    {
      VfDifRecoverIoCallbacks(*(_QWORD *)(v2 + 40));
      *(_QWORD *)(v3 + 48) = 0LL;
    }
  }
  return VfAvlCleanupLockContext((__int64)&v5);
}
