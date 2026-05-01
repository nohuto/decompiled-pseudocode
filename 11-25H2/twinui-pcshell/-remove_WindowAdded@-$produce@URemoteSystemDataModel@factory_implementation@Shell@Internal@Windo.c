/*
 * XREFs of ?remove_WindowAdded@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18062EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowAdded@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18062D038 (-WindowAdded@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::remove_WindowAdded(
        __int64 a1,
        void *a2)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::WindowAdded(
    (RTL_SRWLOCK *)((a1 - 24) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
