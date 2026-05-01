/*
 * XREFs of ??1HotkeyHandler@@UEAA@XZ @ 0x18058A458
 * Callers:
 *     ??_EHotkeyHandler@@UEAAPEAXI@Z @ 0x18058A660 (--_EHotkeyHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAA@XZ @ 0x18058A3F0 (--1-$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAA@XZ.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x18058A550 (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXXZ @ 0x18058D36C (-_Tidy@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 */

void __fastcall HotkeyHandler::~HotkeyHandler(HotkeyHandler *this)
{
  std::_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>::~_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>((HotkeyHandler *)((char *)this + 448));
  std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Tidy((char *)this + 424);
  CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((HotkeyHandler *)((char *)this + 88));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
