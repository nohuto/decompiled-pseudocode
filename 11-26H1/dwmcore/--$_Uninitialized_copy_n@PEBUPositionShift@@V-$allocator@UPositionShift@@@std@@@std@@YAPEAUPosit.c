/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@AEAV?$allocator@UPositionShift@@@0@@Z @ 0x18021D050
 * Callers:
 *     ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C (--$_Insert_counted_range@PEBUPositionShift@@@-$vector@UPositionShift@@V-$allocator@UPositionShif.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBUPositionShift@@PEAU1@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@@Z @ 0x1801E7510 (--$_Copy_memmove_n@PEBUPositionShift@@PEAU1@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@@Z.c)
 */

char *__fastcall std::_Uninitialized_copy_n<PositionShift const *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove_n<PositionShift const *,PositionShift *>(a1, a2, a3);
  return &a3[12 * a2];
}
