/*
 * XREFs of ?GetRuntimeClassName@?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@EEBA?AUhstring@2@XZ @ 0x1803DC310
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{ac46f07f-3544-48d9-b2d3-f57b388ae361}";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
