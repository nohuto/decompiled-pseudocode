/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180007200 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180004694 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18002D978 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800494A4 (--$_Traits_find@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1800494FC (--$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$function_deleter@P6A.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180049A70 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18004A120 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(unsigned __int16 **this)
{
  int AppKey; // eax
  HKEY v3; // rdi
  WCHAR *v4; // rbx
  DWORD i; // r14d
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // r9d
  _QWORD *v9; // rcx
  int updated; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  int lpcSubKeys; // [rsp+20h] [rbp-69h]
  int lpcSubKeysa; // [rsp+20h] [rbp-69h]
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  DWORD cchValueName; // [rsp+68h] [rbp-21h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v19; // [rsp+6Ch] [rbp-1Dh] BYREF
  unsigned int v20; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int16 *v21; // [rsp+78h] [rbp-11h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-9h] BYREF
  LPWSTR lpValueName; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v24[4]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+17h]
  unsigned __int64 v26; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, &hKey);
  v3 = hKey;
  if ( AppKey < 0
    || (cValues = 0,
        cbMaxValueNameLen = 0,
        RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL)) )
  {
LABEL_23:
    if ( v3 )
      RegCloseKey(v3);
    return 0LL;
  }
  wil::make_unique_cotaskmem_nothrow<unsigned short [0]>(&lpValueName, ++cbMaxValueNameLen);
  v4 = lpValueName;
  if ( lpValueName )
  {
    for ( i = 0; i < cValues; ++i )
    {
      cchValueName = cbMaxValueNameLen;
      v6 = RegEnumValueW(v3, i, v4, &cchValueName, 0LL, 0LL, 0LL, 0LL);
      if ( v6 )
      {
        v11 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x1B9,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v6);
        goto LABEL_21;
      }
      if ( cchValueName )
      {
        std::wstring::wstring(v24, v4);
        v9 = v24;
        if ( v26 > 7 )
          LODWORD(v9) = v24[0];
        if ( std::_Traits_find<std::char_traits<unsigned short>>((_DWORD)v9, v25, v7, v8, 2LL) == -1 )
        {
          v21 = 0LL;
          v20 = 0;
          v19 = eRender;
          updated = ApplicationSpecificEndpointInfo::ReadKey(v3, v4, &v21);
          v11 = updated;
          if ( updated < 0 )
          {
            v12 = 458LL;
LABEL_19:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
              (const char *)(unsigned int)updated,
              lpcSubKeysa);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
            std::wstring::~wstring(v24);
LABEL_21:
            CoTaskMemFree(v4);
            goto LABEL_27;
          }
          if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                      v4,
                      &v19,
                      (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v20) >= 0 )
          {
            updated = ApplicationSpecificEndpointInfo::UpdateState(this, v20, (unsigned int)v19, v21);
            v11 = updated;
            if ( updated < 0 )
            {
              v12 = 468LL;
              goto LABEL_19;
            }
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
        }
        std::wstring::~wstring(v24);
      }
    }
    CoTaskMemFree(v4);
    goto LABEL_23;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A8,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)0x8007000ELL,
    lpcSubKeys);
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v11;
}
