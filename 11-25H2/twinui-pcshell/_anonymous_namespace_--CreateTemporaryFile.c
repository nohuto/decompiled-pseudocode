/*
 * XREFs of _anonymous_namespace_::CreateTemporaryFile @ 0x1805CB05C
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1805CB320 (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180028358 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x18005BD20 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800AFAA4 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED02C (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x18014AD88 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$TemporaryLogoFileCreated@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805C9A8C (--$TemporaryLogoFileCreated@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805CA264 (wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void_(__cdecl_)(void__.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall anonymous_namespace_::CreateTemporaryFile(_QWORD *a1, __int128 *a2)
{
  unsigned int TempPath2W; // eax
  const char *v5; // r9
  unsigned int v6; // ebx
  const char *v7; // r9
  HRESULT v8; // eax
  void **v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  const WCHAR *v12; // rcx
  char *FileW; // rbx
  const char *v14; // r9
  LPCWSTR *v15; // rax
  DWORD dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h]
  void *v20[4]; // [rsp+68h] [rbp-98h] BYREF
  void *v21[4]; // [rsp+88h] [rbp-78h] BYREF
  void *v22[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-30h] BYREF
  LPCWSTR lpFileName[2]; // [rsp+D8h] [rbp-28h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-18h]
  GUID pguid; // [rsp+F8h] [rbp-8h] BYREF
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v23 = (__int64)a1;
  TempPath2W = GetTempPath2W(0LL, 0LL);
  v6 = TempPath2W;
  if ( !TempPath2W )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x24,
      (__int64)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      v5);
  v24 = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v24,
    0LL,
    TempPath2W);
  if ( !(unsigned int)GetTempPath2W(v6, v24) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x27,
      (__int64)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      v7);
  pguid = 0LL;
  v8 = CoCreateGuid(&pguid);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8,
      dwCreationDisposition);
  if ( !StringFromGUID2(&pguid, sz, 39) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  v9 = (void **)std::wstring::wstring((char **)v22, a2);
  v10 = std::operator+<unsigned short>((__int64)v21, (char *)sz, v9);
  v18 = 0LL;
  v19 = 0LL;
  v18 = *(_OWORD *)v10;
  v19 = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 7LL;
  *(_WORD *)v10 = 0;
  v23 = v24;
  v11 = std::filesystem::path::path(v20, &v23);
  std::filesystem::operator/(lpFileName, (__int64)v11, (std::filesystem::path *)&v18);
  std::wstring::_Tidy_deallocate(v20);
  std::wstring::_Tidy_deallocate((void **)&v18);
  std::wstring::_Tidy_deallocate(v21);
  std::wstring::_Tidy_deallocate(v22);
  v12 = (const WCHAR *)lpFileName;
  if ( si128.m128i_i64[1] > 7uLL )
    v12 = lpFileName[0];
  FileW = (char *)CreateFileW(v12, 0, 7u, 0LL, 1u, 0x100u, 0LL);
  v23 = (__int64)FileW;
  if ( (unsigned __int64)(FileW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      v14);
  v15 = lpFileName;
  if ( si128.m128i_i64[1] > 7uLL )
    v15 = (LPCWSTR *)lpFileName[0];
  v23 = (__int64)v15;
  PinManagerTelemetry::TemporaryLogoFileCreated<unsigned short const *>((const WCHAR **)&v23);
  *a1 = FileW;
  v23 = -1LL;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)lpFileName;
  *(__m128i *)(a1 + 3) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpFileName[0]) = 0;
  wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)&v23);
  std::wstring::_Tidy_deallocate((void **)lpFileName);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
  return a1;
}
