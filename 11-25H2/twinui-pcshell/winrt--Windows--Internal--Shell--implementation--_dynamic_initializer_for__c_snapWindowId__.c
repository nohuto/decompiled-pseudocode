/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__ @ 0x1800AE240
 * Callers:
 *     <none>
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800AD1DC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

int winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__()
{
  struct winrt::impl::shared_hstring_header *v0; // rbx

  v0 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)0xD);
  memcpy_s_3((char *)v0 + 28, 0x1AuLL, L"SnapWindow.Id", 0x1AuLL);
  qword_18089A0A0 = (__int64)v0;
  return atexit((void (__cdecl *)())winrt::Windows::Internal::Shell::implementation::_dynamic_atexit_destructor_for__c_snapWindowId__);
}
