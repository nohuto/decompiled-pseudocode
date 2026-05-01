/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__ @ 0x18020C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

int winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__()
{
  unsigned int v0; // eax
  winrt::impl *v1; // rcx

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"SnapWindow.Id");
  qword_1808DA798 = (__int64)winrt::impl::create_hstring_on_heap(v1, (winrt::impl *)v0);
  return atexit((void (__cdecl *)())winrt::Windows::Internal::Shell::implementation::_dynamic_atexit_destructor_for__c_snapWindowId__);
}
