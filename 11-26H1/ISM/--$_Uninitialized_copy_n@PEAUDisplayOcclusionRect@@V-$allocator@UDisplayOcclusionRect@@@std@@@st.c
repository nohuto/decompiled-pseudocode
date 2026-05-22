/*
 * XREFs of ??$_Uninitialized_copy_n@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x1801A6014
 * Callers:
 *     ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x1801A5E18 (--$_Assign_counted_range@PEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z @ 0x1801A5FDC (--$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z.c)
 */

char *__fastcall std::_Uninitialized_copy_n<DisplayOcclusionRect *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove_n<DisplayOcclusionRect *,DisplayOcclusionRect *>(a1, a2, a3);
  return &a3[176 * a2];
}
