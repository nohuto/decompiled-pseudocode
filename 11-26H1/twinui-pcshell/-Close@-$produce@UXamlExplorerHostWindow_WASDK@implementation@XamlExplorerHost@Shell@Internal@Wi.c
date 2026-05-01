/*
 * XREFs of ?Close@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180451310
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801A7C98 (-Close@-$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@w.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable>::Close(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 32;
  if ( !a1 )
    v1 = 48LL;
  try
  {
    if ( *(_QWORD *)v1 )
    {
      winrt::impl::consume_Windows_Foundation_IClosable<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v1);
      v3 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v1, &v3);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
