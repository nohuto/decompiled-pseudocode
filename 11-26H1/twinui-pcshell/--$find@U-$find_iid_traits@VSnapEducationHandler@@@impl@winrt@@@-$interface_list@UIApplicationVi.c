/*
 * XREFs of ??$find@U?$find_iid_traits@VSnapEducationHandler@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VSnapEducationHandler@@@12@@Z @ 0x180299B38
 * Callers:
 *     ?find_interface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180299B10 (-find_interface@-$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<SnapEducationHandler>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  else
    return 0LL;
}
