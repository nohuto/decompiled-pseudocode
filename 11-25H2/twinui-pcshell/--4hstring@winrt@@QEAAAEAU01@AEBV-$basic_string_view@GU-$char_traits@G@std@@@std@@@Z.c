/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AEB44
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034B670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800AD118 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

volatile signed __int32 **__fastcall winrt::hstring::operator=(volatile signed __int32 **a1, __int64 a2)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rdi
  volatile signed __int32 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  hstring_on_heap = winrt::impl::create_hstring_on_heap(*(winrt::impl **)a2, (winrt::impl *)*(unsigned int *)(a2 + 8));
  v5[0] = (volatile signed __int32 *)hstring_on_heap;
  if ( a1 != v5 )
  {
    v5[0] = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = (volatile signed __int32 *)hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v5);
  return a1;
}
