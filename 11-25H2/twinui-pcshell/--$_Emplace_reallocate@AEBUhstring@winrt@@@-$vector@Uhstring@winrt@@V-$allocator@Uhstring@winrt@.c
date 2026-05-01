/*
 * XREFs of ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1805F40EC
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1805F4528 (--$emplace@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@.c)
 *     ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805F5FD0 (-Append@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D7794 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Uninitialized_move@PEAUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEAU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180499F40 (--$_Uninitialized_move@PEAUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x18049A2B4 (-_Change_array@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstrin.c)
 */

volatile signed __int32 **__fastcall std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
        volatile signed __int32 ***a1,
        volatile signed __int32 **a2,
        const struct winrt::hstring *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  size_t size_of; // rax
  volatile signed __int32 **v10; // rdi
  volatile signed __int32 **v11; // rsi
  volatile signed __int32 **v12; // rdx
  volatile signed __int32 **v13; // r8
  volatile signed __int32 **v14; // rcx
  volatile signed __int32 **v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v17 = v7 + 1;
  v8 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v10 = (volatile signed __int32 **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = &v10[v6];
  try
  {
    winrt::hstring::hstring((winrt::hstring *)v11, a3);
    v16 = v11;
    v12 = a1[1];
    v13 = v10;
    v14 = *a1;
    if ( a2 != v12 )
    {
      std::_Uninitialized_move<winrt::hstring *>(v14, a2, v10);
      v16 = v10;
      v13 = v11 + 1;
      v12 = a1[1];
      v14 = a2;
    }
    std::_Uninitialized_move<winrt::hstring *>(v14, v12, v13);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v16, v11 + 1);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  std::vector<winrt::hstring>::_Change_array((__int64)a1, (__int64)v10, v17, v8);
  return v11;
}
