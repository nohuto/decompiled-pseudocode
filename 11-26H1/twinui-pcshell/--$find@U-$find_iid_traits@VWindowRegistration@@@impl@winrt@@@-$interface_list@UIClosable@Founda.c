/*
 * XREFs of ??$find@U?$find_iid_traits@VWindowRegistration@@@impl@winrt@@@?$interface_list@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VWindowRegistration@@@12@@Z @ 0x1805FB348
 * Callers:
 *     ?find_interface@?$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805FD550 (-find_interface@-$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IClosable>::find<winrt::impl::find_iid_traits<WindowRegistration>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IClosable> && v1[1] == 0x9EA94EAE5BD7BB83uLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
