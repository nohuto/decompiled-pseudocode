/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800B2024
 * Callers:
 *     _std::vector_CStoryboard::UnifiedTargetRect_std::allocator_CStoryboard::UnifiedTargetRect___::_Emplace_reallocate_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$1 @ 0x1800E90BF (_std--vector_CStoryboard--UnifiedTargetRect_std--allocator_CStoryboard--UnifiedTarg_ea_1800E90BF.c)
 *     _std::vector_CStoryboard::UnifiedTargetRect_std::allocator_CStoryboard::UnifiedTargetRect___::emplace_back_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$0 @ 0x1800E90D5 (_std--vector_CStoryboard--UnifiedTargetRect_std--allocator_CStoryboard--UnifiedTargetRect___--em.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
