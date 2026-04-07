/*
 * XREFs of ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x18009D4C0
 * Callers:
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x18009DE14 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18008C7C8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D7C0 (--$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTER.c)
 *     ??$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@$$QEAU12@@Z @ 0x18009D974 (--$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDO.c)
 *     ??1_Reallocation_guard@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA@XZ @ 0x18009E570 (--1_Reallocation_guard@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_.c)
 *     ?_Change_array@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAXQEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@_K1@Z @ 0x1800A4A74 (-_Change_array@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED.c)
 */

char *__fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20[0] = a1;
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v20[2] = v3;
  v15 = v13;
  v22 = v14 + 16;
  std::construct_at<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(v14, a3);
  v16 = *((_QWORD *)a1 + 1);
  v17 = v15;
  v18 = *(_QWORD *)a1;
  v21 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(v18, a2, v15);
    v16 = *((_QWORD *)a1 + 1);
    v17 = v14 + 16;
    v18 = a2;
    v21 = v15;
  }
  std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(v18, v16, v17);
  v20[1] = 0LL;
  std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Change_array(a1, v15, v9, v3);
  std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v14;
}
