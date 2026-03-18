/*
 * XREFs of ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@PEAU12@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@PEAU10@00AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801B72FC
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E58E4 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18008FFE0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x180090160 (--0-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 */

__int64 *__fastcall std::_Uninitialized_copy<std::pair<CVisual const *,CVisualTreePath const> *,std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // rdi
  signed __int64 v6; // rsi
  signed __int64 v7; // rbp

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)a3 - (char *)a1;
    do
    {
      *v3 = *v5;
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
        (__int64 *)((char *)v5 + v7 + 8),
        (__int128 **)((char *)v5 + v7 + v6 + 8));
      v3 += 8;
      v5 += 8;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v3, v3);
  return v3;
}
