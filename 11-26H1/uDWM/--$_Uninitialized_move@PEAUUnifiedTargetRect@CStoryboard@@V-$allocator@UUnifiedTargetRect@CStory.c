/*
 * XREFs of ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800BFED8
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800BFC6C (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // r9
  char *v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 4;
    v6 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *(_DWORD *)v3 = *((_DWORD *)v5 - 8);
      v3 += 6;
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 28) = *(_OWORD *)((char *)v5 - 28);
      v7 = v5[1];
      v5[1] = 0LL;
      v8 = *v5;
      *v5 = 0LL;
      v9 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 8) = v9;
      *(_QWORD *)((char *)v5 + (_QWORD)v6) = v8;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 + 8) = v7;
      v5 += 6;
    }
    while ( v5 - 4 != a2 );
  }
  std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(v3, v3);
  return v3;
}
