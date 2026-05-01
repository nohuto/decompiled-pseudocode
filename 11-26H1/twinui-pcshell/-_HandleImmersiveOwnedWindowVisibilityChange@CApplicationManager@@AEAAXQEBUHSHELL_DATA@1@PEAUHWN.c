/*
 * XREFs of ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180058724
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18012AC64 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801EA5AC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800588F8 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 131) )
  {
    SetPropW(a3, L"IAM.IsUncloakedXamlIslandPopup", HANDLE_FLAG_INHERIT);
    SetWindowLongPtrW(a3, -8, 0LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                         + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL,
      5LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL);
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
    if ( *((_DWORD *)a2 + 4) == 2
      && (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14),
          v12 = *((_QWORD *)a2 + 1),
          v13 = 2,
          (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v12, &v14, 0LL) >= 0) )
    {
      v6 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 280LL))(v14);
      v7 = v14;
      v8 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v8(v7, &v15);
      v9 = (v6 >> 2) & 1;
    }
    else
    {
      v9 = 0LL;
      if ( *((_DWORD *)a2 + 4) == 3 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 74) + 56LL))(*((_QWORD *)this + 74)) == *((_QWORD *)a2 + 1);
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      a3,
      *((unsigned int *)a2 + 6),
      v15,
      v14,
      v9);
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
}
