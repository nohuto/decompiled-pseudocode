/*
 * XREFs of ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x18009D250
 * Callers:
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180087240 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x18009D808 (--$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformat.c)
 *     ??1_Reallocation_guard@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA@XZ @ 0x18009E5AC (--1_Reallocation_guard@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowIn.c)
 *     ?_Change_array@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXQEAU_DWMCaptureWindowInformation@@_K1@Z @ 0x1800A4AF0 (-_Change_array@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformatio.c)
 */

char *__fastcall std::vector<_DWMCaptureWindowInformation>::_Emplace_reallocate<_DWMCaptureWindowInformation const &>(
        const char *a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // rsi
  __int128 v16; // xmm1
  char *v17; // r14
  _OWORD *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  _OWORD *v25; // [rsp+40h] [rbp-38h]

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v16 = a3[1];
  v17 = &v13[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v22 = a1;
  v23 = v3;
  v18 = v13;
  v24 = v17;
  *(_OWORD *)v17 = v14;
  *((_OWORD *)v17 + 1) = v16;
  v19 = *((_QWORD *)a1 + 1);
  v20 = *(_QWORD *)a1;
  v25 = v17 + 32;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v20, a2, v13);
    v19 = *((_QWORD *)a1 + 1);
    v18 = v17 + 32;
    v20 = a2;
    v24 = v15;
  }
  std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v20, v19, v18);
  std::vector<_DWMCaptureWindowInformation>::_Change_array(a1, v15, v9, v3, v22, 0LL, v23, v24, v25);
  std::vector<_DWMCaptureWindowInformation>::_Reallocation_guard::~_Reallocation_guard(&v22);
  return v17;
}
