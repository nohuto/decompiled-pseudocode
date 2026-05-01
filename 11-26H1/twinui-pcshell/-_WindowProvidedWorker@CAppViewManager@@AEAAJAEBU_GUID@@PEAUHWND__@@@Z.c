/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F8624
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_20bf49d990f0fb0c2aef87305bcb4f26___1_long_::Invoke @ 0x1802F2800 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2800.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181254 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long___lambda_47284ee12e316a93415fcd6b809ad33f___ @ 0x1802EEE64 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802EEE64.c)
 *     _lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_ @ 0x1802EFC14 (_lambda_47284ee12e316a93415fcd6b809ad33f_--__lambda_47284ee12e316a93415fcd6b809ad33f_.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1802F5688 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802F675C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, const struct _GUID *a2, HWND a3)
{
  __m128i v6; // xmm6
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  char v12; // r15
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, const struct _GUID *, _QWORD); // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 *v19; // rax
  volatile int *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-79h] BYREF
  RTL_SRWLOCK *v25; // [rsp+40h] [rbp-71h] BYREF
  struct IImmersiveApplicationInternal *v26; // [rsp+48h] [rbp-69h] BYREF
  int v27; // [rsp+50h] [rbp-61h] BYREF
  int v28; // [rsp+54h] [rbp-5Dh] BYREF
  CAppViewManager *v29; // [rsp+58h] [rbp-59h] BYREF
  __int64 v30; // [rsp+60h] [rbp-51h] BYREF
  __int64 v31[2]; // [rsp+68h] [rbp-49h] BYREF
  __m128i v32; // [rsp+78h] [rbp-39h]
  char v33; // [rsp+88h] [rbp-29h]
  CAppViewManager *v34; // [rsp+90h] [rbp-21h] BYREF
  char v35; // [rsp+98h] [rbp-19h]
  struct _GUID v36; // [rsp+9Ch] [rbp-15h]
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v6 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v31,
                     (__int64)this,
                     (__int64)a2);
  v32 = v6;
  v33 = 1;
  CIAMGlobals::AcquireExclusive(v7, &v25);
  v27 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F6,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    CAppViewManager::_ObliterateOperation(
      (CAppViewManager *)v6.m128i_i64[0],
      (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
    return v9;
  }
  if ( v27 )
  {
    v28 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 48LL))(
            *((_QWORD *)this + 23),
            a2,
            &v28);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FA,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
      CAppViewManager::_ObliterateOperation(
        (CAppViewManager *)v6.m128i_i64[0],
        (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
      return v9;
    }
    if ( (v28 & 1) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              a2,
              2LL,
              2LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x501,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v13);
    }
    v24 = 0LL;
    v14 = *((_QWORD *)this + 23);
    v15 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v14 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v16 = v15(v14, a2, &v24);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x506,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
      CAppViewManager::_ObliterateOperation(
        (CAppViewManager *)v6.m128i_i64[0],
        (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
      return v9;
    }
    v26 = 0LL;
    if ( v24 )
    {
      v17 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v24, (__int64 *)&v26);
      v9 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50C,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
        CAppViewManager::_ObliterateOperation(
          (CAppViewManager *)v6.m128i_i64[0],
          (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
        return v9;
      }
      v18 = CAppViewManager::UnensureApplication(this, a3, v26);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50E,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
        CAppViewManager::_ObliterateOperation(
          (CAppViewManager *)v6.m128i_i64[0],
          (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
        return v9;
      }
    }
    if ( v12 )
    {
      v29 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
      v34 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      v35 = v12;
      v36 = *a2;
      v37 = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      v19 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long___lambda_47284ee12e316a93415fcd6b809ad33f___(
              &v30,
              (__int64)&v34);
      v21 = *v19;
      v31[0] = *v19;
      *v19 = 0LL;
      v22 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
          v22,
          v20);
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v21,
              1LL);
      v9 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x523,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v31);
        lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_((__int64 *)&v34);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
        CAppViewManager::_ObliterateOperation(
          (CAppViewManager *)v6.m128i_i64[0],
          (const struct _GUID *)_mm_srli_si128(v6, 8).m128i_i64[0]);
        return v9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v31);
      lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_((__int64 *)&v34);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
  return 0LL;
}
