/*
 * XREFs of ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801F0B58
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180024570 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180024644 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D8E98 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180169D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180228104 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?AreWindowsFromSameProcess@CApplicationManager@@CA_NPEAUHWND__@@0@Z @ 0x1802E5140 (-AreWindowsFromSameProcess@CApplicationManager@@CA_NPEAUHWND__@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowBecameUnowned(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r14
  BOOL v5; // eax
  int v6; // ecx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( !*((_BYTE *)a2 + 21) || (v5 = IsWindowVisible(*((HWND *)a2 + 1)), v6 = 6, !v5) )
      v6 = 10;
    v7 = *((_QWORD *)a2 + 1);
    v8 = v6;
    v9 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v7);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation2((__int64)this, a2, 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( !*((_QWORD *)this + 131)
      || !GetPropW(*((HWND *)a2 + 1), L"IAM.IsUncloakedXamlIslandPopup")
      || !CApplicationManager::AreWindowsFromSameProcess(*((HWND *)a2 + 1), *((HWND *)this + 131)) )
    {
      CApplicationManager::_HandleWindowCreation(this, a2);
      if ( v4 == 26 )
      {
        v10 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
        v7 = *((_QWORD *)a2 + 1);
        v8 = 3;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v7, &v10, 0LL) >= 0
          && (((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10) & 1) != 0
           || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10) & 8) != 0)
          && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10) & 2) == 0 )
        {
          CApplicationManager::_HandleActivation(this, a2);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      }
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 4) == 3 )
      CApplicationManager::_CloakRogueWindow(this, *((HWND *)a2 + 1));
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation(this, a2);
  }
}
