/*
 * XREFs of ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18045F210
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x180459CF8 (--$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA-AU-$com_p.c)
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x180467F3C (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 *     ?get@?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ @ 0x1804697C0 (-get@-$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::operator()(
        __int64 a1)
{
  volatile signed __int64 *v1; // [rsp+30h] [rbp+8h] BYREF
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::weak_ref<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::get(a1 + 8, &v1);
  if ( v1 )
  {
    winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
      (__int64 *)&v2,
      v1);
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateOrganizationSetting(v2);
    if ( v2 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v2);
  }
  if ( v1 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v1);
}
