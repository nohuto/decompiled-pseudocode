/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x140C463D0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetWMIRegistrationControl @ 0x140C2F414 (VfTargetWMIRegistrationControl.c)
 */

__int64 __fastcall VerifierIoWMIRegistrationControl(unsigned __int64 a1, int a2)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfTargetWMIRegistrationControl(a1, a2, retaddr);
  v7 = 0LL;
  v6 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 && a2 >= 0 )
  {
    VfAvlInitializeLockContext((__int64)&v6, 1);
    v4 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v6, a1, 0LL);
    if ( v4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_7;
        case 2:
          _InterlockedAnd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFE);
          break;
        case 3:
LABEL_7:
          _InterlockedOr((volatile signed __int32 *)(v4 + 16), 1u);
          break;
      }
    }
    VfAvlCleanupLockContext((__int64)&v6);
  }
  return guard_dispatch_icall_no_overrides(a1, (unsigned int)a2);
}
