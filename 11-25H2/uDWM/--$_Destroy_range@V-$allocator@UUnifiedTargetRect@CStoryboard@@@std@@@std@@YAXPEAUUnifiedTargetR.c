/*
 * XREFs of ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800C6140
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C619C (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800C6330 (--$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStory.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C6774 (--1CGroupingStoryboard@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((*v3 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 6;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
