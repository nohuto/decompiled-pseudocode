/*
 * XREFs of ??$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z @ 0x1801A5FDC
 * Callers:
 *     ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x1801A5E18 (--$_Assign_counted_range@PEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator.c)
 *     ??$_Uninitialized_copy_n@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x1801A6014 (--$_Uninitialized_copy_n@PEAUDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 * Callees:
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<DisplayOcclusionRect *,DisplayOcclusionRect *>(void *Src, __int64 a2, void *a3)
{
  __int64 v3; // rbx

  v3 = 176 * a2;
  memmove_0(a3, Src, 176 * a2);
  return (__int64)a3 + v3;
}
