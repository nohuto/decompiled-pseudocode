/*
 * XREFs of ?find_interface@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18059F050
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIUpdateViewValueSet@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VSnapWindowProvider@SnapLauncher@@@12@@Z @ 0x18059EADC (--$find@U-$find_iid_traits@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@@-$interface_list@UISe.c)
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 24;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v5[0] = v2;
  v5[1] = (__int64)a2;
  if ( !v3 || a2[1] != 0x52733D00AA0029A2LL )
    return winrt::impl::interface_list<IServiceProvider,IUpdateViewValueSet>::find<winrt::impl::find_iid_traits<SnapLauncher::SnapWindowProvider>>(v5);
  return v2;
}
