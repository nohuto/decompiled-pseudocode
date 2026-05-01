/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1804524F8
 * Callers:
 *     ?find_interface@?$implements@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@78@UIXamlApplication_WASDKStatics@345678@Ustatic_lifetime@8@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180453B60 (-find_interface@-$implements@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>>(
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
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>
    && v1[1] == 0x7FDF46200B0A79B2LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
