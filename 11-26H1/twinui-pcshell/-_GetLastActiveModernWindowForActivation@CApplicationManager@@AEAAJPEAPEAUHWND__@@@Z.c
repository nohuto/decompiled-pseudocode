/*
 * XREFs of ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802B16BC
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1802334F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18008F7A0 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetLastActiveModernWindowForActivation(CApplicationManager *this, HWND *a2)
{
  int LastActiveModernApp; // ebx
  struct IImmersiveApplicationInternal *v5; // rcx
  struct IImmersiveApplicationInternal *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp(this, &v7);
  if ( LastActiveModernApp >= 0 )
  {
    LastActiveModernApp = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, HWND *))(*(_QWORD *)v7 + 312LL))(
                            v7,
                            0LL,
                            a2);
    if ( LastActiveModernApp == -2147023598 )
      CApplicationManager::_ForgetApplicationNoLock(this, v7, 1u);
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)LastActiveModernApp;
}
