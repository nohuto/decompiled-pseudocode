/*
 * XREFs of ?GetRuntimeClassName@?$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805FBE00
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<WindowRegistration,winrt::Windows::Foundation::IClosable>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 28LL;
  v4[0] = L"Windows.Foundation.IClosable";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
