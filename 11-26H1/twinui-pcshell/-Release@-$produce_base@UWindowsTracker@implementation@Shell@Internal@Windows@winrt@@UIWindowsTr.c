/*
 * XREFs of ?Release@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAIXZ @ 0x18028B700
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18028B754 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker,void>::Release(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(v1);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store((_QWORD *)(v1 + 8));
    v4 = v1;
    winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(&v4);
  }
  return v2;
}
