/*
 * XREFs of ?add_StateChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1806532D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StateChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x180651074 (-StateChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::add_StateChanged(
        __int64 a1,
        __int64 a2,
        PVOID *a3)
{
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *a3 = *winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::StateChanged(
           (RTL_SRWLOCK *)((a1 - 24) & -(__int64)(a1 != 0)),
           &v4,
           &v5);
  return 0LL;
}
