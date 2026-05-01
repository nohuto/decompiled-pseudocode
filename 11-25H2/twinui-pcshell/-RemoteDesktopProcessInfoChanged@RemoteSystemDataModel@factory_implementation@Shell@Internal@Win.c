/*
 * XREFs of ?RemoteDesktopProcessInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x18062A578
 * Callers:
 *     ?add_RemoteDesktopProcessInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18062D8A0 (-add_RemoteDesktopProcessInfoChanged@-$produce@URemoteSystemDataModel@factory_implementation@She.c)
 * Callees:
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803C5538 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 *     ??$make_agile_delegate@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x180621184 (--$make_agile_delegate@U-$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt.c)
 */

PVOID *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteDesktopProcessInfoChanged(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    a1 + 34,
    a2,
    (unsigned int *)v5);
  return a2;
}
