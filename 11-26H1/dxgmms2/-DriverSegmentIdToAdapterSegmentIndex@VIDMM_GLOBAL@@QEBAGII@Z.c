/*
 * XREFs of ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAGII@Z @ 0x140041B48
 * Callers:
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x140050228 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS@@@Z @ 0x1400A9078 (-QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(VIDMM_GLOBAL *this, unsigned int a2, int a3)
{
  if ( a3 )
    return (unsigned __int16)(a3 - 1);
  else
    return *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 144LL);
}
