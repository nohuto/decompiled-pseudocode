/*
 * XREFs of ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C619C
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800CA280 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095B8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800C6140 (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 *     ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800C6330 (--$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStory.c)
 *     ??$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$_Default_allocator_traits@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@SAXAEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@1@QEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C63B0 (--$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$_Default.c)
 */

char *__fastcall std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        char *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  char *v14; // rax
  char *v15; // rbp
  char *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  char *v19; // r8
  _QWORD *v20; // rcx
  char *result; // rax
  char *v22; // rax

  v7 = ((__int64)a2 - *(_QWORD *)a1) / 48;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4);
  if ( v8 == 0x555555555555555LL )
    std::_Dwm_Xlength_error(a1);
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4);
  v11 = (const struct std::nothrow_t *)(v10 >> 1);
  if ( v10 <= 0x555555555555555LL - (v10 >> 1) )
  {
    v22 = (char *)v11 + v10;
    v12 = v9;
    if ( (unsigned __int64)v22 >= v9 )
      v12 = (unsigned __int64)v22;
    if ( v12 > 0x555555555555555LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v12 = 0x555555555555555LL;
  }
  v13 = 48 * v12;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(48 * v12, v11);
  v15 = &v14[48 * v7];
  v16 = v14;
  std::_Default_allocator_traits<std::allocator<CStoryboard::UnifiedTargetRect>>::construct<CStoryboard::UnifiedTargetRect,enum DWMTRANSITION_TARGET const &,tagRECT const &>(
    v17,
    v15,
    a3,
    a4);
  v18 = (_QWORD *)*((_QWORD *)a1 + 1);
  v19 = v16;
  v20 = *(_QWORD **)a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v20, a2, v16);
    v18 = (_QWORD *)*((_QWORD *)a1 + 1);
    v19 = v15 + 48;
    v20 = a2;
  }
  std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v20, v18, v19);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(*(_QWORD **)a1, *((_QWORD **)a1 + 1));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(16 * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4)));
  }
  *(_QWORD *)a1 = v16;
  result = v15;
  *((_QWORD *)a1 + 1) = &v16[48 * v9];
  *((_QWORD *)a1 + 2) = &v16[v13];
  return result;
}
