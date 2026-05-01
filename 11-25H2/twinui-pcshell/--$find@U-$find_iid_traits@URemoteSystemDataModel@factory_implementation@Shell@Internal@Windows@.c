/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIRemoteSystemDataModelStatics@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802B62F4
 * Callers:
 *     ?find_interface@?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802B62D0 (-find_interface@-$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == *(_QWORD *)L"5" && v1[1] == 0x46000000000000C0LL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>
    && v1[1] == 0xD0BBB32F188E6988uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
