/*
 * XREFs of ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x180498FC0
 * Callers:
 *     ??$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Z @ 0x180499320 (--$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@-.c)
 *     ?Append@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x18049A9E0 (-Append@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vecto.c)
 *     ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x1805C5728 (--$emplace@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$allocat.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C5238 (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?_Change_array@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@_K1@Z @ 0x1801E37C4 (-_Change_array@-$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USugges.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180499FE0 (--1_Reallocation_guard@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncActi.c)
 */

__int64 *__fastcall std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Emplace_reallocate<winrt::Windows::Internal::Shell::RegistrationData const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v11; // rax
  __int64 v12; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // rdi
  __int64 *v14; // rsi
  __int64 *v15; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v16; // r8
  __int64 *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  void *v20; // [rsp+38h] [rbp-40h]
  __int64 *v21; // [rsp+40h] [rbp-38h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = v11;
  v19[0] = a1;
  v19[2] = v9;
  v14 = (__int64 *)((char *)v11 + 8 * v5);
  *v14 = v12;
  v21 = v14 + 1;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v14);
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  v20 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v17, a2, v13);
    v15 = a1[1];
    v16 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v14 + 1);
    v17 = a2;
    v20 = v13;
  }
  std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v17, v15, v16);
  v19[1] = 0LL;
  std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Change_array(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1,
    v13,
    v8,
    v9);
  std::vector<winrt::Windows::Foundation::IAsyncAction>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
