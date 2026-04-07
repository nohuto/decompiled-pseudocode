/*
 * XREFs of ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800C63F8
 * Callers:
 *     ??$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$_Default_allocator_traits@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@SAXAEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@1@QEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C63B0 (--$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$_Default.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800CA280 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800B24AC (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 */

char *__fastcall std::vector<tagRECT>::emplace_back<tagRECT const &>(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  __int64 v4; // rdx

  v3 = *(_OWORD **)(a1 + 8);
  if ( v3 == *(_OWORD **)(a1 + 16) )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((const char *)a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 16;
  return (char *)v4;
}
