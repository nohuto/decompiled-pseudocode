/*
 * XREFs of ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674490
 * Callers:
 *     ?subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x180675160 (-subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x18018D93C (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsRemoteAppSession@@YA_NXZ @ 0x18020480C (-IsRemoteAppSession@@YA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802B2A8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802C2F30 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180335130 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x180335398 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ??$make_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1806735A4 (--$make_range@V-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ??0?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1806736BC (--0-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??0?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x180673734 (--0-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@Q.c)
 *     ??1?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x180673924 (--1-$pointer_range@V-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??Y?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x180673C58 (--Y-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180673F2C (-CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674A5C (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?open_unique_key_nothrow@reg@wil@@YAJPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@W4key_access@12@@Z @ 0x1806750C8 (-open_unique_key_nothrow@reg@wil@@YAJPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$res.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RdpShellExtensionHost::ProcessAllRdpShellExtensions(RdpShellExtensionHost *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 result; // rax
  _QWORD *v5; // rax
  int v6; // edi
  __int64 v7; // rsi
  const char *v8; // rax
  const WCHAR *v9; // rcx
  const struct _tlgProvider_t *v10; // r8
  __int64 v11; // r9
  LPCWCH *v12; // rcx
  const WCHAR *v13; // rcx
  char **v14; // rax
  const WCHAR **v15; // rax
  unsigned __int8 *v16; // rdx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rcx
  char **v19; // rax
  const struct _tlgProvider_t *v20; // r8
  __int64 v21; // r9
  const WCHAR *v22; // rcx
  const WCHAR *v23; // rax
  char **v24; // rax
  int RdpShellExtension; // eax
  const char *v26; // r9
  const char *v27; // r9
  const WCHAR **v28; // [rsp+30h] [rbp-1A8h]
  HKEY v29; // [rsp+40h] [rbp-198h] BYREF
  const WCHAR *v30; // [rsp+48h] [rbp-190h] BYREF
  const WCHAR *v31; // [rsp+50h] [rbp-188h] BYREF
  int v32[2]; // [rsp+58h] [rbp-180h] BYREF
  LPCWCH lpString1[3]; // [rsp+60h] [rbp-178h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-160h]
  char v35; // [rsp+80h] [rbp-158h]
  __int128 v36; // [rsp+88h] [rbp-150h] BYREF
  __int64 v37; // [rsp+98h] [rbp-140h]
  unsigned __int64 v38; // [rsp+A0h] [rbp-138h]
  __int64 v39; // [rsp+A8h] [rbp-130h]
  int v40; // [rsp+B0h] [rbp-128h]
  int v41; // [rsp+B4h] [rbp-124h]
  __int64 v42; // [rsp+B8h] [rbp-120h]
  char *v43[3]; // [rsp+C0h] [rbp-118h] BYREF
  unsigned __int64 v44; // [rsp+D8h] [rbp-100h]
  __int64 v45; // [rsp+E0h] [rbp-F8h]
  int v46; // [rsp+E8h] [rbp-F0h]
  _QWORD v47[5]; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+120h] [rbp-B8h]
  _QWORD v49[7]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v50[56]; // [rsp+168h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v29 = 0LL;
  v2 = wil::reg::open_unique_key_nothrow(HKEY_LOCAL_MACHINE, L"Software\\Classes\\RdpShellExtension");
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v29);
    return v3;
  }
  *((_DWORD *)this + 26) = 3;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 41) = 1;
  *((_DWORD *)this + 42) = 72;
  *((_DWORD *)this + 40) = 1;
  v31 = (const WCHAR *)&v36;
  v41 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 7LL;
  LOWORD(v36) = 0;
  v39 = 0LL;
  v40 = -1;
  v42 = 0LL;
  try
  {
    v5 = (_QWORD *)wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::iterator_t<wil::reg::key_iterator_data<std::wstring>>(
                     (__int64)v47,
                     (__int64)v29);
    wil::make_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>((__int64)v49, v5, &v36);
    wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>((__int64)v43, (__int64)v49);
    wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>((__int64)v47, (__int64)v50);
    v6 = v48;
    v7 = v47[4];
    while ( 1 )
    {
      if ( (v46 == -1 || v6 == -1 || v45 == v7) && v46 == v6 )
      {
        std::wstring::_Tidy_deallocate(v47);
        std::wstring::_Tidy_deallocate(v43);
        wil::details::pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>(v49);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v29);
        return 0LL;
      }
      if ( v46 == -1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6EF,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
          v26);
      wil::reg::try_get_value<std::wstring>((__int64)&v36, v29);
      wil::reg::try_get_value<std::wstring>((__int64)lpString1, v29);
      if ( !(_BYTE)v39 )
      {
        v8 = (const char *)v43;
        if ( v44 > 7 )
          v8 = v43[0];
        wil::details::in1diag3::Log_IfFailedMsg(
          retaddr,
          83LL,
          (__int64)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
          (const char *)0x80070002LL,
          (unsigned __int64)"CLSID %ls",
          v8);
        goto LABEL_57;
      }
      if ( v35 )
      {
        v9 = (const WCHAR *)lpString1;
        if ( v34 > 7 )
          v9 = lpString1[0];
        if ( CompareStringOrdinal(v9, -1, L"DESKTOP", -1, 1) == 2 )
        {
          if ( IsRemoteAppSession() )
          {
            v10 = RdpShellExtensionHostTelemetry::Provider();
            if ( *(_DWORD *)v10 <= 5u )
              goto LABEL_57;
            v12 = lpString1;
            if ( v34 > 7 )
              v12 = (LPCWCH *)lpString1[0];
            *(_QWORD *)v32 = v12;
            v13 = (const WCHAR *)&v36;
            if ( v38 > 7 )
              v13 = (const WCHAR *)v36;
            v14 = v43;
            if ( v44 > 7 )
              v14 = (char **)v43[0];
            v31 = (const WCHAR *)v14;
            v28 = (const WCHAR **)v32;
            v15 = &v31;
            v16 = (unsigned __int8 *)&unk_18082EA88;
LABEL_40:
            v30 = v13;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              (__int64)v10,
              v16,
              (__int64)v10,
              v11,
              v15,
              &v30,
              v28);
            goto LABEL_57;
          }
          ++*((_DWORD *)this + 23);
          goto LABEL_43;
        }
        if ( v35 )
        {
          v17 = (const WCHAR *)lpString1;
          if ( v34 > 7 )
            v17 = lpString1[0];
          if ( CompareStringOrdinal(v17, -1, L"RAIL", -1, 1) == 2 )
          {
            if ( !IsRemoteAppSession() )
            {
              v10 = RdpShellExtensionHostTelemetry::Provider();
              if ( *(_DWORD *)v10 <= 5u )
                goto LABEL_57;
              v18 = (const WCHAR *)lpString1;
              if ( v34 > 7 )
                v18 = lpString1[0];
              v31 = v18;
              v13 = (const WCHAR *)&v36;
              if ( v38 > 7 )
                v13 = (const WCHAR *)v36;
              v19 = v43;
              if ( v44 > 7 )
                v19 = (char **)v43[0];
              *(_QWORD *)v32 = v19;
              v28 = &v31;
              v15 = (const WCHAR **)v32;
              v16 = (unsigned __int8 *)&unk_18082EB02;
              goto LABEL_40;
            }
            ++*((_DWORD *)this + 24);
            goto LABEL_43;
          }
        }
      }
      ++*((_DWORD *)this + 22);
LABEL_43:
      v20 = RdpShellExtensionHostTelemetry::Provider();
      if ( *(_DWORD *)v20 > 4u )
      {
        if ( v35 )
        {
          v22 = (const WCHAR *)lpString1;
          if ( v34 > 7 )
            v22 = lpString1[0];
        }
        else
        {
          v22 = L"Unspecified";
        }
        v31 = v22;
        v23 = (const WCHAR *)&v36;
        if ( v38 > 7 )
          v23 = (const WCHAR *)v36;
        v30 = v23;
        v24 = v43;
        if ( v44 > 7 )
          v24 = (char **)v43[0];
        *(_QWORD *)v32 = v24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (__int64)v20,
          byte_18082EAC4,
          (__int64)v20,
          v21,
          (const WCHAR **)v32,
          &v30,
          &v31);
      }
      if ( !(_BYTE)v39 )
        std::_Throw_bad_optional_access();
      RdpShellExtension = RdpShellExtensionHost::CreateRdpShellExtension((__int64)this, (const WCHAR *)&v36);
      if ( RdpShellExtension < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7D,
          (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
          (const char *)(unsigned int)RdpShellExtension);
LABEL_57:
      std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)lpString1);
      std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)&v36);
      wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::operator+=((wchar_t *)v43);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82,
                           (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
                           v27);
  }
  return result;
}
