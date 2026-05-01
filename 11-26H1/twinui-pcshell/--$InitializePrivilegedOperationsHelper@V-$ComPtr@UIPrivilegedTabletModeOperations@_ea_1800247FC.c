/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x1800247FC
 * Callers:
 *     ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180085F30 (-InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@@Z @ 0x1800248D4 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsof.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v6; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  void (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx

  v6 = *a1 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *a1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v6 = a1[1] - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  v9 = 0;
  if ( v6 )
  {
    v10 = *a1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
    if ( *a1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
      v10 = a1[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
    if ( v10 )
    {
      return (unsigned int)InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>,>(
                             a1,
                             a2,
                             a5);
    }
    else
    {
      v11 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a4);
      v11(a2, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, a4);
    }
    return v9;
  }
  else
  {
    v13 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
    v13(a2, &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd, a3);
    return 0LL;
  }
}
