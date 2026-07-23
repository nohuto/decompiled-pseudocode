/*
 * XREFs of ViDevObjAdd @ 0x140C368A8
 * Callers:
 *     VerifierIoCreateDevice @ 0x140C365C0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1403C2690 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  _QWORD *v2; // rax
  unsigned __int64 *v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  v1 = 1;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)&v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)&v5, v3);
      VfAvlCleanupLockContext((__int64)&v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
