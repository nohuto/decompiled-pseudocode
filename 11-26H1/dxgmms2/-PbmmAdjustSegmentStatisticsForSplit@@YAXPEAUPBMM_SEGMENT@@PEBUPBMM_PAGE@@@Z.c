/*
 * XREFs of ?PbmmAdjustSegmentStatisticsForSplit@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x14005294C
 * Callers:
 *     ?PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z @ 0x140053274 (-PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z.c)
 * Callees:
 *     ?PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140052B80 (-PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 */

void __fastcall PbmmAdjustSegmentStatisticsForSplit(struct PBMM_SEGMENT *a1, const struct PBMM_PAGE *a2)
{
  unsigned int v2; // eax
  struct PBMM_SEGMENT *v3; // r8
  __int64 v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r10

  v2 = *((_DWORD *)a2 + 16);
  v3 = a1;
  v5 = (v2 >> 3) & 0xF;
  v6 = (v2 >> 7) & 0xF;
  v7 = (unsigned int)v5;
  v8 = (unsigned int)(v5 - 1);
  if ( (v2 & 7) == 4 )
  {
    --*((_QWORD *)v3 + v5 + 6);
    *((_QWORD *)v3 + (unsigned int)(v5 - 1) + 6) += 2LL;
  }
  v9 = *((_DWORD *)a2 + 16);
  if ( (v9 & 7) >= 2 )
  {
    --*((_QWORD *)v3 + v7 + 22);
    *((_QWORD *)v3 + v8 + 22) += 2LL;
    v10 = (unsigned int)(1 << ((v9 >> 3) & 0xF));
    *((_QWORD *)v3 + 16 * v6 + v7 + 70) -= v10;
    *((_QWORD *)v3 + 16 * v6 + v8 + 70) += v10;
    if ( !PbmmIsPreferredSegment(
            *(struct _D3DDDI_SEGMENTPREFERENCE *)(*((_QWORD *)a2 + 7) + 84LL),
            (*((_DWORD *)v3 + 716) & 0x1F) + 1) )
    {
      --*((_QWORD *)v3 + v7 + 54);
      *((_QWORD *)v3 + v11 + 54) += 2LL;
    }
  }
  ++*((_QWORD *)v3 + v7 + 326);
}
