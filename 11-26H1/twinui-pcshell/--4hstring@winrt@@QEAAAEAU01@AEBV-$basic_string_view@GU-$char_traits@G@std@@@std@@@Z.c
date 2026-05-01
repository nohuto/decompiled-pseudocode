/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18002CAA8
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034F230 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hstring::operator=(
        struct winrt::impl::hstring_header **a1,
        __int64 a2,
        unsigned int a3)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  hstring_on_heap = winrt::impl::create_hstring_on_heap(
                      *(winrt::impl **)a2,
                      (winrt::impl *)*(unsigned int *)(a2 + 8),
                      a3);
  v6[0] = hstring_on_heap;
  if ( a1 != v6 )
  {
    v6[0] = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
  return a1;
}
