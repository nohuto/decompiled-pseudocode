/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C
 * Callers:
 *     ??$_Emplace_one_at_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1802C3428 (--$_Emplace_one_at_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@A.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x1804A2AB0 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAAE.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?Append@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180665550 (-Append@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@winr.c)
 *     ?InsertAt@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXIAEBUWindowId@UI@Windows@2@@Z @ 0x180665BFC (-InsertAt@-$vector_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Window.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1801E9AF0 (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@YAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@0@@Z @ 0x18020B030 (--$_Uninitialized_move@PEAU-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@s.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 size_of; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // r8
  char *v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = (__int64)v11;
  v19[0] = a1;
  v14 = v11;
  v19[2] = v9;
  v15 = &v11[8 * v5];
  *(_QWORD *)v15 = v12;
  v16 = a1[1];
  v17 = (void *)*a1;
  v21 = v15 + 8;
  v20 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool> *,std::allocator<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>>(
      v17,
      a2,
      v11);
    v16 = a1[1];
    v14 = v15 + 8;
    v17 = (void *)a2;
    v20 = (char *)v13;
  }
  std::_Uninitialized_move<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool> *,std::allocator<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>>(
    v17,
    v16,
    v14);
  v19[1] = 0LL;
  std::vector<void *>::_Change_array(a1, v13, v8, v9);
  std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v15;
}
