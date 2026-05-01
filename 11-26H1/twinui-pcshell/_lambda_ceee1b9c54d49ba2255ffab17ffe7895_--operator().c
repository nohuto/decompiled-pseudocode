/*
 * XREFs of _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x180446590
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___::Run @ 0x1804477C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IReference@_N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@_N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B6F60 (--$As@U-$IReference@_N@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComP.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801F1B5C (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ??$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18020EC70 (--$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // rax
  void (__fastcall ****v7)(_QWORD, GUID *, _QWORD *); // rax
  const char *v8; // r9
  __int64 result; // rax
  int v10[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v17,
         &v12);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC40,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v10[0]);
    v11 = 0LL;
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)a1 + 232LL) == 0;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 136LL))(v12, v3, &v11);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC43,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v10[0]);
    *(_QWORD *)v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<bool>>(&v11, (__int64 *)v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC46,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v10[0]);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)a1 + 280LL) + 152LL))(
                     *(_QWORD *)(*(_QWORD *)a1 + 280LL),
                     &v15);
    v7 = (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 48LL))(
                                                             *v6,
                                                             &v14);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IWindowBehaviorStatics>(
      v7,
      &v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    if ( v13 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 56LL))(
        v13,
        *(unsigned int *)(*(_QWORD *)a1 + 296LL),
        *(_QWORD *)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
