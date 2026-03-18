/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18008FFE0
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAXQEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@_K1@Z @ 0x1801B03C4 (-_Change_array@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PE.c)
 *     ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@PEAU12@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@PEAU10@00AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801B72FC (--$_Uninitialized_copy@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@PEAU12@V-$allocator@U.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1802198D4 (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAA@XZ @ 0x180237204 (--1_Reallocation_guard@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 *result; // rax
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = (v3[1] - *v3) >> 4;
      if ( v4 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *v3, v4);
        v3[1] += -16 * v5;
      }
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v3);
      v3 += 8;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
