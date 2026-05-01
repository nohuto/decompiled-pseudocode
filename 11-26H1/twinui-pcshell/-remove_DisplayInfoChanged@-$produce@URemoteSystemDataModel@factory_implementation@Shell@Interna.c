/*
 * XREFs of ?remove_DisplayInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180654970
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18064BD24 (-DisplayInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win_ea_18064BD24.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::remove_DisplayInfoChanged(
        __int64 a1,
        void *a2)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::DisplayInfoChanged(
    (RTL_SRWLOCK *)((a1 - 24) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
