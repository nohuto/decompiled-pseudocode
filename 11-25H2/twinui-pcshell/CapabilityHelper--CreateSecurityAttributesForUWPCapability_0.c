/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x1806254C4
 * Callers:
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18062B2F8 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x18029C938 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z @ 0x1802C0F10 (-open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802CFB88 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-C.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802CFCC8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalF.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802CFCEC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalF.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180450D78 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_0(__int64 a1)
{
  __int64 v2; // rcx
  const struct HWND__ *v3; // rax
  int v4; // eax
  const char *v5; // r9
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  signed int v12; // eax
  const char *v13; // r9
  int v14; // eax
  void *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  int v22[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v26; // [rsp+48h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  int v28[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v29; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v34[48]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+910h] [rbp+808h]

  v25 = (unsigned __int16 *)a1;
  v32 = 0LL;
  v2 = 0x7FFFLL;
  v3 = &stru_180753818;
  do
  {
    if ( !*(_WORD *)v3 )
      break;
    v3 = (const struct HWND__ *)((char *)v3 + 2);
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x15,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)0xC000000DLL,
      v22[0]);
  LOWORD(v32) = 2 * (0x7FFF - v2);
  WORD1(v32) = v32 + 2;
  *((_QWORD *)&v32 + 1) = &stru_180753818;
  v4 = RtlDeriveCapabilitySidsFromName(&v32, v34, Sid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x1E,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v4,
      v22[0]);
  v25 = 0LL;
  *(_QWORD *)v22 = &v25;
  StringSid = 0LL;
  LOBYTE(v24) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v5);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((__int64)v22);
  v6 = StringCchCopyW((char *)StringSecurityDescriptor, 1024LL, (char *)L"D:AI");
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v6,
      v22[0]);
  v7 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;CI;KA;;;");
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v7,
      v22[0]);
  v8 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)v25);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v8,
      v22[0]);
  v9 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L")");
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v9,
      v22[0]);
  v10 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;");
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v10,
      v22[0]);
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)v22 = v28;
  StringSid = 0LL;
  LOBYTE(v24) = 1;
  v12 = wil::open_current_access_token_nothrow((void **)&StringSid, v11, 0);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v12,
      v22[0]);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)v22);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&Block, *(__int64 *)v28);
  v26 = 0LL;
  *(_QWORD *)v22 = &v26;
  StringSid = 0LL;
  LOBYTE(v24) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)Block, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v13);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((__int64)v22);
  v14 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)v26);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v14,
      v22[0]);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v26);
  v15 = Block;
  Block = 0LL;
  if ( v15 )
    operator delete(v15);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)v28);
  v16 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L")");
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v16,
      v22[0]);
  v17 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;SY)");
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v17,
      v22[0]);
  v18 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KA;;;BA)");
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v18,
      v22[0]);
  v19 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)L"(A;OICIID;KR;;;RC)");
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v19,
      v22[0]);
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_QWORD *)v22 = &v29;
  StringSid = 0LL;
  LOBYTE(v24) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v20);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>((__int64)v22);
  LODWORD(v30) = 24;
  *((_QWORD *)&v30 + 1) = v29;
  *(_QWORD *)a1 = v29;
  v29 = 0LL;
  *(_OWORD *)(a1 + 8) = v30;
  *(_QWORD *)(a1 + 24) = v31;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v29);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v25);
  return a1;
}
