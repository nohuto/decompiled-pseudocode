/*
 * XREFs of ??0RemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@0@Z @ 0x18066139C
 * Callers:
 *     ??0?$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@0@Z @ 0x18063E488 (--0-$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@im.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo::RemoteDesktopProviderInfo(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  unsigned int v5; // r8d

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *)((char *)this + 24),
    a2,
    (unsigned int)a3);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *)((char *)this + 32),
    a3,
    v5);
  return this;
}
