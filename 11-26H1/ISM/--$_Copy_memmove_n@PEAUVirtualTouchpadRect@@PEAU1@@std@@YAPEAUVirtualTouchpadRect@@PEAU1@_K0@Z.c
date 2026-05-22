/*
 * XREFs of ??$_Copy_memmove_n@PEAUVirtualTouchpadRect@@PEAU1@@std@@YAPEAUVirtualTouchpadRect@@PEAU1@_K0@Z @ 0x1801A5498
 * Callers:
 *     ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x1801A52E8 (--$_Assign_counted_range@PEAUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@U.c)
 * Callees:
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<VirtualTouchpadRect *,VirtualTouchpadRect *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 24 * a2;
  memmove_0(a3, Src, 24 * a2);
  return (__int64)a3 + v4;
}
