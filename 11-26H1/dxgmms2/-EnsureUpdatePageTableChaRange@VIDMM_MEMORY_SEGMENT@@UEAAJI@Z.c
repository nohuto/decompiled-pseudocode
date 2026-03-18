/*
 * XREFs of ?EnsureUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAJI@Z @ 0x140125730
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x14009B818 (-VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_C.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::EnsureUpdatePageTableChaRange(
        struct VIDMM_CPU_HOST_APERTURE **this,
        unsigned int a2)
{
  return VidMmEnsureUpdatePageTableChaData(this[64], a2, (struct VIDMM_UPDATEPAGETABLE_CHA_DATA *)(this + 66));
}
