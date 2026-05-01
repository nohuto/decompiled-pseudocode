/*
 * XREFs of ?get@?$runtime_class_name@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804913CC
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18048FF70 (-GetRuntimeClassName@-$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibi.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<IMultitaskingViewVisibilityNotification,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 38LL;
  v3[0] = L"{c59a7a3c-0676-4526-8192-5d0bf9b89b95}";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
