/*
 * XREFs of CcAllocateBitmap @ 0x14039E050
 * Callers:
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcAllocateBitmap(PSLIST_ENTRY *a1)
{
  PSLIST_ENTRY v2; // rax

  ++dword_140E11054;
  v2 = RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
  if ( v2
    || (++dword_140E11058,
        (v2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                              (unsigned int)dword_140E11064,
                              (unsigned int)dword_140E1106C,
                              (unsigned int)dword_140E11068)) != 0LL) )
  {
    *a1 = v2;
    return 0LL;
  }
  else
  {
    ++HIDWORD(EmpParseLock.KernelShadowStackBase);
    return 3221225626LL;
  }
}
