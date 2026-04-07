/*
 * XREFs of memmove_0 @ 0x1800E6C7C
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005AAFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     memmove_s @ 0x18005C0E0 (memmove_s.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18006DD44 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$_Copy_memmove_tail@PEAPEAVCVisualProxy@@@std@@YAPEAPEAVCVisualProxy@@QEBDQEAPEAV1@_K2@Z @ 0x18008D540 (--$_Copy_memmove_tail@PEAPEAVCVisualProxy@@@std@@YAPEAPEAVCVisualProxy@@QEBDQEAPEAV1@_K2@Z.c)
 *     ??$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEAU1@00@Z @ 0x18009D040 (--$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
