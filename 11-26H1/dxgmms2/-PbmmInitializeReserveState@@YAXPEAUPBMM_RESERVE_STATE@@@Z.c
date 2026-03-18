/*
 * XREFs of ?PbmmInitializeReserveState@@YAXPEAUPBMM_RESERVE_STATE@@@Z @ 0x140051938
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmInitializeReserveState(struct PBMM_RESERVE_STATE *a1)
{
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
}
