/*
 * XREFs of _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x180112F0C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::Run @ 0x18041A6C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030568 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006F5C0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_18006F5C0.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F664 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F698 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006F764 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x180113200 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x180113294 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_279b59b1da187398d137b7ca9bd87eac_::operator()(__int64 *a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdi
  bool *v3; // r13
  int v4; // ebx
  __int64 *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r8
  void (__fastcall *v8)(__int64, __int64, __int64); // r9
  __int64 v9; // r10
  __int64 *i; // rdi
  const char *v11; // r9
  LPVOID v12; // rbx
  int (__fastcall *v13)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  void (__fastcall *v18)(__int64, __int64); // r9
  __int64 v19; // rcx
  int (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rcx
  LPVOID v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-1C8h] BYREF
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-1C0h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-1A0h]
  _QWORD *v28; // [rsp+60h] [rbp-198h]
  __int64 v29; // [rsp+68h] [rbp-190h]
  void **v30; // [rsp+70h] [rbp-188h] BYREF
  _BYTE v31[272]; // [rsp+78h] [rbp-180h] BYREF
  volatile signed __int32 *v32; // [rsp+188h] [rbp-70h] BYREF
  _BYTE v33[48]; // [rsp+190h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v1 = a1;
  v28 = a1;
  v2 = *a1;
  v3 = (bool *)(*a1 + 32);
  *v3 = *((_DWORD *)a1 + 6) == 1;
  v4 = (unsigned __int8)std::_Atomic_storage<bool,1>::load(v3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v30,
    (__int64)"PdcNotificationCallback");
  v30 = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)&v30,
    v4);
  try
  {
    v26 = 0LL;
    v27 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v2 + 24) + 48LL))(*(_QWORD *)(v2 + 24), &v26);
    v5 = (__int64 *)*((_QWORD *)&v26 + 1);
    for ( i = (__int64 *)v26; i != v5; ++i )
    {
      v6 = *i;
      v29 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = 2 * (unsigned int)(unsigned __int8)std::_Atomic_storage<bool,1>::load(v3);
      v8(v9, v6, v7);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v30, 0);
    if ( (_QWORD)v26 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        v26,
        *((_QWORD *)&v26 + 1));
      std::_Deallocate<16,0>((void *)v26, (const struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x59,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v11);
    v1 = v28;
  }
  ppv = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v12 = ppv;
    v13 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    if ( v13(
           v12,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v24) >= 0 )
    {
      v14 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
      v15 = **v24;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      if ( v15(v14, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v23) >= 0 )
      {
        LOBYTE(v16) = std::_Atomic_storage<bool,1>::load(*v1 + 32LL) ^ 1;
        v18(v17, v16);
      }
    }
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v20)[2])(v20);
  }
  v21 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v30 = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v30);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v33);
  wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  return wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
}
