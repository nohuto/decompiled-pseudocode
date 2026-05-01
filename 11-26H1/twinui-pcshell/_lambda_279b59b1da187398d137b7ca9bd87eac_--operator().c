/*
 * XREFs of _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x180184CAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::Run @ 0x180425370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180069CEC (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180069D20 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180069F34 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069F90 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A048 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x180184FB4 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18028634C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_279b59b1da187398d137b7ca9bd87eac_::operator()(_DWORD *a1)
{
  _DWORD *v1; // r14
  int v2; // ebx
  __int64 *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64, __int64); // r9
  __int64 v7; // r10
  __int64 *i; // rdi
  const char *v9; // r9
  LPVOID v10; // rbx
  int (__fastcall *v11)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(__int64, __int64); // r9
  __int64 v17; // rcx
  int (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  LPVOID v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-1B8h] BYREF
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-1B0h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-190h]
  _DWORD *v26; // [rsp+60h] [rbp-188h]
  __int64 v27; // [rsp+68h] [rbp-180h]
  void **v28; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v29[34]; // [rsp+78h] [rbp-170h] BYREF
  volatile signed __int32 *v30; // [rsp+188h] [rbp-60h] BYREF
  _BYTE v31[48]; // [rsp+190h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v1 = a1;
  v26 = a1;
  *(_BYTE *)(*(_QWORD *)a1 + 32LL) = a1[6] == 1;
  v2 = (unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)a1 + 32LL);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v28,
    (__int64)"PdcNotificationCallback");
  v28 = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)&v28,
    v2);
  try
  {
    v24 = 0LL;
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)v1 + 24LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)v1 + 24LL),
      &v24);
    v3 = (__int64 *)*((_QWORD *)&v24 + 1);
    for ( i = (__int64 *)v24; i != v3; ++i )
    {
      v4 = *i;
      v27 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 2 * (unsigned int)(unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)v1 + 32LL);
      v6(v7, v4, v5);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v28, 0);
    if ( (_QWORD)v24 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        v24,
        *((_QWORD *)&v24 + 1));
      std::_Deallocate<16>(v24, (v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x59,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v9);
    v1 = v26;
  }
  ppv = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v10 = ppv;
    v11 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    if ( v11(
           v10,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v22) >= 0 )
    {
      v12 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
      v13 = **v22;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      if ( v13(v12, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v21) >= 0 )
      {
        LOBYTE(v14) = std::_Atomic_storage<bool,1>::load(*(_QWORD *)v1 + 32LL) ^ 1;
        v16(v15, v14);
      }
    }
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v18)[2])(v18);
  }
  v19 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v28 = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v28);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v31);
  wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v30);
  return wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
}
