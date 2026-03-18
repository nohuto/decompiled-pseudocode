/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454
 * Callers:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180056020 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180208D58 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180262E00 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@QEAA@XZ @ 0x1801A351C (--1-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReference@@@std@@@std.c)
 *     ??R?$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z @ 0x1801A353C (--R-$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  _QWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v9 = *i;
    *i = 0LL;
    v10 = *(i - 1);
    *(i - 1) = v9;
    if ( v10 )
      std::default_delete<CExcludeVisualReference>::operator()();
  }
  std::unique_ptr<CExcludeVisualReference>::~unique_ptr<CExcludeVisualReference>(*(_QWORD *)(a1 + 8) - 8LL);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
