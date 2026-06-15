/*
 * XREFs of ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180159B78
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800F16B0 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4550 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x18015B548 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800F53F0 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CConstraintModel::GetEndpointInformationFromId(
        CConstraintModel *this,
        struct IMMDevice *a2,
        struct EndpointInfo *a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64 *); // rdi
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _WORD **); // rdi
  __int64 v17; // rcx
  const unsigned __int16 *v18; // rdi
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rbx
  __int64 v20; // rcx
  const unsigned __int16 *v21; // rdx
  int v22; // eax
  int v23; // ebx
  int v24; // edi
  __int64 v26; // rdx
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34[2]; // [rsp+68h] [rbp-98h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  PROPVARIANT v37[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  PROPVARIANT v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  PROPVARIANT v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  PROPVARIANT v43[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+E8h] [rbp-18h] BYREF
  int v46; // [rsp+F8h] [rbp-8h]
  __int128 v47; // [rsp+100h] [rbp+0h] BYREF
  int v48; // [rsp+110h] [rbp+10h]
  __int128 v49; // [rsp+118h] [rbp+18h] BYREF
  int v50; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v32 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  v27 = 0;
  lpVtbl = a2->lpVtbl;
  *(_QWORD *)v34 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, int *))lpVtbl->Activate)(
         a2,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL,
         0LL,
         v34);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 672LL;
LABEL_5:
    v10 = (unsigned int)v6;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
      (const char *)v10);
    goto LABEL_47;
  }
  v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v34 + 32LL);
  v32 = 0LL;
  v6 = v9(*(_QWORD *)v34, 0LL, &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 676LL;
    goto LABEL_5;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v32 + 64LL);
  v31 = 0LL;
  v6 = v11(v32, &v31);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 679LL;
    goto LABEL_5;
  }
  v29 = 0LL;
  v6 = (**v31)(v31, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v29);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 682LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 32LL))(v29, &v27);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 685LL;
    goto LABEL_5;
  }
  v27 = (unsigned __int16)v27;
  v12 = v29;
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 96LL);
  v14 = v30;
  v30 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v6 = v13(v12, &v30);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 689LL;
    goto LABEL_5;
  }
  v15 = v30;
  v16 = *(__int64 (__fastcall **)(__int64, _WORD **))(*(_QWORD *)v30 + 64LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v33,
    0LL);
  v6 = v16(v15, &v33);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 690LL;
    goto LABEL_5;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( v33[v17] );
  while ( v33[v17] != 92 )
    --v17;
  v18 = &v33[v17];
  OpenPropertyStore = a2->lpVtbl->OpenPropertyStore;
  v20 = v28;
  v28 = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))OpenPropertyStore)(a2, 0LL, &v28);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 697LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
         v28,
         &DEVPKEY_Device_MatchingDeviceId,
         v43);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 698LL;
    goto LABEL_5;
  }
  if ( LOWORD(v43[0]) && LOWORD(v43[0]) != 31 )
  {
    v7 = -2147467259;
    v10 = 2147500037LL;
    v8 = 699LL;
    goto LABEL_6;
  }
  v21 = L"LEGACY_HARDWARE";
  if ( v43[1] )
    v21 = (const unsigned __int16 *)v43[1];
  v6 = EndpointInfo::SetEndpointInfo(a3, v21, 0LL, v18 + 1, v27);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 701LL;
    goto LABEL_5;
  }
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
          v28,
          &PKEY_AudioEndpoint_TopologyPath_ConnectionCount,
          pvar);
  v7 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
      (const char *)(unsigned int)v22);
    PropVariantClear(pvar);
    goto LABEL_47;
  }
  if ( LOWORD(pvar[0]) != 19 )
  {
LABEL_46:
    PropVariantClear(pvar);
    v7 = 0;
    goto LABEL_47;
  }
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  *(_OWORD *)v39 = 0LL;
  v40 = 0LL;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  v45 = PKEY_AudioEndpoint_TopologyPath_Interfaces;
  v46 = 0;
  v47 = PKEY_AudioEndpoint_TopologyPath_HardwareIds;
  v48 = 0;
  v49 = PKEY_AudioEndpoint_TopologyPath_CompatibleIds;
  v50 = 0;
  v23 = 0;
  if ( !LODWORD(pvar[1]) )
  {
LABEL_45:
    PropVariantClear(v37);
    PropVariantClear(v39);
    PropVariantClear(v41);
    goto LABEL_46;
  }
  while ( 1 )
  {
    v46 = v23;
    v48 = v23;
    v50 = v23;
    v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(v28, &v45, v41);
    if ( v24 < 0 )
      break;
    v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(v28, &v47, v39);
    if ( v24 < 0 )
    {
      v26 = 721LL;
      goto LABEL_52;
    }
    v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(v28, &v49, v37);
    if ( v24 < 0 )
    {
      v26 = 722LL;
      goto LABEL_52;
    }
    v24 = EndpointInfo::AddExtendedTopologyInfo(a3, (__int64)v41, v39, v37);
    if ( v24 < 0 )
    {
      v26 = 724LL;
      goto LABEL_52;
    }
    if ( (unsigned int)++v23 >= LODWORD(pvar[1]) )
      goto LABEL_45;
  }
  v26 = 720LL;
LABEL_52:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
    (const char *)(unsigned int)v24);
  PropVariantClear(v37);
  PropVariantClear(v39);
  PropVariantClear(v41);
  PropVariantClear(pvar);
  v7 = v24;
LABEL_47:
  PropVariantClear(v43);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v33);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
  return v7;
}
