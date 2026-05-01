/*
 * XREFs of ?SystemId@RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667A28
 * Callers:
 *     ?get_SystemId@?$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDisplayInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180667AB0 (-get_SystemId@-$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::SystemId(
        __int64 a1,
        winrt::hstring *a2,
        unsigned int a3)
{
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(a1 + 24), a3);
  return a2;
}
