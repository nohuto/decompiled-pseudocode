/*
 * XREFs of _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1805EF28C (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7638 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1801F3B78 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$TemporaryLogoFileCreated@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805ED8C8 (--$TemporaryLogoFileCreated@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     std::make_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805EDE04 (std--make_tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--detail.c)
 *     wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805EE270 (wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void_(__cdecl_)(void__.c)
 */

// Hidden C++ exception states: #wind=11
WCHAR *__fastcall anonymous_namespace_::CreateTemporaryFile(WCHAR *a1, __int64 a2)
{
  unsigned int TempPath2W; // eax
  const char *v5; // r9
  unsigned int v6; // edi
  const char *v7; // r9
  HRESULT v8; // eax
  void **v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  const WCHAR *v12; // rcx
  const char *v13; // r9
  const WCHAR *v14; // rax
  DWORD dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  const WCHAR *v17; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v21[4]; // [rsp+B0h] [rbp-50h] BYREF
  char *v22; // [rsp+D0h] [rbp-30h] BYREF
  char *FileW; // [rsp+D8h] [rbp-28h] BYREF
  LPCWSTR lpFileName[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+F8h] [rbp-8h]
  GUID pguid; // [rsp+100h] [rbp+0h] BYREF
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v17 = a1;
  TempPath2W = GetTempPath2W(0LL, 0LL);
  v6 = TempPath2W;
  if ( !TempPath2W )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x24,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v5);
  v22 = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v22,
    0LL,
    TempPath2W);
  if ( !(unsigned int)GetTempPath2W(v6, v22) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x27,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v7);
  pguid = 0LL;
  v8 = CoCreateGuid(&pguid);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8,
      dwCreationDisposition);
  if ( !StringFromGUID2(&pguid, sz, 39) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  v9 = (void **)std::wstring::wstring((__int64)v21, a2);
  v10 = std::operator+<unsigned short>((__int64)v20, sz, v9);
  std::wstring::wstring((__int64)v18, v10);
  FileW = v22;
  v11 = (_QWORD *)std::filesystem::path::path((__int64)v19, (__int64 *)&FileW);
  std::filesystem::operator/(lpFileName, v11, (std::filesystem *)v18);
  std::wstring::_Tidy_deallocate(v19);
  std::wstring::_Tidy_deallocate(v18);
  std::wstring::_Tidy_deallocate(v20);
  std::wstring::_Tidy_deallocate(v21);
  v12 = (const WCHAR *)lpFileName;
  if ( v25 > 7 )
    v12 = lpFileName[0];
  FileW = (char *)CreateFileW(v12, 0, 7u, 0LL, 1u, 0x100u, 0LL);
  if ( (unsigned __int64)(FileW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v13);
  v14 = (const WCHAR *)lpFileName;
  if ( v25 > 7 )
    v14 = lpFileName[0];
  v17 = v14;
  PinManagerTelemetry::TemporaryLogoFileCreated<unsigned short const *>(&v17);
  std::make_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______(
    a1,
    (__int64)lpFileName,
    &FileW);
  wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)&FileW);
  std::wstring::_Tidy_deallocate(lpFileName);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v22);
  return a1;
}
