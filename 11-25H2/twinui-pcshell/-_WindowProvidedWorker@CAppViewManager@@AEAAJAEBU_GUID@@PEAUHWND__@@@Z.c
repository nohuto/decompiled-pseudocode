/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802FD3F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_20bf49d990f0fb0c2aef87305bcb4f26___1_long_::Invoke @ 0x1802F77B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F77B0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801288A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801288A0.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018B7B8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long___lambda_47284ee12e316a93415fcd6b809ad33f___ @ 0x1802F3E84 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F3E84.c)
 *     _lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_ @ 0x1802F4CFC (_lambda_47284ee12e316a93415fcd6b809ad33f_--__lambda_47284ee12e316a93415fcd6b809ad33f_.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1802FA520 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FB570 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  char v10; // r12
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, const struct _GUID *, _QWORD); // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 *v17; // rax
  volatile int *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-59h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-51h] BYREF
  struct IImmersiveApplicationInternal *v24; // [rsp+40h] [rbp-49h] BYREF
  int v25; // [rsp+48h] [rbp-41h] BYREF
  int v26; // [rsp+4Ch] [rbp-3Dh] BYREF
  CAppViewManager *v27; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+58h] [rbp-31h] BYREF
  __int64 v29[3]; // [rsp+60h] [rbp-29h] BYREF
  char v30; // [rsp+78h] [rbp-11h]
  CAppViewManager *v31; // [rsp+80h] [rbp-9h] BYREF
  char v32; // [rsp+88h] [rbp-1h]
  struct _GUID v33; // [rsp+8Ch] [rbp+3h]
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v29[1] = (__int64)this;
  v29[2] = (__int64)a2;
  v30 = 1;
  CIAMGlobals::AcquireExclusive((__int64)this, &v23);
  v25 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v25);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F6,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    CAppViewManager::_ObliterateOperation(this, a2);
    return v7;
  }
  if ( v25 )
  {
    v26 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 48LL))(
           *((_QWORD *)this + 23),
           a2,
           &v26);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FA,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
      CAppViewManager::_ObliterateOperation(this, a2);
      return v7;
    }
    if ( (v26 & 1) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v10 = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              a2,
              2LL,
              2LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x501,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    v22 = 0LL;
    v12 = *((_QWORD *)this + 23);
    v13 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v12 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    v14 = v13(v12, a2, &v22);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x506,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
      CAppViewManager::_ObliterateOperation(this, a2);
      return v7;
    }
    v24 = 0LL;
    if ( v22 )
    {
      v15 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v22, (__int64 *)&v24);
      v7 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50C,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
        CAppViewManager::_ObliterateOperation(this, a2);
        return v7;
      }
      v16 = CAppViewManager::UnensureApplication(this, a3, v24);
      v7 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50E,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
        CAppViewManager::_ObliterateOperation(this, a2);
        return v7;
      }
    }
    if ( v10 )
    {
      v27 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      v31 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
      v32 = v10;
      v33 = *a2;
      v34 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      v17 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long___lambda_47284ee12e316a93415fcd6b809ad33f___(
              &v28,
              (char *)&v31);
      v19 = *v17;
      v29[0] = *v17;
      *v17 = 0LL;
      v20 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
          v20,
          v18);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v19,
              1LL);
      v7 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x523,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
        lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_((__int64 *)&v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
        CAppViewManager::_ObliterateOperation(this, a2);
        return v7;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
      lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_((__int64 *)&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
  return 0LL;
}
