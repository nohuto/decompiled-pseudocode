/*
 * XREFs of ?GetDeviceInstanceId@@YAJPEAUIPropertyStore@@PEAPEAG@Z @ 0x180092D20
 * Callers:
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x180161A84 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetDeviceInstanceId(struct IPropertyStore *a1, unsigned __int16 **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 (__fastcall *v10)(LPVOID, PROPVARIANT, _QWORD); // rdi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, unsigned __int16 **); // rdi
  int v15; // eax
  unsigned __int16 *v16; // rax
  LPVOID ppv; // [rsp+30h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+28h] BYREF
  unsigned __int16 *v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v20 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a1->lpVtbl->GetValue)(
           a1,
           &PKEY_Endpoint_Devnode,
           pvar);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        v22 = 0LL;
        v9 = ppv;
        v10 = *(__int64 (__fastcall **)(LPVOID, PROPVARIANT, _QWORD))(*(_QWORD *)ppv + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v22);
        v11 = v10(v9, pvar[1], &v22);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v24 = 0LL;
          v12 = (**v22)(v22, &GUID_2efad216_2482_42af_98f5_35d70f3f5e14, &v24);
          v5 = v12;
          if ( v12 >= 0 )
          {
            v23 = 0LL;
            v13 = v24;
            v14 = *(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v24 + 32LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (void **)&v23,
              0LL);
            v15 = v14(v13, &v23);
            v5 = v15;
            if ( v15 >= 0 )
            {
              v16 = v23;
              v23 = 0LL;
              *a2 = v16;
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v23);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
              PropVariantClear(pvar);
              v5 = 0;
              goto LABEL_18;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A3,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v15);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v23);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A0,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v12);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19D,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v11);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
        goto LABEL_6;
      }
      v5 = -2147418113;
      v7 = 2147549183LL;
      v8 = 410LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 409LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)v7);
LABEL_6:
    PropVariantClear(pvar);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return v5;
}
