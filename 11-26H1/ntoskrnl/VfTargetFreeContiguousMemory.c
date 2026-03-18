/*
 * XREFs of VfTargetFreeContiguousMemory @ 0x140C29374
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140C3F5C0 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140C3F600 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140C3F680 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404DCB40 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x140C22018 (VfAvlEnumerateNodes.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140C296F8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C29944 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall VfTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( qword_140F08DA8 )
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
    {
      VfAvlInitializeLockContext((__int64)&v7, 0);
      v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v7, v4, (unsigned int)(v3 + 1));
      if ( !v5 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v5) )
        VfAvlEnumerateNodes(v6, (__int64)&v7, (__int64)ViTargetFreeContiguousMemoryCallback, a2);
      VfAvlCleanupLockContext((__int64)&v7);
    }
  }
}
