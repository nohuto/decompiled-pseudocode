/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140C28F0C
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3878C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C39058 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404DCB40 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140641790 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x14064ACD0 (DifRemovePerDriverDataForPlugins.c)
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
        --dword_140F08DA0;
      }
    }
    return VfAvlCleanupLockContext((__int64)&v6);
  }
  return result;
}
