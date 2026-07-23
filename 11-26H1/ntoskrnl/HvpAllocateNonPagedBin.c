/*
 * XREFs of HvpAllocateNonPagedBin @ 0x140A8F1BC
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     HvpAllocateBin @ 0x140A8F15C (HvpAllocateBin.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall HvpAllocateNonPagedBin(__int64 a1, unsigned int a2, _QWORD *a3)
{
  size_t v3; // rdi
  unsigned int v5; // ebx
  void *IndependentPages; // rax
  void *v7; // rsi

  v3 = a2;
  v5 = 0;
  if ( (unsigned __int8)CmpClaimGlobalQuota(a2) )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(v3, 0xFFFFFFFFLL, 0LL, 0LL);
    v7 = IndependentPages;
    if ( IndependentPages )
    {
      memset_0(IndependentPages, 0, v3);
      *a3 = v7;
    }
    else
    {
      v5 = -1073741670;
      CmpReleaseGlobalQuota(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
