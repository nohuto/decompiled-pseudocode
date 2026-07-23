/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140C2EF1C
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C3F068 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140645370 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x14064E8B0 (DifRemovePerDriverDataForPlugins.c)
 */

__int64 VfTargetDriversDisableVerifier()
{
  __int64 result; // rax
  int v1; // edx
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v6, 0);
    v3 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v6, v2, (unsigned int)(v1 + 1));
    v4 = v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 64);
      if ( v5 )
      {
        DifRemovePerDriverDataForPlugins((_QWORD **)(v5 + 96));
        ViTargetDriversFreeVerifiedData(*(void **)(v4 + 64));
        *(_QWORD *)(v4 + 64) = 0LL;
        --dword_140F09120;
      }
    }
    return VfAvlCleanupLockContext((__int64)&v6);
  }
  return result;
}
