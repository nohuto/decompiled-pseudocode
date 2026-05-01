/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180085F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x1800247FC (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@_ea_1800247FC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::InitializePrivilegedOperations(
        CApplicationManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  PSRWLOCK v6; // rbx
  HRESULT (__stdcall *v7)(IUnknown *, const IID *const, void **); // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  PSRWLOCK v12; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  PSRWLOCK v14; // rbx
  HRESULT (__stdcall *v15)(IUnknown *, const IID *const, void **); // rdi
  PSRWLOCK v16; // rbx
  HRESULT (__stdcall *v17)(IUnknown *, const IID *const, void **); // rdi

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4;
  v5 = 0;
  if ( v4 )
  {
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
      if ( v10 )
      {
        v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1 )
          v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data4;
        if ( v11 )
        {
          return (unsigned int)InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
                                 a2,
                                 a3,
                                 (__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[20],
                                 (__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[21],
                                 (__int64)&CApplicationManagerUtility::g_pIAMGlobals[22]);
        }
        else
        {
          v12 = CApplicationManagerUtility::g_pIAMGlobals + 19;
          QueryInterface = a3->lpVtbl->QueryInterface;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[19]);
          ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))QueryInterface)(
            a3,
            &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
            v12);
        }
      }
      else
      {
        v16 = CApplicationManagerUtility::g_pIAMGlobals + 18;
        v17 = a3->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[18]);
        ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))v17)(
          a3,
          &GUID_3dc37409_1289_4110_adb6_a03083c66a7d,
          v16);
      }
    }
    else
    {
      v14 = CApplicationManagerUtility::g_pIAMGlobals + 17;
      v15 = a3->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[17]);
      ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))v15)(
        a3,
        &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
        v14);
    }
  }
  else
  {
    v6 = CApplicationManagerUtility::g_pIAMGlobals + 16;
    v7 = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&CApplicationManagerUtility::g_pIAMGlobals[16]);
    ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))v7)(a3, &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8, v6);
  }
  return v5;
}
