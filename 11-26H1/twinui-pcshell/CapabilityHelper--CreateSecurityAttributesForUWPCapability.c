/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800A9BD4
 * Callers:
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x1800A965C (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800AABD4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800AAD0C (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x180294BF8 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180294C50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z @ 0x1802B7080 (-open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803BD790 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18045D8CC (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability(_QWORD *a1)
{
  __int64 v2; // rcx
  const struct HWND__ *v3; // rax
  const char *v4; // r9
  __int16 v5; // cx
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  WCHAR *v9; // rcx
  WCHAR v10; // ax
  WCHAR *v11; // rax
  __int64 v12; // rdx
  WCHAR *v13; // rax
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rcx
  WCHAR *v18; // rdx
  __int64 v19; // rax
  char *v20; // r8
  WCHAR v21; // r9
  WCHAR *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  WCHAR *v25; // rax
  __int64 v26; // r8
  const char *v27; // r9
  __int64 v28; // rcx
  WCHAR *v29; // rdx
  __int64 v30; // rax
  char *v31; // r8
  WCHAR v32; // r9
  WCHAR *v33; // rax
  __int64 v34; // rdx
  WCHAR *v35; // rax
  __int64 v36; // r8
  const char *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  char *v40; // r8
  __int16 v41; // r9
  _WORD *v42; // rax
  int v43; // eax
  const char *v44; // r9
  int v45; // eax
  void *v46; // rcx
  __int64 v47; // rdx
  WCHAR *v48; // rax
  __int64 v49; // r8
  const char *v50; // r9
  __int64 v51; // rcx
  WCHAR *v52; // rdx
  __int64 v53; // rax
  char *v54; // rdi
  WCHAR v55; // r8
  WCHAR *v56; // rax
  __int64 v57; // rdx
  WCHAR *v58; // rax
  __int64 v59; // r8
  const char *v60; // r9
  __int64 v61; // rcx
  WCHAR *v62; // rdx
  __int64 v63; // rax
  char *v64; // r8
  WCHAR v65; // r9
  WCHAR *v66; // rax
  __int64 v67; // rdx
  WCHAR *v68; // rax
  __int64 v69; // r8
  const char *v70; // r9
  __int64 v71; // rcx
  WCHAR *v72; // rdx
  __int64 v73; // rax
  char *v74; // r8
  WCHAR v75; // r9
  WCHAR *v76; // rax
  __int64 v77; // rdx
  WCHAR *v78; // rax
  __int64 v79; // r8
  const char *v80; // r9
  __int64 v81; // rbx
  WCHAR *v82; // rcx
  char *v83; // rax
  WCHAR v84; // dx
  WCHAR *v85; // rax
  const char *v86; // r9
  int v88; // [rsp+28h] [rbp-E0h]
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+38h] [rbp-D0h]
  HLOCAL hMem; // [rsp+40h] [rbp-C8h] BYREF
  HLOCAL v92; // [rsp+48h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v95; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v96; // [rsp+68h] [rbp-A0h]
  __int64 v97; // [rsp+78h] [rbp-90h]
  __int128 v98; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v100[48]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+930h] [rbp+828h]

  hMem = a1;
  v98 = 0LL;
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
    LOWORD(v98) = -2 - v5;
    WORD1(v98) = -v5;
    *((_QWORD *)&v98 + 1) = &stru_18077F0A8;
  }
  if ( (int)v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x15,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v4,
      v88);
  v6 = RtlDeriveCapabilitySidsFromName(&v98, v100, Sid);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x1E,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v6,
      v88);
  hMem = 0LL;
  StringSid = 0LL;
  LOBYTE(v90) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v7);
  if ( (_BYTE)v90 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &hMem,
      StringSid);
  v8 = 1024LL;
  v9 = StringSecurityDescriptor;
  do
  {
    if ( v8 == -2147482622 )
      break;
    v10 = *(WCHAR *)((char *)v9 + (char *)L"D:AI" - (char *)StringSecurityDescriptor);
    if ( !v10 )
      break;
    *v9++ = v10;
    --v8;
  }
  while ( v8 );
  v11 = v9 - 1;
  if ( v8 )
    v11 = v9;
  *v11 = 0;
  if ( !v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)0x8007007ALL,
      (int)&hMem);
  v12 = 1024LL;
  v13 = StringSecurityDescriptor;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v12;
  }
  while ( v12 );
  v14 = (1024 - v12) & -(__int64)(v12 != 0);
  v15 = v12 == 0 ? (const char *)0x80070057LL : 0LL;
  v16 = 2147483646LL;
  if ( v12 )
  {
    v17 = 1024 - v14;
    v18 = &StringSecurityDescriptor[v14];
    if ( v14 != 1024 )
    {
      v19 = 2147483646LL;
      v20 = (char *)((char *)L"(A;CI;KA;;;" - (char *)v18);
      do
      {
        if ( !v19 )
          break;
        v21 = *(WCHAR *)((char *)v18 + (_QWORD)v20);
        if ( !v21 )
          break;
        *v18++ = v21;
        --v19;
        --v17;
      }
      while ( v17 );
    }
    v22 = v18 - 1;
    if ( v17 )
      v22 = v18;
    *v22 = 0;
    v15 = v17 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v15,
      (int)&hMem);
  v23 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, (const unsigned __int16 *)hMem);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v23,
      (int)&hMem);
  v24 = 1024LL;
  v25 = StringSecurityDescriptor;
  do
  {
    if ( !*v25 )
      break;
    ++v25;
    --v24;
  }
  while ( v24 );
  v26 = (1024 - v24) & -(__int64)(v24 != 0);
  v27 = v24 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v24 )
  {
    v28 = 1024 - v26;
    v29 = &StringSecurityDescriptor[v26];
    if ( v26 != 1024 )
    {
      v30 = 2147483646LL;
      v31 = (char *)((char *)L")" - (char *)v29);
      do
      {
        if ( !v30 )
          break;
        v32 = *(WCHAR *)((char *)v29 + (_QWORD)v31);
        if ( !v32 )
          break;
        *v29++ = v32;
        --v30;
        --v28;
      }
      while ( v28 );
    }
    v33 = v29 - 1;
    if ( v28 )
      v33 = v29;
    *v33 = 0;
    v27 = v28 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v27,
      (int)&hMem);
  v34 = 1024LL;
  v35 = StringSecurityDescriptor;
  do
  {
    if ( !*v35 )
      break;
    ++v35;
    --v34;
  }
  while ( v34 );
  v36 = (1024 - v34) & -(__int64)(v34 != 0);
  v37 = v34 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v34 )
  {
    v38 = 1024 - v36;
    v34 = (__int64)&StringSecurityDescriptor[v36];
    if ( v36 != 1024 )
    {
      v39 = 2147483646LL;
      v40 = (char *)L"(A;OICIID;KA;;;" - v34;
      do
      {
        if ( !v39 )
          break;
        v41 = *(_WORD *)&v40[v34];
        if ( !v41 )
          break;
        *(_WORD *)v34 = v41;
        v34 += 2LL;
        --v39;
        --v38;
      }
      while ( v38 );
    }
    v42 = (_WORD *)(v34 - 2);
    if ( v38 )
      v42 = (_WORD *)v34;
    *v42 = 0;
    v37 = v38 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v37 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v37,
      (int)&hMem);
  hObject = 0LL;
  StringSid = 0LL;
  LOBYTE(v90) = 1;
  v43 = wil::open_current_access_token_nothrow(&StringSid, v34, 0LL);
  if ( v43 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v43,
      (int)&hObject);
  if ( (_BYTE)v90 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      StringSid);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&Block, hObject);
  v92 = 0LL;
  StringSid = 0LL;
  LOBYTE(v90) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)Block, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v44);
  if ( (_BYTE)v90 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v92,
      StringSid);
  v45 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, (const unsigned __int16 *)v92);
  if ( v45 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v45,
      (int)&v92);
  if ( v92 )
    LocalFree(v92);
  v46 = Block;
  Block = 0LL;
  if ( v46 )
    operator delete(v46);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  v47 = 1024LL;
  v48 = StringSecurityDescriptor;
  do
  {
    if ( !*v48 )
      break;
    ++v48;
    --v47;
  }
  while ( v47 );
  v49 = (1024 - v47) & -(__int64)(v47 != 0);
  v50 = v47 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v47 )
  {
    v51 = 1024 - v49;
    v52 = &StringSecurityDescriptor[v49];
    if ( v49 != 1024 )
    {
      v53 = 2147483646LL;
      v54 = (char *)((char *)L")" - (char *)v52);
      do
      {
        if ( !v53 )
          break;
        v55 = *(WCHAR *)((char *)v52 + (_QWORD)v54);
        if ( !v55 )
          break;
        *v52++ = v55;
        --v53;
        --v51;
      }
      while ( v51 );
    }
    v56 = v52 - 1;
    if ( v51 )
      v56 = v52;
    *v56 = 0;
    v50 = v51 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v50 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v50,
      (int)&v92);
  v57 = 1024LL;
  v58 = StringSecurityDescriptor;
  do
  {
    if ( !*v58 )
      break;
    ++v58;
    --v57;
  }
  while ( v57 );
  v59 = (1024 - v57) & -(__int64)(v57 != 0);
  v60 = v57 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v57 )
  {
    v61 = 1024 - v59;
    v62 = &StringSecurityDescriptor[v59];
    if ( v59 != 1024 )
    {
      v63 = 2147483646LL;
      v64 = (char *)((char *)L"(A;OICIID;KA;;;SY)" - (char *)v62);
      do
      {
        if ( !v63 )
          break;
        v65 = *(WCHAR *)((char *)v62 + (_QWORD)v64);
        if ( !v65 )
          break;
        *v62++ = v65;
        --v63;
        --v61;
      }
      while ( v61 );
    }
    v66 = v62 - 1;
    if ( v61 )
      v66 = v62;
    *v66 = 0;
    v60 = v61 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v60 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v60,
      (int)&v92);
  v67 = 1024LL;
  v68 = StringSecurityDescriptor;
  do
  {
    if ( !*v68 )
      break;
    ++v68;
    --v67;
  }
  while ( v67 );
  v69 = (1024 - v67) & -(__int64)(v67 != 0);
  v70 = v67 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v67 )
  {
    v71 = 1024 - v69;
    v72 = &StringSecurityDescriptor[v69];
    if ( v69 != 1024 )
    {
      v73 = 2147483646LL;
      v74 = (char *)((char *)L"(A;OICIID;KA;;;BA)" - (char *)v72);
      do
      {
        if ( !v73 )
          break;
        v75 = *(WCHAR *)((char *)v72 + (_QWORD)v74);
        if ( !v75 )
          break;
        *v72++ = v75;
        --v73;
        --v71;
      }
      while ( v71 );
    }
    v76 = v72 - 1;
    if ( v71 )
      v76 = v72;
    *v76 = 0;
    v70 = v71 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v70 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v70,
      (int)&v92);
  v77 = 1024LL;
  v78 = StringSecurityDescriptor;
  do
  {
    if ( !*v78 )
      break;
    ++v78;
    --v77;
  }
  while ( v77 );
  v79 = (1024 - v77) & -(__int64)(v77 != 0);
  v80 = v77 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v77 )
  {
    v81 = 1024 - v79;
    v82 = &StringSecurityDescriptor[v79];
    if ( 1024 != v79 )
    {
      v83 = (char *)((char *)L"(A;OICIID;KR;;;RC)" - (char *)v82);
      do
      {
        if ( !v16 )
          break;
        v84 = *(WCHAR *)((char *)v82 + (_QWORD)v83);
        if ( !v84 )
          break;
        *v82++ = v84;
        --v16;
        --v81;
      }
      while ( v81 );
    }
    v85 = v82 - 1;
    if ( v81 )
      v85 = v82;
    *v85 = 0;
    v80 = v81 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v80 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v80,
      (int)&v92);
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  StringSid = 0LL;
  LOBYTE(v90) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v86);
  if ( (_BYTE)v90 )
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v95,
      StringSid);
  LODWORD(v96) = 24;
  *((_QWORD *)&v96 + 1) = v95;
  *a1 = v95;
  v95 = 0LL;
  *(_OWORD *)(a1 + 1) = v96;
  a1[3] = v97;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v95);
  if ( hMem )
    LocalFree(hMem);
  return a1;
}
