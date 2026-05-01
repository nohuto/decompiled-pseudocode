/*
 * XREFs of _lambda_f6437df0abc95a57934437eecbec2119_::operator() @ 0x18043B048
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___::Run @ 0x18043E240 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x180363940 (_lambda_bf3a05332e284c078092dab55d26056a_--_lambda_bf3a05332e284c078092dab55d26056a_.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7daa69afe7612ad5096998d8e5f054c1___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_7daa69afe7612ad5096998d8e5f054c1___ @ 0x180434E4C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180434E4C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_f6437df0abc95a57934437eecbec2119_::operator()(__int64 **a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int AgileReference; // edi
  __int64 *v5; // rsi
  void (__fastcall *v7)(__int64 *, __int64 *); // rdi
  __int64 *v8; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-48h]
  int v18[2]; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v25; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    v2 = 0LL;
    v24 = 0LL;
    v3 = **a1;
    if ( v3 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      AgileReference = RoGetAgileReference(0LL, &GUID_6723b702_a620_59ad_be1b_dbb8d6f48dd4, v3, &v22);
      v2 = v22;
      v22 = 0LL;
      v25 = 0LL;
      v24 = v2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      if ( AgileReference < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x372,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference,
          v17);
    }
    v23 = 0LL;
    (*(void (__fastcall **)(__int64, RTL_SRWLOCK **))(*(_QWORD *)a1[1][35] + 200LL))(a1[1][35], &v25);
    v5 = a1[1];
    if ( !v5[13] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x378,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v17);
    if ( *((_BYTE *)v5 + 184) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000000ALL,
        v17);
    if ( *((_DWORD *)v5 + 116) != 4 || *((_DWORD *)v5 + 117) != 4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x384,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v17);
    v7 = *(void (__fastcall **)(__int64 *, __int64 *))(*v5 + 216);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v23);
    v7(v5, &v23);
    *((_BYTE *)a1[1] + 184) = 1;
    v8 = a1[1];
    v24 = 0LL;
    v22 = v8[24];
    v8[24] = v2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v25,
      (__int64)a1[1]);
    v9 = lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(
           &v19,
           (__int64)a1[1],
           (__int64 *)&v25);
    v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7daa69afe7612ad5096998d8e5f054c1___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_7daa69afe7612ad5096998d8e5f054c1___(
            &v22,
            v9);
    v12 = *v10;
    *(_QWORD *)v18 = *v10;
    *v10 = 0LL;
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v13,
        v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL))(v23, v12);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v14,
        v18[0]);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3A3,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v15);
    return (unsigned int)v22;
  }
  return result;
}
