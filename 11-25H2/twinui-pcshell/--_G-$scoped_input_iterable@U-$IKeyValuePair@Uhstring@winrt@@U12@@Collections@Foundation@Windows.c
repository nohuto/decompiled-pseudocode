/*
 * XREFs of ??_G?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@UEAAPEAXI@Z @ 0x180364550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 *__fastcall winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>::`scalar deleting destructor'(
        volatile signed __int32 *a1,
        char a2)
{
  _InterlockedDecrement(a1 + 2);
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
