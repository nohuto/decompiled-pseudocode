/*
 * XREFs of ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x18022EEE4
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180283C64 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805D0108 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1805D5950 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 *     ??1ApplicationFlyoutView@@QEAA@XZ @ 0x1805D6DC0 (--1ApplicationFlyoutView@@QEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView_::_1_::dtor$1 @ 0x1806D70D1 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureFlyoutV_ea_1806D70D1.c)
 *     _Utils::ProtocolLauncher::TryGetForUriScheme_::_1_::dtor$13 @ 0x1806D7609 (_Utils--ProtocolLauncher--TryGetForUriScheme_--_1_--dtor$13.c)
 *     _std::make_unique_ApplicationFlyoutView_IPrivilegedPresentationOperations___&_IInputHostLayout___&_std::unique_ptr_Utils::ProtocolLauncher_std::default_delete_Utils::ProtocolLauncher____unsigned_short_const___&_0__::_1_::dtor$4 @ 0x1806D771F (_std--make_unique_ApplicationFlyoutView_IPrivilegedPresentationOperations___-_IInpu_ea_1806D771F.c)
 * Callees:
 *     ??R?$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z @ 0x1805CF6E8 (--R-$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Utils::ProtocolLauncher>::operator()();
  return result;
}
