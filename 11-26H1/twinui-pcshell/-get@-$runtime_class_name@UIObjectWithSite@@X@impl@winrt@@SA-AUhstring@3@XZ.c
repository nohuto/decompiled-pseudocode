/*
 * XREFs of ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1802D9358
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x1802D8E30 (-GetRuntimeClassName@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@S.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<IObjectWithSite,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 38LL;
  v3[0] = L"{fc4801a3-2ba9-11cf-a229-00aa003d7352}";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
