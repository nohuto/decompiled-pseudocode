/*
 * XREFs of ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800D9AA4
 * Callers:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800D9FB4 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800DA9B0 (-Append@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResize.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800884DC (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D9D90 (--$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisu.c)
 *     ??$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEBU1234@@Z @ 0x1800D9DD0 (--$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@.c)
 *     ??1_Reallocation_guard@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA@XZ @ 0x1800DA75C (--1_Reallocation_guard@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResi.c)
 *     ?_Change_array@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXQEAUUserResizeVisual@Transitions@Udwm@winrt@@_K1@Z @ 0x1800DCC4C (-_Change_array@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual.c)
 */

char *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  char *v12; // rbp
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx
  _QWORD *v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-48h]
  char *v19; // [rsp+38h] [rbp-40h]
  char *v20; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v17 = a1;
  v18 = v9;
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = &v11[8 * ((a2 - v3) >> 3)];
  v20 = v12 + 8;
  std::construct_at<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
    v12,
    a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v19 = v12;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 8;
    v15 = a2;
    v19 = v11;
  }
  std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v15, v13, v14);
  std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Change_array(a1, v11, v8, v9, v17, 0LL, v18, v19, v20);
  std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Reallocation_guard::~_Reallocation_guard(&v17);
  return v12;
}
