/*
 * XREFs of _lambda_2123d8e56b275a4b963be45688bccc2c_::operator() @ 0x1800EA350
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Do_call @ 0x1800EDA80 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800EB338 (-AddEndpointToCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800EB9B0 (-GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL__.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800EC230 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC2E0 (-OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PE.c)
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC484 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 *     ?RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z @ 0x1800ED054 (-RemoveEndpointFromCompatibleList@BluetoothBroadcastProvider@@AEAAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2123d8e56b275a4b963be45688bccc2c_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rdx
  int EndpointProperties; // eax
  unsigned int v4; // ebx
  struct IPropertyStore *v5; // r8
  BluetoothBroadcastProvider *v6; // rcx
  const unsigned __int16 *v7; // rdx
  int v8; // eax
  char v9; // r15
  __int64 v10; // rbx
  HRESULT v11; // eax
  HRESULT v12; // r14d
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  bool v16; // [rsp+20h] [rbp-50h] BYREF
  struct IPropertyStore *v17; // [rsp+28h] [rbp-48h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v18; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  GUID pclsid; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16 = 0;
  v18 = eRender;
  v17 = 0LL;
  v2 = *(const unsigned __int16 **)(a1 + 8);
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(const unsigned __int16 **)v2;
  EndpointProperties = BluetoothBroadcastProvider::GetEndpointProperties(
                         (BluetoothBroadcastProvider *)a1,
                         v2,
                         &v17,
                         &v18);
  v4 = EndpointProperties;
  if ( EndpointProperties < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)EndpointProperties);
    goto LABEL_36;
  }
  if ( v18 )
  {
    v4 = 0;
LABEL_36:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    return v4;
  }
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v17->lpVtbl->GetValue)(
    v17,
    &PKEY_Endpoint_IsBluetooth,
    pvar);
  if ( LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == 0xFFFF )
  {
    PropVariantClear(pvar);
    v6 = *(BluetoothBroadcastProvider **)(a1 + 32);
    v7 = *(const unsigned __int16 **)(a1 + 8);
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( *((_QWORD *)v7 + 3) > 7uLL )
        v7 = *(const unsigned __int16 **)v7;
      v8 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointActivation(v6, v7, v17, &v16);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v8);
      v9 = 0;
      *(_OWORD *)pvar = 0LL;
      v20 = 0LL;
      ((void (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v17->lpVtbl->GetValue)(
        v17,
        &PKEY_Multicast_CompatibleProviders,
        pvar);
      if ( LOWORD(pvar[0]) == 4127 )
      {
        v10 = 0LL;
        if ( LODWORD(pvar[1]) )
        {
          while ( 1 )
          {
            pclsid = 0LL;
            v11 = CLSIDFromString(*(LPCOLESTR *)(v20 + 8 * v10), &pclsid);
            v12 = v11;
            if ( v11 < 0 )
              break;
            if ( *(_QWORD *)&pclsid.Data1 == (_QWORD)BLUETOOTH_AUDIO_BROADCAST_PROVIDER
              && *(_QWORD *)pclsid.Data4 == _mm_srli_si128((__m128i)BLUETOOTH_AUDIO_BROADCAST_PROVIDER, 8).m128i_u64[0] )
            {
              v9 = 1;
              goto LABEL_19;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= LODWORD(pvar[1]) )
              goto LABEL_19;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x110,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)(unsigned int)v11);
          PropVariantClear(pvar);
          v4 = v12;
          goto LABEL_36;
        }
      }
LABEL_19:
      PropVariantClear(pvar);
    }
    else
    {
      if ( *((_QWORD *)v7 + 3) > 7uLL )
        v7 = *(const unsigned __int16 **)v7;
      v13 = BluetoothBroadcastProvider::OnBluetoothRenderEndpointInactivation(v6, v7, v5, &v16);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          272LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v13);
      v9 = 0;
    }
    v14 = *(const unsigned __int16 **)(a1 + 8);
    if ( v9 )
    {
      if ( *((_QWORD *)v14 + 3) > 7uLL )
        v14 = *(const unsigned __int16 **)v14;
      EndpointProperties = BluetoothBroadcastProvider::AddEndpointToCompatibleList(
                             *(BluetoothBroadcastProvider **)a1,
                             v14,
                             &v16);
    }
    else
    {
      if ( *((_QWORD *)v14 + 3) > 7uLL )
        v14 = *(const unsigned __int16 **)v14;
      EndpointProperties = BluetoothBroadcastProvider::RemoveEndpointFromCompatibleList(
                             *(BluetoothBroadcastProvider **)a1,
                             v14,
                             &v16);
    }
    v4 = EndpointProperties;
    if ( EndpointProperties < 0 )
      goto LABEL_35;
    if ( v16 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 16LL) )
        BluetoothBroadcastProvider::NotifyMulticastManager(*(BluetoothBroadcastProvider **)a1);
    }
  }
  else
  {
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  return 0LL;
}
