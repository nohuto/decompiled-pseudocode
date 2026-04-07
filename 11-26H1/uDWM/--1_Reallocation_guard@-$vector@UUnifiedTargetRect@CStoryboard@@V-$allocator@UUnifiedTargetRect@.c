/*
 * XREFs of ??1_Reallocation_guard@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAA@XZ @ 0x1800C04C4
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     _std::vector_CStoryboard::UnifiedTargetRect_std::allocator_CStoryboard::UnifiedTargetRect___::_Emplace_reallocate_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$0 @ 0x1800E90AD (_std--vector_CStoryboard--UnifiedTargetRect_std--allocator_CStoryboard--UnifiedTargetRect___--_E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800BFC6C (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

void __fastcall std::vector<CStoryboard::UnifiedTargetRect>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(*(_QWORD **)(a1 + 24), *(_QWORD **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 48LL * *(_QWORD *)(a1 + 16));
  }
}
