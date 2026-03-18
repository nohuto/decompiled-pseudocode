/*
 * XREFs of ?VidMmPbmmFillMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI@Z @ 0x1400B0960
 * Callers:
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 * Callees:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8AA0 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z.c)
 */

void __fastcall VidMmPbmmFillMemoryCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_GLOBAL_ALLOC **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // rbx
  __int64 v8; // rcx

  v6 = *a2;
  if ( (*((_DWORD *)*a2 + 6) & 4) == 0 && (*((_DWORD *)v6 + 7) & 4) == 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * a5);
    VIDMM_GLOBAL::FillAllocation(
      *((VIDMM_GLOBAL **)a1 + 7),
      v6,
      (unsigned __int64)a3 << 12,
      (unsigned __int64)a4 << 12,
      0,
      (const struct VIDMM_SEGMENT_BASE *)((v8 + 8) & -(__int64)(v8 != 0)),
      a6 << 12);
  }
}
