/*
 * XREFs of ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x1804AB1C8
 * Callers:
 *     ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x18062641C (-GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA-AUPropertyDetails@@V-$basic_string@GU-$c.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x18034C160 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@Uhstring@winrt@@@Foundation@Windows.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall winrt::unbox_value_or<winrt::hstring,0>(
        winrt::hstring *this,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *),
        const struct winrt::hstring *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v5 = *a2;
  if ( !*a2 )
    goto LABEL_5;
  v7 = 0LL;
  (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<winrt::hstring>>, &v7);
  if ( !v7 )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
LABEL_5:
    winrt::hstring::hstring(this, a3, (unsigned int)a3);
    return this;
  }
  winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
    &v7,
    (volatile signed __int32 **)this);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return this;
}
