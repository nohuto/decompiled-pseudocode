/*
 * XREFs of ??$find@U?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802BE10C
 * Callers:
 *     ?find_interface@?$implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180225480 (-find_interface@-$implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@Deskt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == *(_QWORD *)L"5" && v1[1] == 0x46000000000000C0LL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
