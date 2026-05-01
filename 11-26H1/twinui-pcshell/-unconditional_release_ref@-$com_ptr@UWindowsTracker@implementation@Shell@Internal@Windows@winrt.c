/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18028B6BC
 * Callers:
 *     ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180215850 (--1-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18065EB90 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18065EF30 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18028B754 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(v1);
  if ( !(_DWORD)result )
  {
    std::_Atomic_storage<unsigned __int64,8>::store((_QWORD *)(v1 + 8));
    v3 = v1;
    return winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(&v3);
  }
  return result;
}
