/*
 * XREFs of VfTargetFreeContiguousMemory @ 0x140B7B6EC
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140B907D0 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140B90810 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140B90890 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x140B73C44 (VfAvlEnumerateNodes.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140B7BA68 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B7BC34 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall VfTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  PVOID v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( qword_140F04188 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
    {
      VfAvlInitializeLockContext((__int64)&v8, 0);
      v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, v4, (unsigned int)(v3 + 1));
      if ( !v5 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v5) )
        VfAvlEnumerateNodes(v6, (__int64)&v8);
      VfAvlCleanupLockContext((__int64)&v8, v7);
    }
  }
}
