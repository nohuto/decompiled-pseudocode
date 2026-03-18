/*
 * XREFs of ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18026DD48
 * Callers:
 *     ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18026E060 (-GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent.c)
 *     ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027AC80 (-GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 *     ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180289670 (-GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x18026DB18 (--$_Insert_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 */

_QWORD *__fastcall std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
        char **a1,
        _QWORD *a2,
        char *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - *a1) >> 3);
  std::vector<CContent::LayoutData>::_Insert_counted_range<CContent::LayoutData *>(
    a1,
    a3,
    a4,
    0x6DB6DB6DB6DB6DB7LL * ((a5 - a4) >> 3));
  *a2 = &(*a1)[56 * v6];
  return a2;
}
