/*
 * XREFs of CmpDecommisssionKcb @ 0x1408C6330
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1408AFB20 (CmpCleanUpKCBCacheTable.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCommitDiscardReplacePost @ 0x140A2F58C (CmpCommitDiscardReplacePost.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140AE0D24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDecommisssionKcb(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
    if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
    v2 = *(void **)(BugCheckParameter2 + 200);
    if ( (unsigned __int64)v2 > 1 )
      ExFreePoolWithTag(v2, 0x624E4D43u);
    v3 = *(_QWORD *)(BugCheckParameter2 + 296);
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
    if ( v3 )
      CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    ExFreeToLookasideListEx(&CmpKcbLookaside, (PVOID)BugCheckParameter2);
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
  }
}
