/*
 * XREFs of ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F3BC0
 * Callers:
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805F14E4 (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::__lambda_724db070561b64a1d673c65688c83bb1_ @ 0x1805F3820 (_lambda_724db070561b64a1d673c65688c83bb1_--__lambda_724db070561b64a1d673c65688c83bb1_.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 *     __lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress____::_1_::dtor$0 @ 0x1806FF298 (__lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--_ea_1806FF298.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FF4EF (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805F4798 (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall(
        MeetAndChatTelemetry::UserInitiatedInstall *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
