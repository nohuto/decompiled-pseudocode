/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1804890DC
 * Callers:
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A170 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18061A0B8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18061A290 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18061B934 (-IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 *     _MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows_::_1_::dtor$0 @ 0x1806C7DC6 (_MultitaskingViewGestureHandler--CreateAndOpenAppThumbnailWindows_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsSupported_::_1_::dtor$0 @ 0x1806DA999 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--IsSupported_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::EnableCloudPC_::_1_::dtor$0 @ 0x1806DA9AB (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--EnableCloudPC_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180489008 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
