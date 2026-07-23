/*
 * XREFs of VfTargetWMIRegistrationControl @ 0x140C2F414
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140C463D0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViTargetWMIDeregister @ 0x140C2F978 (ViTargetWMIDeregister.c)
 */

void __fastcall VfTargetWMIRegistrationControl(__int64 a1, int a2, unsigned __int64 a3)
{
  int v5; // edx
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( VfSafeMode || a2 >= 0 )
    return;
  v5 = (a2 & 0x7FFFFFFF) - 1;
  if ( !v5 )
    goto LABEL_7;
  v6 = v5 - 1;
  if ( !v6 )
  {
    ViTargetWMIDeregister(a1, a3);
    return;
  }
  if ( v6 == 1 )
  {
    ViTargetWMIDeregister(a1, a3);
LABEL_7:
    v11 = 0LL;
    v10 = 0LL;
    VfAvlInitializeLockContext((__int64)&v10, 1);
    v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, a3, v7);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 64);
      if ( v9 )
        *(_QWORD *)(v9 + 8) = a1;
    }
    VfAvlCleanupLockContext((__int64)&v10);
  }
}
