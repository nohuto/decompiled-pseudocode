/*
 * XREFs of ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800837BC
 * Callers:
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18005FCD8 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800601A8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18008233C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082590 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011DC34 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18011EBF8 (-IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x180122660 (-UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall CMonitorManager::IsRenderMirrorEnabled(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 **a3)
{
  char v6; // si
  struct IMMDeviceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, void **); // rdi
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  PROPVARIANT v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+68h] [rbp-8h]
  void *v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0;
  v15 = 0LL;
  pv = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v19 = 0LL;
  if ( a3 && a2 )
  {
    *a3 = 0LL;
    if ( *((_BYTE *)this + 352) )
    {
      lpVtbl = a2->lpVtbl;
      v15 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v15) >= 0
        && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_MonitorEnabled,
             pvar) >= 0
        && LOWORD(pvar[0]) == 11
        && LOWORD(pvar[1]) == 0xFFFF
        && CMonitorManager::IsEndpointActiveHmdEndpoint(this, a2) )
      {
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv) >= 0
          && (int)CMonitor::UpdateMonitorOutputEndpointId(a2) >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
               v15,
               &PKEY_MonitorOutput,
               v16) >= 0
          && LOWORD(v16[0]) == 31
          && v16[1] )
        {
          v21 = 0LL;
          v20 = 0LL;
          v9 = *((_QWORD *)this + 8);
          v10 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v21);
          if ( v10(v9, 0LL, 0LL, &v21) >= 0 )
          {
            v11 = v21;
            v12 = *(int (__fastcall **)(__int64, void **))(*(_QWORD *)v21 + 40LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v20,
              0LL);
            if ( v12(v11, &v20) >= 0 && !(unsigned int)_o__wcsicmp(pv, v20) )
            {
              if ( (unsigned int)_o__wcsicmp(pv, v16[1]) )
              {
                *a3 = (unsigned __int16 *)v16[1];
                LOWORD(v16[0]) = 0;
                v6 = 1;
              }
            }
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
        }
      }
    }
    PropVariantClear(pvar);
    PropVariantClear(v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    return v6;
  }
  else
  {
    PropVariantClear(pvar);
    PropVariantClear(v16);
    return 0;
  }
}
