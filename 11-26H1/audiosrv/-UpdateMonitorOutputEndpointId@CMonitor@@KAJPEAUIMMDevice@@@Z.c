/*
 * XREFs of ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x180122660
 * Callers:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800837BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008E310 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CMonitor::UpdateMonitorOutputEndpointId(struct IMMDevice *a1)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v2; // eax
  int v3; // ebx
  HRESULT v4; // eax
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, PROPVARIANT, __int64 *); // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, void **); // rdi
  int v20; // eax
  void *v21; // rax
  int v22; // eax
  __int64 *v23; // [rsp+30h] [rbp-49h] BYREF
  __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  void *v25; // [rsp+40h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  PROPVARIANT v27[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h]
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  PROPVARIANT v31[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v34; // [rsp+E0h] [rbp+67h] BYREF
  LPVOID ppv; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v37; // [rsp+F8h] [rbp+7Fh] BYREF

  lpVtbl = a1->lpVtbl;
  v26 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a1, 2LL, &v26);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_OWORD *)v27 = 0LL;
    v28 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(v26, &PKEY_MonitorOutput, v27) >= 0
      && LOWORD(v27[0]) == 31 )
    {
      ppv = 0LL;
      v4 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      v3 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D6,
          (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
          (const char *)(unsigned int)v4);
LABEL_37:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
        PropVariantClear(v27);
        goto LABEL_38;
      }
      v37 = 0LL;
      v5 = ppv;
      v6 = *(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v37);
      v3 = v6(v5, v27[1], &v37);
      if ( v3 >= 0 )
      {
LABEL_36:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
        goto LABEL_37;
      }
      v36 = 0LL;
      v7 = *(_QWORD *)ppv;
      v36 = 0LL;
      v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(v7 + 24))(ppv, 0LL, 15LL, &v36);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 1255LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
          (const char *)(unsigned int)v8);
LABEL_35:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        goto LABEL_36;
      }
      v34 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 24LL))(v36, &v34);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 1258LL;
        goto LABEL_10;
      }
      v10 = 0;
      if ( v34 )
      {
        while ( 1 )
        {
          v23 = 0LL;
          v11 = v36;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v36 + 32LL);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v23);
          v13 = v12(v11, v10, (__int64 *)&v23);
          v3 = v13;
          if ( v13 < 0 )
            break;
          v24 = 0LL;
          v14 = *v23;
          v24 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 32))(v23, 0LL, &v24);
          v3 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4F2,
              (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
              (const char *)(unsigned int)v15);
LABEL_28:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
            goto LABEL_34;
          }
          *(_OWORD *)pvar = 0LL;
          v30 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
                 v24,
                 &PKEY_AudioEndpoint_MigrationHistory,
                 pvar) >= 0
            && LOWORD(pvar[0]) == 4127
            && LODWORD(pvar[1]) )
          {
            v16 = 0;
            while ( (unsigned int)_o__wcsicmp(v27[1], *(_QWORD *)(v30 + 8LL * v16)) )
            {
              if ( ++v16 >= LODWORD(pvar[1]) )
                goto LABEL_22;
            }
            v25 = 0LL;
            v18 = (__int64)v23;
            v19 = *(__int64 (__fastcall **)(__int64, void **))(*v23 + 40);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v25,
              0LL);
            v20 = v19(v18, &v25);
            v3 = v20;
            if ( v20 >= 0 )
            {
              v32 = 0LL;
              v31[0] = (PROPVARIANT)31;
              v21 = v25;
              v25 = 0LL;
              v31[1] = v21;
              v22 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v26 + 48LL))(
                      v26,
                      &PKEY_MonitorOutput,
                      v31);
              v3 = v22;
              if ( v22 >= 0 )
              {
                PropVariantClear(v31);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
                PropVariantClear(pvar);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
                PropVariantClear(v27);
                v3 = 0;
                goto LABEL_38;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x50A,
                (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
                (const char *)(unsigned int)v22);
              PropVariantClear(v31);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x503,
                (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
                (const char *)(unsigned int)v20);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
            PropVariantClear(pvar);
            goto LABEL_28;
          }
LABEL_22:
          PropVariantClear(pvar);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          if ( ++v10 >= v34 )
            goto LABEL_23;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4EF,
          (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
          (const char *)(unsigned int)v13);
LABEL_34:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
        goto LABEL_35;
      }
LABEL_23:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    }
    PropVariantClear(v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4CC,
    (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
    (const char *)(unsigned int)v2);
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  return (unsigned int)v3;
}
