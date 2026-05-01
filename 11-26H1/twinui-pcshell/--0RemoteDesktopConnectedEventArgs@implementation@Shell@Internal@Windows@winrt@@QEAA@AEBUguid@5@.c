/*
 * XREFs of ??0RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid@5@@Z @ 0x18066FE40
 * Callers:
 *     ??$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6@@winrt@@YA?A_PAEBUguid@0@@Z @ 0x180656F0C (--$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::RemoteDesktopConnectedEventArgs(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs *this,
        const struct winrt::guid *a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs *result; // rax

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  return result;
}
