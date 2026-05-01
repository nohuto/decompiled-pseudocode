/*
 * XREFs of ?get_Arguments@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180200190
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>::get_Arguments(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  winrt::impl *v6; // rcx
  struct winrt::impl::hstring_header *v7; // rax
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = a1 + 88;
  if ( !a1 )
    v5 = 136LL;
  v6 = *(winrt::impl **)v5;
  try
  {
    v7 = winrt::impl::duplicate_hstring(v6, (struct winrt::impl::hstring_header *)0x88, a3);
    v9 = 0LL;
    *a2 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v9);
  }
  return result;
}
