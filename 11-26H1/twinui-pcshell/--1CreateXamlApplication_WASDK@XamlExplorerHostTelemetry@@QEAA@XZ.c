/*
 * XREFs of ??1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802C4F54
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::XamlApplication_WASDK_::_1_::dtor$4 @ 0x1806D621C (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1806D621C.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlApplication_WASDK::~CreateXamlApplication_WASDK(
        XamlExplorerHostTelemetry::CreateXamlApplication_WASDK *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlApplication_WASDK::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
