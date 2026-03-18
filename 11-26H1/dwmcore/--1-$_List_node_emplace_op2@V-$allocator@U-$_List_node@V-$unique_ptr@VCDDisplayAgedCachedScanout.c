/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801CB898
 * Callers:
 *     ??$emplace_front@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@1@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x18029A210 (--$emplace_front@PEAVCDDisplayAgedCachedScanout@@@-$list@V-$unique_ptr@VCDDisplayAgedCachedScano.c)
 * Callees:
 *     ??1?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@QEAA@XZ @ 0x180036884 (--1-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedScanout@@@std.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::unique_ptr<CDDisplayAgedCachedScanout>::~unique_ptr<CDDisplayAgedCachedScanout>((CDDisplayCachedScanout **)(v2 + 16));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(a1);
}
