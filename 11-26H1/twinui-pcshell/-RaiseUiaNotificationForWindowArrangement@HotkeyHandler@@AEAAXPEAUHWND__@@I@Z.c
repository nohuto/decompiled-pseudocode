/*
 * XREFs of ?RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z @ 0x1805B0750
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805B01D0 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054A27C (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1805BF4C8 (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall HotkeyHandler::RaiseUiaNotificationForWindowArrangement(HotkeyHandler *this, HWND a2, unsigned int a3)
{
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, HWND, ApplicationViewHelpers **); // rbx
  unsigned __int16 **v8; // r8
  unsigned __int16 *v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  ApplicationViewHelpers *v13; // [rsp+88h] [rbp+38h] BYREF

  if ( UiaClientsAreListening() )
  {
    v13 = 0LL;
    v6 = *((_QWORD *)this + 7);
    v7 = *(int (__fastcall **)(__int64, HWND, ApplicationViewHelpers **))(*(_QWORD *)v6 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    if ( v7(v6, a2, &v13) >= 0 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
      v10 = -1LL;
      v11 = -1LL;
      if ( (int)ApplicationViewHelpers::GetViewTitle(
                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v13,
                  &v9,
                  v8) >= 0 )
      {
        memset(v12, 0, sizeof(v12));
        if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                    (__int64)v12,
                    &_ImageBase,
                    a3,
                    v9) >= 0 )
          SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification(v12);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  }
}
