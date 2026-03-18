/*
 * XREFs of ?VidMmiIsSaveableResource@@YA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A37C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B69E0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

bool __fastcall VidMmiIsSaveableResource(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *a1)
{
  return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a1);
}
