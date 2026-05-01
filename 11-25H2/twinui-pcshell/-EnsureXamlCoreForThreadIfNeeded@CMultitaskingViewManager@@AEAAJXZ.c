/*
 * XREFs of ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x1801FF5EC
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180187688 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801FF680 (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802BF47C (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded(
        CMultitaskingViewManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rdi
  __int64 *v6; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v5 = (__int64 *)((char *)this + 448);
    if ( !*((_QWORD *)this + 56) )
    {
      *((_BYTE *)this + 472) = 1;
      winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current();
      v6 = (__int64 *)winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread();
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v5, v6);
      if ( v9 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
      if ( v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
      *((_BYTE *)this + 472) = 0;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3AC,
                           (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                           a4);
  }
  return result;
}
