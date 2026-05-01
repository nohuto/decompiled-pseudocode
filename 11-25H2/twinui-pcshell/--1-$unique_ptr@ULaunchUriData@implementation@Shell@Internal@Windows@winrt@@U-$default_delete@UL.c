/*
 * XREFs of ??1?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1806243FC
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180629EF8 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess_::_1_::dtor$1 @ 0x1806DAFF3 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1806DAFF3.c)
 * Callees:
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CE1F0 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>(
        volatile signed __int32 ***a1)
{
  volatile signed __int32 **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
