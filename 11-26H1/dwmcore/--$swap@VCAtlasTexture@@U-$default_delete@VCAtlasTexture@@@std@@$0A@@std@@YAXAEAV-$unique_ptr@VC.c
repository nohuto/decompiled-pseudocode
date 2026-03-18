/*
 * XREFs of ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x18021EFE4
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAV23@@Z @ 0x18025AD30 (-ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV-$unique_ptr@VCDrawListBrush@@U-$d.c)
 *     ??$iter_swap@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@0@0@Z @ 0x18029603C (--$iter_swap@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$unique_ptr@VCCheckMPOCache@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CCheckMPOCache>::swap(a1, a2);
}
