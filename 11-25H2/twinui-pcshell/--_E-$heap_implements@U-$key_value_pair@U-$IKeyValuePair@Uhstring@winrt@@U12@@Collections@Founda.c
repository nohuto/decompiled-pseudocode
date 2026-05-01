/*
 * XREFs of ??_E?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180225F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1802CBA10 (--1RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs *__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::~RemoteSystemDisplayInfoChangedEventArgs(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
