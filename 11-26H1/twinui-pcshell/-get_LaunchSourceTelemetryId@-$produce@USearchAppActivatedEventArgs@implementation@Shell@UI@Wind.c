/*
 * XREFs of ?get_LaunchSourceTelemetryId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180207F20
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>::get_LaunchSourceTelemetryId(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  struct winrt::impl::hstring_header *v6; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = a1 + 64;
  if ( !a1 )
    v5 = 80LL;
  v6 = winrt::impl::duplicate_hstring(*(winrt::impl **)v5, (struct winrt::impl::hstring_header *)0x50, a3);
  v8 = 0LL;
  *a2 = v6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  return 0LL;
}
