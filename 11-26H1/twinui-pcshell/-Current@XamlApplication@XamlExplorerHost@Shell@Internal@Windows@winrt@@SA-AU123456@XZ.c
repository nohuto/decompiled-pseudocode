/*
 * XREFs of ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1801B4D44
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x1801B4C90 (-CreateInstance@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@S.c)
 *     ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x18044CA50 (-CreateInstance2@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@.c)
 *     ?CreateInstance@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804500D0 (-CreateInstance@-$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180596CF0 (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B536C (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180025A54 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180033044 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ??$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1801B4DB0 (--$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnkn.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(_QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v4);
  winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v3,
    v4);
  winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
    (__int64 *)&v3,
    a1);
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v3);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  return a1;
}
