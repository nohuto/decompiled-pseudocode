/*
 * XREFs of ??$find@U?$find_iid_traits@URegistrationData@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URegistrationData@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18063CB54
 * Callers:
 *     ?find_interface@?$implements@URegistrationData@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180642DF0 (-find_interface@-$implements@URegistrationData@implementation@Shell@Internal@Windows@winrt@@U134.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RegistrationData>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RegistrationData>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRegistrationData> && v1[1] == 0xC1247CA4964CB7A2uLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
