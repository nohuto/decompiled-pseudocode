/*
 * XREFs of _dynamic_initializer_for__c_bootModeTypeQueryParam__ @ 0x180012500
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800306AC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

int dynamic_initializer_for__c_bootModeTypeQueryParam__()
{
  unsigned int v0; // eax
  unsigned int v1; // edx
  struct winrt::impl::shared_hstring_header *v2; // rbx
  unsigned int v3; // edi

  v0 = std::_WChar_traits<wchar_t>::length(L"bootModeType");
  v2 = 0LL;
  v3 = v0;
  if ( v0 )
  {
    v2 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v0, v1);
    memcpy_s_3((char *)v2 + 28, 2LL * v3, L"bootModeType", 2LL * v3);
  }
  c_bootModeTypeQueryParam = v2;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_bootModeTypeQueryParam__);
}
