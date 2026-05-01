/*
 * XREFs of ??0RemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBUWindowId@UI@45@@Z @ 0x180641EA0
 * Callers:
 *     ??$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBUWindowId@UI@56@@winrt@@YA?A_PAEBUhstring@0@AEBUWindowId@UI@Windows@0@@Z @ 0x180621010 (--$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstri.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs::RemoteSystemWindowAddedEventArgs(
        winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs *this,
        const struct winrt::hstring *a2,
        const struct winrt::Windows::UI::WindowId *a3)
{
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs::`vftable';
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs *)((char *)this + 24),
    a2);
  *((_QWORD *)this + 4) = *(_QWORD *)a3;
  return this;
}
