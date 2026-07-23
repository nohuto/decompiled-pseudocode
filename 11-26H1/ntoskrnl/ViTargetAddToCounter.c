/*
 * XREFs of ViTargetAddToCounter @ 0x140C2F5A8
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C431E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140C45210 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140C45340 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140C45420 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x140C456E0 (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x140C457B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140C458D0 (VerifierMmMapLockedPages.c)
 *     VerifierMmUnlockPages @ 0x140C45B50 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140C45CE0 (VerifierMmUnmapIoSpace.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 */

__int64 __fastcall ViTargetAddToCounter(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rtt
  __int128 v15; // [rsp+28h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  v4 = a3;
  v16 = 0LL;
  v15 = 0LL;
  v6 = (unsigned int)a2;
  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    VfAvlInitializeLockContext((__int64)&v15, 1);
    v10 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v15, v8, v9);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 64);
      if ( v11 )
      {
        v12 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v11), a4);
        do
        {
          v13 = *(_QWORD *)(v4 + v11);
          if ( v13 > v12 )
            break;
          v14 = *(_QWORD *)(v4 + v11);
        }
        while ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + v11), v12, v13) );
      }
    }
    return VfAvlCleanupLockContext((__int64)&v15);
  }
  return result;
}
