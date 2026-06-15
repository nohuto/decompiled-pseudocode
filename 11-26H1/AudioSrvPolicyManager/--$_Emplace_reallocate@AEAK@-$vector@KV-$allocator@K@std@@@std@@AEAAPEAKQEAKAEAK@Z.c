/*
 * XREFs of ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0
 * Callers:
 *     _lambda_8722efacb6e295def5e1d4fc60f9938c_::operator() @ 0x180005474 (_lambda_8722efacb6e295def5e1d4fc60f9938c_--operator().c)
 *     ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180005E80 (-AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ??$emplace_back@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAAEAKAEAK@Z @ 0x180042FF4 (--$emplace_back@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAAEAKAEAK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x180027C38 (--$_Uninitialized_move@PEAKV-$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV-$allocator@K@0@@Z.c)
 *     ?_Change_array@?$vector@KV?$allocator@K@std@@@std@@AEAAXQEAK_K1@Z @ 0x1800280AC (-_Change_array@-$vector@KV-$allocator@K@std@@@std@@AEAAXQEAK_K1@Z.c)
 *     ?_Calculate_growth@?$vector@KV?$allocator@K@std@@@std@@AEBA_K_K@Z @ 0x180028758 (-_Calculate_growth@-$vector@KV-$allocator@K@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x18002EBBC (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x180037BDC (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

_DWORD *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  _DWORD *v15; // r8
  _DWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  _DWORD *v22; // [rsp+38h] [rbp-40h]
  _DWORD *v23; // [rsp+40h] [rbp-38h]

  v4 = (a2 - *a1) >> 2;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<unsigned long>::_Calculate_growth(a1, v6 + 1);
  v10 = v9;
  if ( v9 > v11 )
    std::_Throw_bad_array_new_length();
  v12 = std::_Allocate<16,std::_Default_allocate_traits>(4 * v9);
  v13 = *a3;
  v14 = v12;
  v20 = a1;
  v15 = (_DWORD *)v12;
  v21 = v10;
  v16 = (_DWORD *)(v12 + 4 * v4);
  *v16 = v13;
  v17 = a1[1];
  v18 = *a1;
  v23 = v16 + 1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<unsigned long *>(v18, a2, v12);
    v17 = a1[1];
    v15 = v16 + 1;
    v18 = a2;
    v22 = (_DWORD *)v14;
  }
  std::_Uninitialized_move<unsigned long *>(v18, v17, v15);
  std::vector<unsigned long>::_Change_array(a1, v14, v8, v10, v20, 0LL, v21, v22, v23);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v16;
}
