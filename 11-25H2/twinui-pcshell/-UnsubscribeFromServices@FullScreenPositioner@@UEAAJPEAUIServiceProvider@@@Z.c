/*
 * XREFs of ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D41D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800748E0 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x1802CC4C4 (-EraseAllViews@FullScreenPositioner@@AEAAJXZ.c)
 *     _lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_ @ 0x1802E39BC (_lambda_ab9f828b40129b4f40202efbf92da624_--__lambda_ab9f828b40129b4f40202efbf92da624_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___ @ 0x18032278C (Windows--Internal--ComTaskPool--QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180324B20 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FullScreenPositioner::UnsubscribeFromServices(
        FullScreenPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rcx
  struct IApplicationView *v11; // rdx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  __int64 v14; // rcx
  struct IApplicationView **v15; // rsi
  int (__fastcall ***v16)(FullScreenPositionerHelpers *, GUID *, __int64 *); // rcx
  __int64 v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  __int64 v20; // rdx
  struct IApplicationView *v21; // rbx
  __int64 v22; // rcx
  struct IServiceProvider *v23; // [rsp+30h] [rbp-10h] BYREF
  struct IApplicationView *v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationView *v26; // [rsp+70h] [rbp+30h] BYREF
  struct IServiceProvider *v27; // [rsp+80h] [rbp+40h] BYREF

  if ( *((_DWORD *)this + 72) )
  {
    v26 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v26);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v5);
      v17 = (__int64)v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      return v6;
    }
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v26 + 32LL))(
           v26,
           *((unsigned int *)this + 72));
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE8,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
      v8 = (__int64)v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v6;
    }
    *((_DWORD *)this + 72) = 0;
    v10 = (__int64)v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( *((_DWORD *)this + 73) )
  {
    v26 = 0LL;
    v18 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, struct IApplicationView **))v18)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            &v26);
    v6 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v26 + 32LL))(
              v26,
              *((unsigned int *)this + 73));
      v6 = v19;
      if ( v19 >= 0 )
      {
        *((_DWORD *)this + 73) = 0;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        goto LABEL_10;
      }
      v20 = 240LL;
    }
    else
    {
      v20 = 239LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    return v6;
  }
LABEL_10:
  v11 = (struct IApplicationView *)*((unsigned int *)this + 74);
  if ( (_DWORD)v11 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 104LL))(*((_QWORD *)this + 21));
    *((_DWORD *)this + 74) = 0;
  }
  if ( !*((_DWORD *)this + 75) )
    goto LABEL_16;
  v26 = 0LL;
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))v12)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v26);
  v6 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    return v6;
  }
  (*(void (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v26 + 80LL))(v26, *((unsigned int *)this + 75));
  *((_DWORD *)this + 75) = 0;
  v14 = (__int64)v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_16:
  v15 = (struct IApplicationView **)((char *)this + 192);
  v16 = (int (__fastcall ***)(FullScreenPositionerHelpers *, GUID *, __int64 *))*((_QWORD *)this + 24);
  if ( v16 && !FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(v16, v11) )
  {
    FullScreenPositioner::SetPositionerMonitor(*v15, 0LL);
    v27 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    v26 = *v15;
    v21 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v23 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    v24 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___(v22, &v23);
    lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_(&v23);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  FullScreenPositioner::EraseAllViews((FullScreenPositioner *)((char *)this - 32));
  return 0LL;
}
