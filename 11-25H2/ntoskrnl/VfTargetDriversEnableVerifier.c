/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140B7B384
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B8A588 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140605384 (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B7B9B4 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v8, 0);
        v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, a1, 1LL);
        if ( v5 )
        {
          v5[8] = VerifiedData;
          v2 = 1;
          ++dword_140F04180;
        }
        VfAvlCleanupLockContext((__int64)&v8, v6);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
