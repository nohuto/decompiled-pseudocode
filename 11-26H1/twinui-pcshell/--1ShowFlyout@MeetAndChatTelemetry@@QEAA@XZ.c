/*
 * XREFs of ??1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F3B94
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1700 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::__lambda_e61605ece55422ba9fa5b55a2642b1df_ @ 0x1805F3850 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--__lambda_e61605ece55422ba9fa5b55a2642b1df_.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6ED0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$2 @ 0x1806FF885 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1806FF885.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805F4798 (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::ShowFlyout::~ShowFlyout(MeetAndChatTelemetry::ShowFlyout *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::ShowFlyout::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
