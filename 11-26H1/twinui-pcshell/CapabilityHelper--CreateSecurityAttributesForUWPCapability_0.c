/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x18064B254
 * Callers:
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650D00 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800AABD4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800AAD0C (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x180294BF8 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z @ 0x1802B7080 (-open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802C6DDC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-C.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802C6EFC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalF.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802C6F20 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalF.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18045D8CC (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_0(__int64 a1)
{
  __int64 v2; // rcx
  const struct HWND__ *v3; // rax
  const char *v4; // r9
  __int16 v5; // cx
  int v6; // eax
  const char *v7; // r9
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  signed int v14; // eax
  const char *v15; // r9
  int v16; // eax
  void *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  const char *v22; // r9
  int v24[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h]
  unsigned __int16 *v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  int v30[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v31; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v36[48]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+910h] [rbp+808h]

  v27 = (unsigned __int16 *)a1;
  v34 = 0LL;
  v2 = 0x7FFFLL;
  v3 = &stru_18077F0A8;
  do
  {
    if ( !*(_WORD *)v3 )
      break;
    v3 = (const struct HWND__ *)((char *)v3 + 2);
    --v2;
  }
  while ( v2 );
  v4 = v2 == 0 ? (const char *)0xC000000DLL : 0LL;
  if ( v2 )
  {
    v5 = 2 * v2;
    LOWORD(v34) = -2 - v5;
    WORD1(v34) = -v5;
    *((_QWORD *)&v34 + 1) = &stru_18077F0A8;
  }
  if ( (int)v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v4,
      v24[0]);
  v6 = RtlDeriveCapabilitySidsFromName(&v34, v36, Sid);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x1E,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v6,
      v24[0]);
  v27 = 0LL;
  *(_QWORD *)v24 = &v27;
  StringSid = 0LL;
  LOBYTE(v26) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v7);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((__int64)v24);
  v8 = StringCchCopyW((char *)StringSecurityDescriptor, 1024LL, (char *)L"D:AI");
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v8,
      v24[0]);
  v9 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;CI;KA;;;");
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v9,
      v24[0]);
  v10 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)v27);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v10,
      v24[0]);
  v11 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L")");
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v11,
      v24[0]);
  v12 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;");
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v12,
      v24[0]);
  *(_QWORD *)v30 = 0LL;
  *(_QWORD *)v24 = v30;
  StringSid = 0LL;
  LOBYTE(v26) = 1;
  v14 = wil::open_current_access_token_nothrow((void **)&StringSid, v13, 0);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v14,
      v24[0]);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)v24);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&Block, *(__int64 *)v30);
  v28 = 0LL;
  *(_QWORD *)v24 = &v28;
  StringSid = 0LL;
  LOBYTE(v26) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)Block, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v15);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((__int64)v24);
  v16 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)v28);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v16,
      v24[0]);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v28);
  v17 = Block;
  Block = 0LL;
  if ( v17 )
    operator delete(v17);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)v30);
  v18 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L")");
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v18,
      v24[0]);
  v19 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;SY)");
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v19,
      v24[0]);
  v20 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;BA)");
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v20,
      v24[0]);
  v21 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KR;;;RC)");
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v21,
      v24[0]);
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)v24 = &v31;
  StringSid = 0LL;
  LOBYTE(v26) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v22);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>((__int64)v24);
  LODWORD(v32) = 24;
  *((_QWORD *)&v32 + 1) = v31;
  *(_QWORD *)a1 = v31;
  v31 = 0LL;
  *(_OWORD *)(a1 + 8) = v32;
  *(_QWORD *)(a1 + 24) = v33;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v31);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v27);
  return a1;
}
