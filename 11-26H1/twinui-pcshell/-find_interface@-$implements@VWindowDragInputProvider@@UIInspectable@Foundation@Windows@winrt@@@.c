/*
 * XREFs of ?find_interface@?$implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18021EC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USnapMigrationHandler@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapMigrationHandler@@@12@@Z @ 0x18058CF78 (--$find@U-$find_iid_traits@USnapMigrationHandler@@@impl@winrt@@@-$interface_list@UIInspectable@F.c)
 */

__int64 __fastcall winrt::implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<SnapMigrationHandler>>(v3);
}
