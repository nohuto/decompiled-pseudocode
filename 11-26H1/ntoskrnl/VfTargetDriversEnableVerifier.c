/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140C2EFA8
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140645370 (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140C2F64C (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v7, 0);
        v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v7, a1, 1LL);
        if ( v5 )
        {
          *(_QWORD *)(v5 + 64) = VerifiedData;
          v2 = 1;
          ++dword_140F09120;
        }
        VfAvlCleanupLockContext((__int64)&v7);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
