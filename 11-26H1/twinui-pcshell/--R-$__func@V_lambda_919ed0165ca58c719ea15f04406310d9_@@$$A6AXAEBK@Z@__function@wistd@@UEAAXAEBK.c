/*
 * XREFs of ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18046B660
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x180465F14 (--$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA-AU-$com_p.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180473F38 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 *     ?get@?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ @ 0x1804755A4 (-get@-$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::operator()(
        __int64 a1)
{
  _QWORD *v1; // rbx
  volatile signed __int64 *v2; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v3; // [rsp+38h] [rbp+10h] BYREF

  winrt::weak_ref<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::get(a1 + 8, &v2);
  if ( v2 )
  {
    winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
      (__int64 *)&v3,
      v2);
    v1 = v3;
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(v3);
    if ( v1 )
      winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v3);
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v2);
}
