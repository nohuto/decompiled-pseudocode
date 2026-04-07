/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800B2674
 * Callers:
 *     _std::_Default_allocator_traits_std::allocator_CStoryboard::UnifiedTargetRect___::construct_CStoryboard::UnifiedTargetRect_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$0 @ 0x1800ED1D7 (_std--_Default_allocator_traits_std--allocator_CStoryboard--UnifiedTargetRect___--construct_CSto.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
