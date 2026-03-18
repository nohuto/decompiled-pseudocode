/*
 * XREFs of ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@ZXZ @ 0x14009E72C
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     <none>
 */

bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *)
{
  bool (__fastcall *result)(const struct VIDMM_PHYSICAL_ALLOC_LEGACY *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 3096LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 160LL) == 1 )
    return VIDMM_SEGMENT::IsMovableResourceCB;
  return result;
}
