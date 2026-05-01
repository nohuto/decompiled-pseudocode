/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$35 @ 0x180704DC2
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch_35(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a2 + 136), &c_hostSystemId, a3);
  return 0LL;
}
