/*
 * XREFs of ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1801D525C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180024570 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180024644 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x18008921C (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008AD3C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180137584 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180169D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleWindowBecameOwned(
        CApplicationManager *this,
        HWND a2,
        const struct CApplicationManager::HSHELL_DATA *const a3)
{
  __int64 v6; // r12
  int v7; // eax
  HWND *v8; // rdi
  int v9; // ecx
  int v10; // r15d
  BOOL v11; // eax
  void *v12; // rbx
  void (__fastcall *v13)(void *, IUnknown *, HWND *, HWND *); // rdi
  HWND v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  struct IImmersiveMonitor *v16; // [rsp+40h] [rbp-20h] BYREF
  HWND v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  IUnknown *punk; // [rsp+A0h] [rbp+40h] BYREF
  void *ppv; // [rsp+A8h] [rbp+48h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 1 )
  {
    v8 = (HWND *)((char *)a3 + 8);
    if ( !*((_BYTE *)a3 + 21) || (v11 = IsWindowVisible(*v8), v9 = 5, !v11) )
      v9 = 9;
    v14 = *v8;
    v15 = v9;
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v14);
    if ( v10 == 1 )
      CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        this,
        (__int64)*v8,
        *v8,
        1,
        *((_DWORD *)a3 + 6));
    if ( v6 == 25 )
    {
      CApplicationManager::_HandleActivation2((__int64)this, a3, 3);
    }
    else if ( !v10 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, (__int64)*v8, 3, v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  }
  else if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v6 == 25 )
      CApplicationManager::_HandleActivation(this, a3);
    else
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a3, a2);
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    v14 = a2;
    v15 = 1;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                (__int64)this,
                (__int64 *)&v14,
                &punk,
                0LL) >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      if ( IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
      {
        v14 = 0LL;
        v12 = ppv;
        v13 = *(void (__fastcall **)(void *, IUnknown *, HWND *, HWND *))(*(_QWORD *)ppv + 56LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        v17 = a2;
        v18 = 0LL;
        v19 = 0;
        v13(v12, punk, &v17, &v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  }
  else
  {
    CApplicationManager::_HandleActivation(this, a3);
  }
}
