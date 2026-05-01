/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800649FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x1802254B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180065740 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  void (__fastcall *v2)(char *, GUID *, __int64 *); // rbx
  __int64 *v3; // rax
  bool v4; // bl
  IUnknown *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 i; // r14
  __int64 v9; // rdi
  unsigned int v10; // ebx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rbx
  void (__fastcall *v14)(void *, __int64 *); // rdi
  int v15; // [rsp+50h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+58h] [rbp+38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+68h] [rbp+48h] BYREF

  v15 = 0;
  v17 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v15 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 4) + 32LL);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
  v2((char *)this + 32, &GUID_00000000_0000_0000_c000_000000000046, v3);
  v4 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut) >= 0;
  v5 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  }
  if ( v4 )
  {
    v15 = 0;
    if ( (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v15) >= 0 )
    {
      if ( v15 )
      {
        v13 = ppvOut;
        v14 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        v14(v13, &v17);
      }
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v17;
  if ( *((_QWORD *)this + 46) != v17 )
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v7 = *((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  for ( i = 0LL; i < *((_QWORD *)this + 53); ++i )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * i);
    v10 = *((_DWORD *)this + 80);
    *(_BYTE *)(v9 + 13) = SHIsSameObject(*(struct IUnknown **)v9, *((struct IUnknown **)this + 46));
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v9, v10);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
