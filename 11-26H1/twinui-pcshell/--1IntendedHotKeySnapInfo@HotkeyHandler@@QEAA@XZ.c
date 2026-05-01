/*
 * XREFs of ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AE62C
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE0B4 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 *     ?GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z @ 0x1805AF1E4 (-GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805B01D0 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805B0564 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x1805B15F0 (-erase@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 *     _HotkeyHandler::GetWindowStateIdForSnapInfo_::_1_::dtor$0 @ 0x1806F8C9D (_HotkeyHandler--GetWindowStateIdForSnapInfo_--_1_--dtor$0.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$4 @ 0x1806F8CD3 (_HotkeyHandler--HandleHotkey_--_1_--dtor$4.c)
 *     _HotkeyHandler::HandleSnapHotKeyNarratorAnnouncements_::_1_::dtor$0 @ 0x1806F8D09 (_HotkeyHandler--HandleSnapHotKeyNarratorAnnouncements_--_1_--dtor$0.c)
 *     _HotkeyHandler::RaiseUiaNotificationForMonitorMove_::_1_::dtor$0 @ 0x1806F8D1B (_HotkeyHandler--RaiseUiaNotificationForMonitorMove_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo(
        HotkeyHandler::IntendedHotKeySnapInfo *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
