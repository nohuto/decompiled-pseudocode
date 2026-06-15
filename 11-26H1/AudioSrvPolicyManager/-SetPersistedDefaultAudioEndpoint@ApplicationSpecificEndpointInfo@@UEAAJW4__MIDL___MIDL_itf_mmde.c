/*
 * XREFs of ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180049E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180004694 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800049D0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset @ 0x180008950 (wil--details--lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___--reset.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800281CC (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180049894 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180049D8C (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18004A120 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x18004A218 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::SetPersistedDefaultAudioEndpoint(
        unsigned __int16 **a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int AppKey; // eax
  __int64 v11; // rdx
  int PersistentId; // eax
  ApplicationSpecificEndpointInfo *v13; // rcx
  __int64 v14; // rdx
  ApplicationSpecificEndpointInfo *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-49h]
  _BYTE v18[8]; // [rsp+30h] [rbp-39h] BYREF
  struct IMMDevice *v19; // [rsp+38h] [rbp-31h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 *v21; // [rsp+48h] [rbp-21h] BYREF
  WCHAR ValueName[12]; // [rsp+50h] [rbp-19h] BYREF
  WCHAR v23[12]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  hKey = 0LL;
  v8 = RpcImpersonateClient(0LL);
  if ( !v8 )
  {
    v18[1] = 1;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    AppKey = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 1, &hKey);
    v9 = AppKey;
    if ( AppKey < 0 )
    {
      v11 = 117LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)AppKey);
LABEL_6:
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)v18);
      goto LABEL_28;
    }
    AppKey = StringCbPrintfW(ValueName, 0x14uLL, L"%03d_%03d", a3, a2);
    v9 = AppKey;
    if ( AppKey < 0 )
    {
      v11 = 121LL;
      goto LABEL_5;
    }
    LODWORD(v17) = a2;
    AppKey = StringCbPrintfW(v23, 0x18uLL, L"%03d_%03d_p", a3, v17);
    v9 = AppKey;
    if ( AppKey < 0 )
    {
      v11 = 128LL;
      goto LABEL_5;
    }
    if ( a4 )
    {
      v19 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(a4, &v19) < 0 )
      {
        v9 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x89,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)0x80070057LL);
LABEL_14:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
        goto LABEL_6;
      }
      v21 = 0LL;
      PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v19, &v21);
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v14 = 142LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)PersistentId);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
        goto LABEL_14;
      }
      PersistentId = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v13, hKey, v23, v21);
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v14 = 143LL;
        goto LABEL_17;
      }
      PersistentId = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v15, hKey, ValueName, a4);
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v14 = 146LL;
        goto LABEL_17;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    }
    else
    {
      RegDeleteValueW(hKey, ValueName);
      RegDeleteValueW(hKey, v23);
      AppKey = ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification((__int64)a1, a2, a3);
      v9 = AppKey;
      if ( AppKey < 0 )
      {
        v11 = 155LL;
        goto LABEL_5;
      }
    }
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)v18);
    AppKey = ApplicationSpecificEndpointInfo::UpdateState(a1, a3, a2, a4);
    v9 = AppKey;
    if ( AppKey >= 0 )
    {
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)v18);
      v9 = 0;
      goto LABEL_28;
    }
    v11 = 162LL;
    goto LABEL_5;
  }
  v9 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x71,
         (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
         (const char *)v8);
LABEL_28:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v9;
}
