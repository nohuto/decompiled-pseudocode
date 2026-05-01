/*
 * XREFs of ?SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802EB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C4534 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetMonitorOverride(CApplicationManager *this, struct IImmersiveMonitor *a2)
{
  HWND v4; // rdx
  PSRWLOCK v5; // rcx
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  CApplicationManager::_IWMFromWindow(
    (CApplicationManager *)((char *)this - 184),
    v4,
    &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
    &v7);
  (*(void (__fastcall **)(void *, __int64, _QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v7 + 24LL))(
    v7,
    1LL,
    *((unsigned int *)this + 194),
    a2);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( a2 )
  {
    LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v5[6], (__int64)a2);
    v5 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  else
  {
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
  }
  ReleaseSRWLockExclusive(v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
