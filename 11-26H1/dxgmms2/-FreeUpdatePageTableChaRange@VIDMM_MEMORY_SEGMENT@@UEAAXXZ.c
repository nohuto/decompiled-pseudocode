/*
 * XREFs of ?FreeUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAXXZ @ 0x1400BE690
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x1400BC5CC (-VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_C.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeUpdatePageTableChaRange(struct VIDMM_CPU_HOST_APERTURE **this)
{
  VidMmReleaseUpdatePageTableChaData(this[64], (struct VIDMM_UPDATEPAGETABLE_CHA_DATA *)(this + 66));
}
