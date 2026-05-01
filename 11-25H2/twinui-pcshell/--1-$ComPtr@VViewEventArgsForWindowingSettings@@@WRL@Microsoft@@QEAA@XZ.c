/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x1802A6530
 * Callers:
 *     _wil::MakeOrThrow_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy________&_Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId_&__::_1_::dtor$0 @ 0x1806B7AE6 (_wil--MakeOrThrow_ViewEventArgsForWindowingSettings_std--map_wil--com_ptr_t_Windows--Internal--S.c)
 *     _Microsoft::WRL::Details::Make_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy________&_Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId_&__::_1_::dtor$0 @ 0x1806B7B13 (_Microsoft--WRL--Details--Make_ViewEventArgsForWindowingSettings_std--map_wil--com_ptr_t_Windows.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A6560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForWindowingSettings>::~ComPtr<ViewEventArgsForWindowingSettings>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(result);
  }
  return result;
}
