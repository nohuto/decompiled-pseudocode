/*
 * XREFs of VmpVaRangeCheckPinnedGpaRanges @ 0x14063F8DC
 * Callers:
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmpDereferencePinInProgress @ 0x14063E7F4 (VmpDereferencePinInProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaRangeCheckPinnedGpaRanges(__int64 a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)(a1 + 40); i = (__int64 *)*i )
  {
    if ( (i[8] & 1) != 0 )
      return v1;
  }
  v1 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 72) &= ~1u;
  return v1;
}
