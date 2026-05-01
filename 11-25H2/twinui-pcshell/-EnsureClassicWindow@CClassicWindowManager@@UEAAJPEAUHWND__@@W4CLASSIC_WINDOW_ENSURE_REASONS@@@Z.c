/*
 * XREFs of ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F1900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180144484 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801F1634 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F10AC (--$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::EnsureClassicWindow(__int64 a1, HWND a2, unsigned int a3, const char *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdx
  BOOL v10; // esi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, HWND, GUID *, GUID *, int *); // rbx
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp-10h] BYREF
  int v15[2]; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF

  v17 = a3;
  if ( !a3 || ((a3 - 1LL) & a3) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8A7,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      a4);
  LODWORD(v14) = (_DWORD)a2;
  CAppManagerTelemetry::EnsureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>((int *)&v14, (int *)&v17);
  CIAMGlobals::AcquireExclusive(v8, &v14);
  v10 = !CApplicationManagerUtility::IsTrayWindowStyleCheck(a2, v9);
  *(_QWORD *)v15 = 0LL;
  if ( (int)CClassicWindowManager::_EnsureMonitorManager((CClassicWindowManager *)(a1 - 88)) >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 184);
    v12 = *(void (__fastcall **)(__int64, HWND, GUID *, GUID *, int *))(*(_QWORD *)v11 + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
    v12(v11, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v15);
  }
  v18 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, HWND, _QWORD, _QWORD, _QWORD, int, unsigned int, char *))(*(_QWORD *)(a1 - 16) + 24LL))(
         a1 - 16,
         a2,
         0LL,
         (unsigned int)(v10 + 1),
         *(_QWORD *)v15,
         1,
         a3,
         &v18)
    || v18 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BE,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      (const char *)0x80004005LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    return 2147500037LL;
  }
}
