/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x18009ADFC
 * Callers:
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18009AABC (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x18029C938 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18029C98C (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z @ 0x1802C0F10 (-open_current_access_token_nothrow@wil@@YAJPEAPEAXKW4OpenThreadTokenAs@1@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B43B4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180450D78 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability(_QWORD *a1)
{
  __int64 v2; // rcx
  const struct HWND__ *v3; // rax
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  WCHAR *v7; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  WCHAR *v16; // rdx
  __int64 v17; // rax
  char *v18; // r8
  WCHAR v19; // r9
  WCHAR *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  WCHAR *v23; // rax
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rcx
  WCHAR *v27; // rdx
  __int64 v28; // rax
  char *v29; // r8
  WCHAR v30; // r9
  WCHAR *v31; // rax
  __int64 v32; // rdx
  WCHAR *v33; // rax
  __int64 v34; // r8
  const char *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  char *v38; // r8
  __int16 v39; // r9
  _WORD *v40; // rax
  int v41; // eax
  const char *v42; // r9
  int v43; // eax
  void *v44; // rcx
  __int64 v45; // rdx
  WCHAR *v46; // rax
  __int64 v47; // r8
  const char *v48; // r9
  __int64 v49; // rcx
  WCHAR *v50; // rdx
  __int64 v51; // rax
  char *v52; // rdi
  WCHAR v53; // r8
  WCHAR *v54; // rax
  __int64 v55; // rdx
  WCHAR *v56; // rax
  __int64 v57; // r8
  const char *v58; // r9
  __int64 v59; // rcx
  WCHAR *v60; // rdx
  __int64 v61; // rax
  char *v62; // r8
  WCHAR v63; // r9
  WCHAR *v64; // rax
  __int64 v65; // rdx
  WCHAR *v66; // rax
  __int64 v67; // r8
  const char *v68; // r9
  __int64 v69; // rcx
  WCHAR *v70; // rdx
  __int64 v71; // rax
  char *v72; // r8
  WCHAR v73; // r9
  WCHAR *v74; // rax
  __int64 v75; // rdx
  WCHAR *v76; // rax
  __int64 v77; // r8
  const char *v78; // r9
  __int64 v79; // rbx
  WCHAR *v80; // rcx
  char *v81; // rax
  WCHAR v82; // dx
  WCHAR *v83; // rax
  const char *v84; // r9
  int v86; // [rsp+28h] [rbp-E0h]
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v88; // [rsp+38h] [rbp-D0h]
  HLOCAL hMem; // [rsp+40h] [rbp-C8h] BYREF
  HLOCAL v90; // [rsp+48h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v93; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v94; // [rsp+68h] [rbp-A0h]
  __int64 v95; // [rsp+78h] [rbp-90h]
  __int128 v96; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v98[48]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+930h] [rbp+828h]

  hMem = a1;
  v96 = 0LL;
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
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v2 == 0 ? (const char *)0xC000000DLL : 0,
      v86);
  LOWORD(v96) = 2 * (0x7FFF - v2);
  WORD1(v96) = v96 + 2;
  *((_QWORD *)&v96 + 1) = &stru_180753818;
  v4 = RtlDeriveCapabilitySidsFromName(&v96, v98, Sid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x1E,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v4,
      v86);
  hMem = 0LL;
  StringSid = 0LL;
  LOBYTE(v88) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v5);
  if ( (_BYTE)v88 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &hMem,
      StringSid);
  v6 = 1024LL;
  v7 = StringSecurityDescriptor;
  do
  {
    if ( v6 == -2147482622 )
      break;
    v8 = *(WCHAR *)((char *)v7 + (char *)L"D:AI" - (char *)StringSecurityDescriptor);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v7 - 1;
  if ( v6 )
    v9 = v7;
  *v9 = 0;
  if ( !v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)0x8007007ALL,
      (int)&hMem);
  v10 = 1024LL;
  v11 = StringSecurityDescriptor;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = (1024 - v10) & -(__int64)(v10 != 0);
  v13 = v10 == 0 ? (const char *)0x80070057LL : 0LL;
  v14 = 2147483646LL;
  if ( v10 )
  {
    v15 = 1024 - v12;
    v16 = &StringSecurityDescriptor[v12];
    if ( v12 != 1024 )
    {
      v17 = 2147483646LL;
      v18 = (char *)((char *)L"(A;CI;KA;;;" - (char *)v16);
      do
      {
        if ( !v17 )
          break;
        v19 = *(_WORD *)&v18[(_QWORD)v16];
        if ( !v19 )
          break;
        *v16++ = v19;
        --v17;
        --v15;
      }
      while ( v15 );
    }
    v20 = v16 - 1;
    if ( v15 )
      v20 = v16;
    *v20 = 0;
    v13 = v15 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v13,
      (int)&hMem);
  v21 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, (const unsigned __int16 *)hMem);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v21,
      (int)&hMem);
  v22 = 1024LL;
  v23 = StringSecurityDescriptor;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v22;
  }
  while ( v22 );
  v24 = (1024 - v22) & -(__int64)(v22 != 0);
  v25 = v22 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v22 )
  {
    v26 = 1024 - v24;
    v27 = &StringSecurityDescriptor[v24];
    if ( v24 != 1024 )
    {
      v28 = 2147483646LL;
      v29 = (char *)((char *)L")" - (char *)v27);
      do
      {
        if ( !v28 )
          break;
        v30 = *(_WORD *)&v29[(_QWORD)v27];
        if ( !v30 )
          break;
        *v27++ = v30;
        --v28;
        --v26;
      }
      while ( v26 );
    }
    v31 = v27 - 1;
    if ( v26 )
      v31 = v27;
    *v31 = 0;
    v25 = v26 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v25,
      (int)&hMem);
  v32 = 1024LL;
  v33 = StringSecurityDescriptor;
  do
  {
    if ( !*v33 )
      break;
    ++v33;
    --v32;
  }
  while ( v32 );
  v34 = (1024 - v32) & -(__int64)(v32 != 0);
  v35 = v32 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v32 )
  {
    v36 = 1024 - v34;
    v32 = (__int64)&StringSecurityDescriptor[v34];
    if ( v34 != 1024 )
    {
      v37 = 2147483646LL;
      v38 = (char *)L"(A;OICIID;KA;;;" - v32;
      do
      {
        if ( !v37 )
          break;
        v39 = *(_WORD *)&v38[v32];
        if ( !v39 )
          break;
        *(_WORD *)v32 = v39;
        v32 += 2LL;
        --v37;
        --v36;
      }
      while ( v36 );
    }
    v40 = (_WORD *)(v32 - 2);
    if ( v36 )
      v40 = (_WORD *)v32;
    *v40 = 0;
    v35 = v36 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v35,
      (int)&hMem);
  hObject = 0LL;
  StringSid = 0LL;
  LOBYTE(v88) = 1;
  v41 = wil::open_current_access_token_nothrow(&StringSid, v32, 0LL);
  if ( v41 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v41,
      (int)&hObject);
  if ( (_BYTE)v88 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      StringSid);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&Block, hObject);
  v90 = 0LL;
  StringSid = 0LL;
  LOBYTE(v88) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)Block, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v42);
  if ( (_BYTE)v88 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v90,
      StringSid);
  v43 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, (const unsigned __int16 *)v90);
  if ( v43 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      (const char *)(unsigned int)v43,
      (int)&v90);
  if ( v90 )
    LocalFree(v90);
  v44 = Block;
  Block = 0LL;
  if ( v44 )
    operator delete(v44);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  v45 = 1024LL;
  v46 = StringSecurityDescriptor;
  do
  {
    if ( !*v46 )
      break;
    ++v46;
    --v45;
  }
  while ( v45 );
  v47 = (1024 - v45) & -(__int64)(v45 != 0);
  v48 = v45 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v45 )
  {
    v49 = 1024 - v47;
    v50 = &StringSecurityDescriptor[v47];
    if ( v47 != 1024 )
    {
      v51 = 2147483646LL;
      v52 = (char *)((char *)L")" - (char *)v50);
      do
      {
        if ( !v51 )
          break;
        v53 = *(_WORD *)&v52[(_QWORD)v50];
        if ( !v53 )
          break;
        *v50++ = v53;
        --v51;
        --v49;
      }
      while ( v49 );
    }
    v54 = v50 - 1;
    if ( v49 )
      v54 = v50;
    *v54 = 0;
    v48 = v49 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v48 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v48,
      (int)&v90);
  v55 = 1024LL;
  v56 = StringSecurityDescriptor;
  do
  {
    if ( !*v56 )
      break;
    ++v56;
    --v55;
  }
  while ( v55 );
  v57 = (1024 - v55) & -(__int64)(v55 != 0);
  v58 = v55 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v55 )
  {
    v59 = 1024 - v57;
    v60 = &StringSecurityDescriptor[v57];
    if ( v57 != 1024 )
    {
      v61 = 2147483646LL;
      v62 = (char *)((char *)L"(A;OICIID;KA;;;SY)" - (char *)v60);
      do
      {
        if ( !v61 )
          break;
        v63 = *(_WORD *)&v62[(_QWORD)v60];
        if ( !v63 )
          break;
        *v60++ = v63;
        --v61;
        --v59;
      }
      while ( v59 );
    }
    v64 = v60 - 1;
    if ( v59 )
      v64 = v60;
    *v64 = 0;
    v58 = v59 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v58 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v58,
      (int)&v90);
  v65 = 1024LL;
  v66 = StringSecurityDescriptor;
  do
  {
    if ( !*v66 )
      break;
    ++v66;
    --v65;
  }
  while ( v65 );
  v67 = (1024 - v65) & -(__int64)(v65 != 0);
  v68 = v65 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v65 )
  {
    v69 = 1024 - v67;
    v70 = &StringSecurityDescriptor[v67];
    if ( v67 != 1024 )
    {
      v71 = 2147483646LL;
      v72 = (char *)((char *)L"(A;OICIID;KA;;;BA)" - (char *)v70);
      do
      {
        if ( !v71 )
          break;
        v73 = *(_WORD *)&v72[(_QWORD)v70];
        if ( !v73 )
          break;
        *v70++ = v73;
        --v71;
        --v69;
      }
      while ( v69 );
    }
    v74 = v70 - 1;
    if ( v69 )
      v74 = v70;
    *v74 = 0;
    v68 = v69 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v68 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v68,
      (int)&v90);
  v75 = 1024LL;
  v76 = StringSecurityDescriptor;
  do
  {
    if ( !*v76 )
      break;
    ++v76;
    --v75;
  }
  while ( v75 );
  v77 = (1024 - v75) & -(__int64)(v75 != 0);
  v78 = v75 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v75 )
  {
    v79 = 1024 - v77;
    v80 = &StringSecurityDescriptor[v77];
    if ( 1024 != v77 )
    {
      v81 = (char *)((char *)L"(A;OICIID;KR;;;RC)" - (char *)v80);
      do
      {
        if ( !v14 )
          break;
        v82 = *(_WORD *)&v81[(_QWORD)v80];
        if ( !v82 )
          break;
        *v80++ = v82;
        --v14;
        --v79;
      }
      while ( v79 );
    }
    v83 = v80 - 1;
    if ( v79 )
      v83 = v80;
    *v83 = 0;
    v78 = v79 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v78 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v78,
      (int)&v90);
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  StringSid = 0LL;
  LOBYTE(v88) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\CapabilityHelper.h",
      v84);
  if ( (_BYTE)v88 )
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v93,
      StringSid);
  LODWORD(v94) = 24;
  *((_QWORD *)&v94 + 1) = v93;
  *a1 = v93;
  v93 = 0LL;
  *(_OWORD *)(a1 + 1) = v94;
  a1[3] = v95;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v93);
  if ( hMem )
    LocalFree(hMem);
  return a1;
}
