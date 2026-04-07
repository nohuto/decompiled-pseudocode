/*
 * XREFs of ?_Change_array@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAXQEAUUnifiedTargetRect@CStoryboard@@_K1@Z @ 0x1800C2FB4
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800BFC6C (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

__int64 __fastcall std::vector<CStoryboard::UnifiedTargetRect>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(v6, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
