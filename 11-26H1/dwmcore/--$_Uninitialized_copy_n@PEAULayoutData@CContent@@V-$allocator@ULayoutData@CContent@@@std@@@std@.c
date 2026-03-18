/*
 * XREFs of ??$_Uninitialized_copy_n@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x18026DD18
 * Callers:
 *     ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18026D904 (--$_Assign_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 *     ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x18026DB18 (--$_Insert_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAULayoutData@CContent@@PEAU12@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0@Z @ 0x18026D9CC (--$_Copy_memmove_n@PEAULayoutData@CContent@@PEAU12@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0@Z.c)
 */

char *__fastcall std::_Uninitialized_copy_n<CContent::LayoutData *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove_n<CContent::LayoutData *,CContent::LayoutData *>(a1, a2, a3);
  return &a3[56 * a2];
}
