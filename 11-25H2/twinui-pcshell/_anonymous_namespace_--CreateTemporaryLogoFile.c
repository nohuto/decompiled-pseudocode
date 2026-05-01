/*
 * XREFs of _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1805CB320
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1805CB8A0 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$TemporaryLogoImageWritten@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805C9AE4 (--$TemporaryLogoImageWritten@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805CA230 (std--tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--details--ha.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805CB05C (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::CreateTemporaryLogoFile(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  LPCWSTR *v19; // rax
  int ppv; // [rsp+20h] [rbp-39h]
  int ppva; // [rsp+20h] [rbp-39h]
  __int128 v23; // [rsp+30h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-9h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1h] BYREF
  LPVOID v27; // [rsp+60h] [rbp+7h] BYREF
  IStream *ppstm; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+70h] [rbp+17h] BYREF
  LPCWSTR pszFile[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)&v23 = L".png";
  *((_QWORD *)&v23 + 1) = 4LL;
  anonymous_namespace_::CreateTemporaryFile(&v29, &v23);
  ppstm = 0LL;
  v4 = (const WCHAR *)pszFile;
  if ( si128.m128i_i64[1] > 7uLL )
    v4 = pszFile[0];
  v5 = SHCreateStreamOnFileW(v4, 0x42u, &ppstm);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v5,
      ppv);
  v27 = 0LL;
  v6 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v27);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v6,
      ppva);
  v26 = 0LL;
  v7 = *(_QWORD *)v27;
  v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v7 + 112))(v27, &v26);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8,
      ppva);
  v9 = (*(__int64 (__fastcall **)(__int64, IStream *))(*(_QWORD *)v26 + 112LL))(v26, ppstm);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v9,
      ppva);
  v25 = 0LL;
  v10 = *(_QWORD *)v27;
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD, __int64 **))(v10 + 64))(
          v27,
          &GUID_ContainerFormatPng,
          0LL,
          &v25);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v11,
      ppva);
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v25 + 24))(v25, v26, 2LL);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v12,
      ppva);
  v24 = 0LL;
  v13 = *v25;
  v24 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v13 + 80))(v25, &v24, 0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v14,
      ppva);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, 0LL);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v15,
      ppva);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 88LL))(v24, a2, 0LL);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x50,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v16,
      ppva);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 96LL))(v24);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v17,
      ppva);
  v18 = (*(__int64 (__fastcall **)(__int64 *))(*v25 + 88))(v25);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x52,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v18,
      ppva);
  v19 = pszFile;
  if ( si128.m128i_i64[1] > 7uLL )
    v19 = (LPCWSTR *)pszFile[0];
  *(_QWORD *)&v23 = v19;
  PinManagerTelemetry::TemporaryLogoImageWritten<unsigned short const *>((const WCHAR **)&v23);
  *(_QWORD *)a1 = v29;
  v29 = -1LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)pszFile;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(pszFile[0]) = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppstm);
  std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______((__int64)&v29);
  return a1;
}
