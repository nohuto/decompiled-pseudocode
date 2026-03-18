/*
 * XREFs of ?PbmmFinalizeReserveState@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051920
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     PrepareReservePass @ 0x1400519E8 (PrepareReservePass.c)
 */

void __fastcall PbmmFinalizeReserveState(struct PBMM_ALLOCATOR *a1, struct PBMM_RESERVE_STATE *a2)
{
  PrepareReservePass(a1, a2, 0LL);
}
