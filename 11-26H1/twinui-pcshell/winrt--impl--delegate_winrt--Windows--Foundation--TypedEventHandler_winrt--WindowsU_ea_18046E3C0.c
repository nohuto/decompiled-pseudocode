/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_4ce12a90e81ea4b4c570078f6f58eac4___::Invoke @ 0x18046E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_4ce12a90e81ea4b4c570078f6f58eac4___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (__fastcall **v4)(char *); // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h]
  void (__fastcall **v10)(char *); // [rsp+58h] [rbp+20h]

  v8 = a2;
  v7 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  v9 = &v7;
  try
  {
    v4 = (void (__fastcall **)(char *))operator new(0x140uLL);
    v10 = v4;
    v4[37] = (void (__fastcall *)(char *))(a1 + 16);
    v4[38] = (void (__fastcall *)(char *))&v8;
    v5 = v7;
    v7 = 0LL;
    v4[39] = (void (__fastcall *)(char *))v5;
    *v4 = lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_;
    *((_DWORD *)v4 + 2) = 65538;
    *((_BYTE *)v4 + 288) = 0;
    lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_((char *)v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
