/*
 * XREFs of ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x180618840
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x180618CD4 (--$emplace@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@.c)
 *     ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x18061A730 (-Append@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEAU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AAE18 (--$_Uninitialized_move@PEAUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ??1_Reallocation_guard@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1804AB360 (--1_Reallocation_guard@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x1804AB430 (-_Change_array@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstrin.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
        volatile signed __int32 ***a1,
        volatile signed __int32 **a2,
        const struct winrt::hstring *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  volatile signed __int32 **v11; // rdi
  winrt::hstring *v12; // rsi
  unsigned int v13; // r8d
  volatile signed __int32 **v14; // rdx
  volatile signed __int32 **v15; // r8
  volatile signed __int32 **v16; // rcx
  volatile signed __int32 ***v18; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 **v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  void *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (volatile signed __int32 **)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = (winrt::hstring *)&v11[v6];
  v18 = a1;
  v19 = v11;
  v20 = v9;
  v22 = (char *)v12 + 8;
  winrt::hstring::hstring(v12, a3, v13);
  v21 = v12;
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<winrt::hstring *>(v16, a2, v11);
    v21 = v11;
    v15 = (volatile signed __int32 **)((char *)v12 + 8);
    v14 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<winrt::hstring *>(v16, v14, v15);
  v19 = 0LL;
  std::vector<winrt::hstring>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  std::vector<winrt::hstring>::_Reallocation_guard::~_Reallocation_guard((__int64)&v18);
  return v12;
}
