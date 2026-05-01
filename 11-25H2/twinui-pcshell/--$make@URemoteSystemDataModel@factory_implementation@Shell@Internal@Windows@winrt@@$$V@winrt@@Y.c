/*
 * XREFs of ??$make@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802CE498
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC8AC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ?DisplayInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@45@@Z @ 0x180625EB8 (-DisplayInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA-AU-$factory_event_rev.c)
 *     ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180636808 (-SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180284A0C (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,>(
        __int64 *a1)
{
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(a1);
  return a1;
}
