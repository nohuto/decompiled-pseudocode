/*
 * XREFs of ??1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18020FCD0
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180209A34 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x180242E14 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::OnLaunched_::_1_::dtor$1 @ 0x1806DC783 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1806DC783.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall XamlExplorerHostTelemetry::XamlLaunchedOnThread::~XamlLaunchedOnThread(
        XamlExplorerHostTelemetry::XamlLaunchedOnThread *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::XamlLaunchedOnThread::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
