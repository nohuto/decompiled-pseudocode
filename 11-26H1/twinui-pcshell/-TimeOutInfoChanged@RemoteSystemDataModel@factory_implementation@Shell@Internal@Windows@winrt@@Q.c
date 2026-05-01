/*
 * XREFs of ?TimeOutInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x180651464
 * Callers:
 *     ?add_TimeOutInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180653320 (-add_TimeOutInfoChanged@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?add@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x1806531F0 (-add@-$event@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::TimeOutInfoChanged(
        __int64 a1,
        __int64 a2)
{
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::add(a1 + 232);
  return a2;
}
