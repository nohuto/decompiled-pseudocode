/*
 * XREFs of ?Release@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEAAKXZ @ 0x180615EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1801C8A94 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi

  v1 = (_QWORD *)(a1 + 16);
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(a1 + 16);
  if ( !v2 )
  {
    v1[1] = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v2;
}
