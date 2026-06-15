/*
 * XREFs of ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAGPEA_N@Z @ 0x1800FD25C
 * Callers:
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800FD648 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18003FB30 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800ABE1C (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetActiveRenderEndpointWithFallbackToDefault(unsigned int a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  HRESULT (__stdcall *GetDefaultAudioEndpoint)(IMMDeviceEnumerator *, EDataFlow, ERole, IMMDevice **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  HRESULT (__stdcall *v14)(IMMDeviceEnumerator *, EDataFlow, ERole, IMMDevice **); // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int i; // ebx
  unsigned __int16 *v19; // rax
  int v20; // eax
  __int64 *v21; // [rsp+30h] [rbp-D0h] BYREF
  _WNF_STATE_NAME v22; // [rsp+38h] [rbp-C8h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-C0h] BYREF
  LPCWCH *p_lpString1; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+58h] [rbp-A8h]
  bool v27; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-9Ch]
  wchar_t v29[2044]; // [rsp+68h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1098h] [rbp+F98h]

  *a2 = 0LL;
  *a3 = 0;
  if ( wil::wnf_query_nothrow((wil *)&WNF_AUDC_RENDER, &v22, &v27, (void *)0x1000, &lpString1) >= 0 )
  {
    v8 = v28;
    if ( !v28 )
    {
      v21 = 0LL;
      GetDefaultAudioEndpoint = g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v21);
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, __int64 **))GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             a1,
             &v21) < 0
        || (v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(*v21 + 40))(v21, a2), v11 = v10, v10 >= 0) )
      {
        *a3 = 0;
        v11 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x688,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v10);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      return v11;
    }
    *a3 = 1;
    if ( v8 != 1 )
    {
      lpString1 = 0LL;
      v21 = 0LL;
      v14 = g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v21);
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, __int64 **))v14)(
             g_DeviceEnumerator,
             0LL,
             a1,
             &v21) < 0
        || (v15 = *v21,
            p_lpString1 = &lpString1,
            v25 = 0LL,
            v26 = 1,
            v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v15 + 40))(v21, &v25),
            wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((void ***)&p_lpString1),
            (v11 & 0x80000000) == 0) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
        for ( i = 0; i < v28; ++i )
        {
          if ( CompareStringOrdinal(lpString1, -1, &v29[56 * i], -1, 1) == 2 )
          {
            v19 = (unsigned __int16 *)lpString1;
            lpString1 = 0LL;
            *a2 = v19;
LABEL_20:
            v11 = 0;
            goto LABEL_21;
          }
        }
        v20 = _AllocString<CTCoAllocPolicy>(v17, v16, v29, a2);
        v11 = v20;
        if ( v20 >= 0 )
          goto LABEL_20;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6AC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v20);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)v11);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      }
LABEL_21:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
      return v11;
    }
    v13 = _AllocString<CTCoAllocPolicy>(v7, v6, v29, a2);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x694,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
      return v11;
    }
  }
  return 0LL;
}
