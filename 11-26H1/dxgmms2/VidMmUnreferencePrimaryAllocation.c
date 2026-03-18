/*
 * XREFs of VidMmUnreferencePrimaryAllocation @ 0x14004D960
 * Callers:
 *     <none>
 * Callees:
 *     ?Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x140017F9C (-Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 *     ?DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ @ 0x14003A0D0 (-DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ.c)
 */

void __fastcall VidMmUnreferencePrimaryAllocation(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int *a5)
{
  VIDMM_GLOBAL_ALLOC_NONPAGED *v5; // rdi

  v5 = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(a3 + 96);
  InterlockedCounterWithHistoryRelease::Decrement((InterlockedCounterWithHistoryRelease *)(a3 + 104), a5);
  if ( a4 )
    VIDMM_GLOBAL_ALLOC_NONPAGED::DecrementPresentReferences(v5);
}
