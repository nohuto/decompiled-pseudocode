/*
 * XREFs of ??$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@0@Z @ 0x180657F74
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??4?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18065902C (--4-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type.c)
 *     ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18065C430 (-SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 */

void __fastcall std::swap<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,0>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  *a1 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, a2);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a2, &v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
}
