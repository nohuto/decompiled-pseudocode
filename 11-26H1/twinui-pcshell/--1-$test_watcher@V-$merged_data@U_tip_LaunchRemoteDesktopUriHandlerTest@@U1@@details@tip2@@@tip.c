/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063B72C
 * Callers:
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B8D0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$0 @ 0x180703445 (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_180703445.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063B690 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_re.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
