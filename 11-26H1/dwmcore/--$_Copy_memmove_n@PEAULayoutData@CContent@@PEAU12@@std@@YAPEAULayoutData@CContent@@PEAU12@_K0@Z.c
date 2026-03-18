/*
 * XREFs of ??$_Copy_memmove_n@PEAULayoutData@CContent@@PEAU12@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0@Z @ 0x18026D9CC
 * Callers:
 *     ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18026D904 (--$_Assign_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 *     ??$_Uninitialized_copy_n@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x18026DD18 (--$_Uninitialized_copy_n@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 * Callees:
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<CContent::LayoutData *,CContent::LayoutData *>(void *Src, __int64 a2, void *a3)
{
  __int64 v3; // rbx

  v3 = 56 * a2;
  memmove_0(a3, Src, 56 * a2);
  return (__int64)a3 + v3;
}
