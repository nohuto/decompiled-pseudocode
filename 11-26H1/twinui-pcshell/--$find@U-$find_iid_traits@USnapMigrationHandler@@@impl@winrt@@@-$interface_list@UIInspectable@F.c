/*
 * XREFs of ??$find@U?$find_iid_traits@USnapMigrationHandler@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapMigrationHandler@@@12@@Z @ 0x18058CF78
 * Callers:
 *     ?find_interface@?$implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18021EC30 (-find_interface@-$implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<SnapMigrationHandler>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
