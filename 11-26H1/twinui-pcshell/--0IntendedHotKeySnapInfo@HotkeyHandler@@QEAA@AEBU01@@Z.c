/*
 * XREFs of ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x1805AE4A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805AE0EC (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805B01D0 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HotkeyHandler::IntendedHotKeySnapInfo *__fastcall HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
        HotkeyHandler::IntendedHotKeySnapInfo *this,
        const struct HotkeyHandler::IntendedHotKeySnapInfo *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 6);
  return this;
}
