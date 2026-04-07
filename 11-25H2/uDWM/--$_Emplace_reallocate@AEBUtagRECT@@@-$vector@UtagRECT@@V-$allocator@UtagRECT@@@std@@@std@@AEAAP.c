/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800B24AC
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B282C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800C63F8 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095B8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800B2598 (--$_Uninitialized_move@PEAUtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEA.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800B2F1C (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800B2F58 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(const char *a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  const struct std::nothrow_t *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r10
  char *v13; // rax
  char *v14; // rdi
  _OWORD *v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx

  v3 = *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  v11 = v9;
  if ( v9 > v12 )
    std::_Throw_bad_array_new_length();
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(16 * v9, v10);
  v14 = v13;
  v15 = v13;
  v16 = &v13[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  *(_OWORD *)v16 = *a3;
  v17 = *((_QWORD *)a1 + 1);
  v18 = *(_QWORD *)a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<tagRECT *>(v18, a2, v13);
    v17 = *((_QWORD *)a1 + 1);
    v15 = v16 + 16;
    v18 = a2;
  }
  std::_Uninitialized_move<tagRECT *>(v18, v17, v15);
  std::vector<tagRECT>::_Change_array(a1, v14, v8, v11);
  return v16;
}
