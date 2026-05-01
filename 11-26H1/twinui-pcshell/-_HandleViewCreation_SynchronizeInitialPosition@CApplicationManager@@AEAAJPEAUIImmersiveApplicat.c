/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180190B84
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180060540 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x18018E910 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180190EC0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CD768 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v5; // edi
  __int64 v6; // rcx
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(struct IImmersiveApplicationInternal *, __int64 *); // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  DWORD WindowThreadProcessId; // eax
  HWND hWnd; // [rsp+40h] [rbp-20h] BYREF
  DWORD Parameter; // [rsp+48h] [rbp-18h] BYREF
  char v16; // [rsp+4Ch] [rbp-14h]
  HRESULT v17; // [rsp+50h] [rbp-10h]
  void *phNewTimer; // [rsp+58h] [rbp-8h] BYREF
  PSRWLOCK dwProcessId; // [rsp+98h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v5 = v4(a2, &v21);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
    v20 = 0LL;
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    dwProcessId = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v5 = v9(a2, &v20);
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( v5 >= 0 )
    {
      Parameter = GetCurrentThreadId();
      v16 = 0;
      v17 = -2147467259;
      phNewTimer = 0LL;
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&Parameter);
      v17 = CoEnableCallCancellation(0LL);
      if ( v17 >= 0 )
        CreateTimerQueueTimer(&phNewTimer, 0LL, CBaseRPCTimeout::s_Callback, &Parameter, 0x2710u, 0x3E8u, 0);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 176LL))(v20, 1LL);
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&Parameter);
      if ( v16 )
      {
        hWnd = 0LL;
        CIAMGlobals::AcquireShared(v10, &dwProcessId);
        v12 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v20 + 24LL))(v20, &hWnd);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&dwProcessId);
        if ( v12 >= 0 )
        {
          LODWORD(dwProcessId) = 0;
          WindowThreadProcessId = GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
          if ( (_DWORD)dwProcessId )
          {
            if ( WindowThreadProcessId )
              ReportCoreHang(&dwProcessId, 1LL, WindowThreadProcessId);
          }
        }
      }
      if ( v5 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 76) + 88LL))(*((_QWORD *)this + 76), v20);
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&Parameter);
    }
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v5 >= 0 )
      CApplicationManager::UpdateMonitorForAppAsync(this, a2);
  }
  v6 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
