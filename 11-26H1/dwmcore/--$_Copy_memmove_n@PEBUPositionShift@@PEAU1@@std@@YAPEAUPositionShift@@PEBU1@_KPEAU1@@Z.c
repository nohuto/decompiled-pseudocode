/*
 * XREFs of ??$_Copy_memmove_n@PEBUPositionShift@@PEAU1@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@@Z @ 0x1801E7510
 * Callers:
 *     ??$_Uninitialized_copy_n@PEBUPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@AEAV?$allocator@UPositionShift@@@0@@Z @ 0x18021D050 (--$_Uninitialized_copy_n@PEBUPositionShift@@V-$allocator@UPositionShift@@@std@@@std@@YAPEAUPosit.c)
 * Callees:
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<PositionShift const *,PositionShift *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 12 * a2;
  memmove_0(a3, Src, 12 * a2);
  return (__int64)a3 + v4;
}
