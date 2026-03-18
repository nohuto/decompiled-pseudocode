/*
 * XREFs of ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180056020
 * Callers:
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800574F0 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801BDC50 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257DC0 (-RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualGroup::RestoreVisuals(CVisualGroup *this)
{
  _QWORD *v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v1 != *((_QWORD **)this + 10) )
  {
    if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1) < 0 )
      v1 = *(_QWORD **)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase((char *)this + 72, &v3, v1);
    else
      ++v1;
  }
}
