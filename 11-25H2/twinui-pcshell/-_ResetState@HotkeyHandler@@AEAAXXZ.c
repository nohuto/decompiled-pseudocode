/*
 * XREFs of ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x18058D320
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___::_ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___ @ 0x18058A3CC (wil--details--ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___--_ScopeExitFn__lambda_2a9e.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058D210 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18057DA74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 */

void __fastcall HotkeyHandler::_ResetState(HotkeyHandler *this)
{
  __int64 v2; // r8
  __int64 v3; // r9

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 105) = 0;
  *((_BYTE *)this + 80) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  std::_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>::reset((char *)this + 448);
}
