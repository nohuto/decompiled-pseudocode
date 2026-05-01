/*
 * XREFs of ??0RemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@@Z @ 0x1806678DC
 * Callers:
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180646910 (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs::RemoteSystemStateChangedEventArgs(
        winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs *this,
        const struct winrt::hstring *a2,
        const enum winrt::Windows::Internal::Shell::CloudPCState *a3)
{
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs>::`vftable';
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs *)((char *)this + 24),
    a2,
    (unsigned int)a3);
  *((_DWORD *)this + 8) = *(_DWORD *)a3;
  return this;
}
