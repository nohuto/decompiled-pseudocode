/*
 * XREFs of ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180137584
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1801D525C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801F47B4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18013774C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180169D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

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
    v12 = 0LL;
    v13 = 0LL;
    if ( *((_DWORD *)a2 + 4) == 2
      && (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12),
          v10 = *((_QWORD *)a2 + 1),
          v11 = 2,
          (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v10, &v12, 0LL) >= 0) )
    {
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12);
      v6 = v12;
      v7 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      v7(v6, &v13);
    }
    else if ( *((_DWORD *)a2 + 4) == 3 )
    {
      (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 74) + 56LL))(*((_QWORD *)this + 74));
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      a3,
      *((unsigned int *)a2 + 6));
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
