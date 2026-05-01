/*
 * XREFs of ??$_Copy_memmove_n@PEAKPEAK@std@@YAPEAKPEAK_K0@Z @ 0x1805FF574
 * Callers:
 *     ??$_Assign_counted_range@PEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAXPEAK_K@Z @ 0x1805FF310 (--$_Assign_counted_range@PEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAXPEAK_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<unsigned long *,unsigned long *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 4 * a2;
  memmove_0(a3, Src, 4 * a2);
  return (__int64)a3 + v4;
}
