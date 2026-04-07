/*
 * XREFs of memmove_0 @ 0x1800EB124
 * Callers:
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180057630 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180062F10 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 *     memmove_s @ 0x18008BBA4 (memmove_s.c)
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1800959C0 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
