/*
 * XREFs of ?PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140052B80
 * Callers:
 *     ?PbmmAdjustSegmentStatisticsForMerge@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@W4PBMM_PAGE_SIZE@@2@Z @ 0x140052854 (-PbmmAdjustSegmentStatisticsForMerge@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@W4PBMM_PAGE_SIZE@@2@Z.c)
 *     ?PbmmAdjustSegmentStatisticsForSplit@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x14005294C (-PbmmAdjustSegmentStatisticsForSplit@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052A58 (-PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 *     ?PbmmIncrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052AEC (-PbmmIncrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PbmmIsPreferredSegment(struct _D3DDDI_SEGMENTPREFERENCE a1, int a2)
{
  char v2; // al
  UINT v3; // ecx
  int v4; // eax

  v2 = (char)a1.0;
  v3 = (a1.Value >> 6) & 0x1F;
  v4 = v2 & 0x1F;
  return !v4 && !v3 || a2 == v4 || a2 == v3;
}
