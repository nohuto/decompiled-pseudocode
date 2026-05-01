/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x18020504C
 * Callers:
 *     ?InitializePrivilegedOperations@VoiceAssistantPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180204FB0 (-InitializePrivilegedOperations@VoiceAssistantPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@AccessibilityExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180205000 (-InitializePrivilegedOperations@AccessibilityExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@RetailDemoExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180394F10 (-InitializePrivilegedOperations@RetailDemoExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@CortanaStoreAppExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1803993A0 (-InitializePrivilegedOperations@CortanaStoreAppExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx

  v4 = *a1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *a1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( v4 )
    return 2147500033LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
  v6(a2, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, a3);
  return 0LL;
}
