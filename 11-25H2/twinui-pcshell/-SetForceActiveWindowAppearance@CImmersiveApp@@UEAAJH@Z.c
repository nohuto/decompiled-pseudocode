/*
 * XREFs of ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x180304200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800406A8 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800D6EB8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::SetForceActiveWindowAppearance(CImmersiveApp *this, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v11 = 0LL;
  CIAMGlobals::AcquireExclusive((__int64)this, &v12);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v11, *((_QWORD *)this + 42));
  v4 = v11;
  LOBYTE(v5) = a2 != 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 336LL))(v11, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2660LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v6);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    goto LABEL_9;
  }
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0;
  v6 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         (CImmersiveApp *)((char *)this + 192),
         (struct APPLICATION_VIEW_DATA_UPDATE *)v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2665LL;
    goto LABEL_5;
  }
  CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo((__int64)this + 192, (__int64)v13, 1);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6E,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v9);
  v7 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v7;
}
