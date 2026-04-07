/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800879BC
 * Callers:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087994 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18009359C (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 * Callees:
 *     memcpy_s @ 0x18005C508 (memcpy_s.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800933EC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2, unsigned int a3)
{
  struct winrt::impl::shared_hstring_header *v3; // rdi
  winrt::hstring *result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v3 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)a3, (unsigned int)a2);
    memcpy_s((char *)v3 + 28, 2LL * a3, a2, 2LL * a3);
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
