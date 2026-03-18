/*
 * XREFs of ?PbmmAddReserveAllocation@@YAXPEAUPBMM_RESERVE_STATE@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x1400514F0
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmAddReserveAllocation(struct PBMM_RESERVE_STATE *a1, struct PBMM_PHYSICAL_ALLOC *a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)((char *)a2 + 24);
  if ( (*((_DWORD *)a2 + 22) & 2) != 0 )
  {
    *v2 = *(_QWORD *)a1;
    *(_QWORD *)a1 = v2;
  }
  else
  {
    *v2 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = v2;
  }
}
