/*
 * XREFs of ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B6970
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

bool __fastcall VIDMM_SEGMENT::IsDisplayingResourceCB(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *a1)
{
  return VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)a1 + 368LL));
}
