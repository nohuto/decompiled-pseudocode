/*
 * XREFs of ?GetAlignmentCB@VIDMM_SEGMENT@@SAKPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B6420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::GetAlignmentCB(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *a1)
{
  return *((unsigned int *)a1 + 8);
}
