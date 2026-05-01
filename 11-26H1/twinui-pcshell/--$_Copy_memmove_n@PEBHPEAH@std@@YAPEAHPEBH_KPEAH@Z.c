/*
 * XREFs of ??$_Copy_memmove_n@PEBHPEAH@std@@YAPEAHPEBH_KPEAH@Z @ 0x1802C0F48
 * Callers:
 *     ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x180220F30 (--$_Assign_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXPEBH_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<int const *,int *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 4 * a2;
  memmove_0(a3, Src, 4 * a2);
  return (__int64)a3 + v4;
}
