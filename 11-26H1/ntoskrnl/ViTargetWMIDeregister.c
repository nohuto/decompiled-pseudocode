/*
 * XREFs of ViTargetWMIDeregister @ 0x140C2F978
 * Callers:
 *     VfTargetWMIRegistrationControl @ 0x140C2F414 (VfTargetWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x140C28028 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  VfAvlInitializeLockContext((__int64)&v8, 0);
  v4 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = *(_QWORD *)(v4 + 64)) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    VfAvlEnumerateNodes(v5, (__int64)&v8, (__int64)ViTargetWMIDeregisterCallback, a1);
  }
  return VfAvlCleanupLockContext((__int64)&v8);
}
