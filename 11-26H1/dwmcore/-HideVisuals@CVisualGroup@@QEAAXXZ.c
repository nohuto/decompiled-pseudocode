/*
 * XREFs of ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64
 * Callers:
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x18005753C (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801AF150 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?HideVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257830 (-HideVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::HideVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 9);
  while ( v1 != *((CExcludeVisualReference ***)this + 10) )
  {
    if ( (int)CExcludeVisualReference::Hide(*v1) < 0 )
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 72,
                                           &v3,
                                           v1);
    else
      ++v1;
  }
}
