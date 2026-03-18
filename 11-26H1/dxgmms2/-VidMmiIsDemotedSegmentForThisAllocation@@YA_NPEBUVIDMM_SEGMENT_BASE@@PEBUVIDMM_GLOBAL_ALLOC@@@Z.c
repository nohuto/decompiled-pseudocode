/*
 * XREFs of ?VidMmiIsDemotedSegmentForThisAllocation@@YA_NPEBUVIDMM_SEGMENT_BASE@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E220
 * Callers:
 *     AcquireGpuResources @ 0x1400D2F84 (AcquireGpuResources.c)
 *     UpdateAllocationPriorityCB @ 0x1401227C0 (UpdateAllocationPriorityCB.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiIsDemotedSegmentForThisAllocation(
        const struct VIDMM_SEGMENT_BASE *a1,
        const struct VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = *((unsigned __int8 *)a1 + 62);
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 1) + 96LL);
  return _bittest(&v3, v2) && (*((_DWORD *)a2 + 6) & 0x10) == 0;
}
