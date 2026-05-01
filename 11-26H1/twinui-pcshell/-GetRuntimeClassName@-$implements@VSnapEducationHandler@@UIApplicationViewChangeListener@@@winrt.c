/*
 * XREFs of ?GetRuntimeClassName@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18059F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<SnapEducationHandler,IApplicationViewChangeListener>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{727f9e97-76ee-497b-a942-b6371328485c}";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
