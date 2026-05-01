/*
 * XREFs of _wil::MakeOrThrow_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy________&_Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId_&__::_1_::dtor$0 @ 0x1806DEEB3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x18029FE54 (--1-$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__________Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ViewEventArgsForWindowingSettings>::~ComPtr<ViewEventArgsForWindowingSettings>(*(__int64 **)(a2 + 64));
  }
  return result;
}
