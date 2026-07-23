/*
 * XREFs of CcAllocateBitmap @ 0x14039FDB0
 * Callers:
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcAllocateBitmap(PSLIST_ENTRY *a1)
{
  PSLIST_ENTRY v2; // rax

  ++dword_140E11014;
  v2 = RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
  if ( v2
    || (++dword_140E11018,
        (v2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                              (unsigned int)dword_140E11024,
                              (unsigned int)dword_140E1102C,
                              (unsigned int)dword_140E11028)) != 0LL) )
  {
    *a1 = v2;
    return 0LL;
  }
  else
  {
    ++LODWORD(EmpParseLock.KcsanThread);
    return 3221225626LL;
  }
}
