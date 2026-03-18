/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1802198D4
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E58E4 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18008FFE0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??$construct_at@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@$$QEAU10@@Z @ 0x18016FB8C (--$construct_at@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@std@@YAPEAU-$pair@PEBVCVis.c)
 */

__int64 *__fastcall std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *i; // rdi

  for ( i = a1; i != a2; i += 8 )
  {
    std::construct_at<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
      a3,
      i);
    a3 += 8;
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(a3, a3);
  return a3;
}
