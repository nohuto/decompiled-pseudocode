/*
 * XREFs of ?PbmmCancelResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x14005151C
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     CancelResources @ 0x140050F84 (CancelResources.c)
 */

void __fastcall PbmmCancelResources(struct PBMM_ALLOCATOR *a1, __int64 **a2)
{
  __int64 **v2; // rbx
  __int64 v4; // rdi

  v2 = a2;
  v4 = 4LL;
  do
  {
    CancelResources(a1, (__int64)a2, v2++);
    --v4;
  }
  while ( v4 );
}
