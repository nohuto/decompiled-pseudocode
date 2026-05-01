/*
 * XREFs of ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x18058A4E0
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x18058A000 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x18058AE70 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 *     ?GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z @ 0x18058B0A8 (-GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x18058C080 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x18058C414 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x18058D3C8 (-erase@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 *     _HotkeyHandler::GetWindowStateIdForSnapInfo_::_1_::dtor$0 @ 0x1806D04C9 (_HotkeyHandler--GetWindowStateIdForSnapInfo_--_1_--dtor$0.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$4 @ 0x1806D04FF (_HotkeyHandler--HandleHotkey_--_1_--dtor$4.c)
 *     _HotkeyHandler::HandleSnapHotKeyNarratorAnnouncements_::_1_::dtor$0 @ 0x1806D0535 (_HotkeyHandler--HandleSnapHotKeyNarratorAnnouncements_--_1_--dtor$0.c)
 *     _HotkeyHandler::RaiseUiaNotificationForMonitorMove_::_1_::dtor$0 @ 0x1806D0547 (_HotkeyHandler--RaiseUiaNotificationForMonitorMove_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo(
        HotkeyHandler::IntendedHotKeySnapInfo *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
