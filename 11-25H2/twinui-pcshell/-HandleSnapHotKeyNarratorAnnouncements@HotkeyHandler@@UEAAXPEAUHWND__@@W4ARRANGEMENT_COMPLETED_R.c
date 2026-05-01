/*
 * XREFs of ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x18058C080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x18058A360 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x18058A4E0 (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x18058AE70 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 *     ?GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z @ 0x18058B0A8 (-GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x18058C414 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z @ 0x18058C5EC (-RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall HotkeyHandler::HandleSnapHotKeyNarratorAnnouncements(HotkeyHandler *a1, HWND a2, int a3)
{
  __int64 v6; // rdi
  unsigned int WindowStateIdForSnapInfo; // edi
  HotkeyHandler::IntendedHotKeySnapInfo *v8; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v11[56]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-1h] BYREF
  int v13; // [rsp+84h] [rbp+1Bh]

  if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)a1 + 54) - *((_QWORD *)a1 + 53)) >> 3) )
  {
    while ( 1 )
    {
      HotkeyHandler::GetAndRemoveIntendedHotKeySnapInfo((__int64)a1, v12, (__int64)a2);
      v6 = v12[0];
      if ( !v12[0] )
        break;
      v10 = v12[0];
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
      if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6) == a2 )
      {
        if ( a3 == 1 )
        {
          v8 = HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
                 (HotkeyHandler::IntendedHotKeySnapInfo *)v11,
                 (const struct HotkeyHandler::IntendedHotKeySnapInfo *)v12);
          WindowStateIdForSnapInfo = HotkeyHandler::GetWindowStateIdForSnapInfo((__int64)a1, (__int64)a2, (__int64)v8);
        }
        else if ( a3 == 2 )
        {
          WindowStateIdForSnapInfo = 15002;
        }
        else
        {
          WindowStateIdForSnapInfo = 15030;
        }
        if ( v13 )
        {
          v9 = HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(
                 (HotkeyHandler::IntendedHotKeySnapInfo *)v11,
                 (const struct HotkeyHandler::IntendedHotKeySnapInfo *)v12);
          HotkeyHandler::RaiseUiaNotificationForMonitorMove(a1, a2, WindowStateIdForSnapInfo, v9);
        }
        else
        {
          HotkeyHandler::RaiseUiaNotificationForWindowArrangement(a1, a2, WindowStateIdForSnapInfo);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v12);
      if ( *((_QWORD *)a1 + 54) == *((_QWORD *)a1 + 53) )
        return;
    }
    HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v12);
  }
}
