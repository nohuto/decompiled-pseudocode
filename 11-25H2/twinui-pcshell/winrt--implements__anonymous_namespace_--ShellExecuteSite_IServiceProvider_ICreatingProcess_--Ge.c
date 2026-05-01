/*
 * XREFs of winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::GetRuntimeClassName @ 0x1805D4B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{6d5140c1-7436-11ce-8034-00aa006009fa}";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
