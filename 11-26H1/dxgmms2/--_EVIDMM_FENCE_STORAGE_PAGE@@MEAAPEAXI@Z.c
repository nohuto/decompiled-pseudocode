/*
 * XREFs of ??_EVIDMM_FENCE_STORAGE_PAGE@@MEAAPEAXI@Z @ 0x140003460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_FENCE_STORAGE_PAGE@@MEAA@XZ @ 0x140110B78 (--1VIDMM_FENCE_STORAGE_PAGE@@MEAA@XZ.c)
 */

VIDMM_FENCE_STORAGE_PAGE *__fastcall VIDMM_FENCE_STORAGE_PAGE::`vector deleting destructor'(
        VIDMM_FENCE_STORAGE_PAGE *this,
        char a2)
{
  VIDMM_FENCE_STORAGE_PAGE::~VIDMM_FENCE_STORAGE_PAGE(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
