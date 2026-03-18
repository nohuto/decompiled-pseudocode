/*
 * XREFs of ?PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052A58
 * Callers:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 * Callees:
 *     ?PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140052B80 (-PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 *     ?VidMmPbmmSubtractResidentBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0D1C (-VidMmPbmmSubtractResidentBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 */

void __fastcall PbmmDecrementResidentPfns(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 v7; // r11

  *(_DWORD *)(a1 + 68) -= a5;
  *(_QWORD *)(a2 + 32) -= a5;
  v6 = a4;
  --*(_QWORD *)(a2 + 8LL * a4 + 176);
  *(_QWORD *)(a2 + 8 * (a4 + 16LL * a3) + 560) -= a5;
  if ( !PbmmIsPreferredSegment(*(struct _D3DDDI_SEGMENTPREFERENCE *)(a1 + 84), (*(_DWORD *)(a2 + 2864) & 0x1F) + 1) )
  {
    *(_DWORD *)(a1 + 80) -= a5;
    --*(_QWORD *)(v7 + 8 * v6 + 432);
  }
  VidMmPbmmSubtractResidentBytesCB(
    **(struct VIDMM_PHYSICAL_ADAPTER ***)(v7 + 8),
    *(struct VIDMM_PHYSICAL_ALLOC **)(a1 + 48),
    *(_DWORD *)(v7 + 2864) & 0x1F,
    a5);
}
