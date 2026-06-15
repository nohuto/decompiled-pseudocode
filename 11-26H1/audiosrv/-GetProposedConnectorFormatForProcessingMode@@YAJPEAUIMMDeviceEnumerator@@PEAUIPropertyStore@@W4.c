/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180034DAC
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032C6C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034C38 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800AC4DC (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall GetProposedConnectorFormatForProcessingMode(
        struct IMMDeviceEnumerator *a1,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 *v24; // [rsp+30h] [rbp-91h] BYREF
  int v25[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-81h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-79h] BYREF
  char *v28; // [rsp+50h] [rbp-71h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v30; // [rsp+68h] [rbp-59h]
  char **v31; // [rsp+70h] [rbp-51h] BYREF
  __int64 v32; // [rsp+78h] [rbp-49h] BYREF
  char v33; // [rsp+80h] [rbp-41h]
  PROPVARIANT v34[2]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v35; // [rsp+98h] [rbp-29h]
  __int128 v36; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v37[20]; // [rsp+B0h] [rbp-11h] BYREF
  _DWORD v38[6]; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  *a5 = 0LL;
  v38[0] = 590439624;
  v38[1] = 1283267372;
  v38[2] = 1907779772;
  v38[3] = 1730509416;
  v38[4] = 1;
  *(_OWORD *)&v37[4] = 0LL;
  if ( (a3 & 0xFFFFFFF9) != 0 || a3 == (eConnectorCount|eLoopbackConnector) )
  {
    if ( a3 == eOffloadConnector )
    {
      fmtid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.fmtid;
      pid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.pid;
    }
    else
    {
      if ( a3 != eKeywordDetectorConnector )
      {
        v11 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x411,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)0x80070057LL);
        return (unsigned int)v11;
      }
      fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
      pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
    }
    *(_DWORD *)&v37[16] = pid;
    *(GUID *)v37 = fmtid;
  }
  else
  {
    *(_QWORD *)v37 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)&v37[8] = 0xFC181731B718BA83uLL;
    *(_DWORD *)&v37[16] = 1;
  }
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IPropertyStore *, _DWORD *, PROPVARIANT *))a2->lpVtbl->GetValue)(a2, v38, v34);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v30 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IPropertyStore *, _BYTE *, PROPVARIANT *))a2->lpVtbl->GetValue)(a2, v37, pvar);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v24 = 0LL;
      GetDevice = a1->lpVtbl->GetDevice;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v24);
      v14 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))GetDevice)(a1, v34[1], &v24);
      v11 = v14;
      if ( v14 >= 0 )
      {
        *(_QWORD *)v25 = 0LL;
        v15 = *v24;
        *(_QWORD *)v25 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v15 + 24))(
                v24,
                &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                23LL);
        v11 = v16;
        if ( v16 >= 0 )
        {
          v26 = 0LL;
          v17 = **(_QWORD **)v25;
          v26 = 0LL;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v17 + 56))(
                  *(_QWORD *)v25,
                  LODWORD(pvar[1]),
                  &v26);
          v11 = v18;
          if ( v18 >= 0 )
          {
            v27 = 0LL;
            v19 = *v26;
            v27 = 0LL;
            v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v19 + 104))(
                    v26,
                    23LL,
                    &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                    &v27);
            v11 = v20;
            if ( v20 >= 0 )
            {
              v28 = 0LL;
              v21 = *v27;
              v31 = &v28;
              v32 = 0LL;
              v33 = 1;
              v36 = (__int128)*a4;
              v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v21 + 24))(v27, &v36, &v32);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v31);
              if ( v11 >= 0 )
              {
                v22 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v28 + 64), a5);
                v11 = v22;
                if ( v22 >= 0 )
                {
                  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                    (void **)&v28,
                    0LL);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
                  PropVariantClear(pvar);
                  v11 = 0;
                  goto LABEL_31;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x42B,
                  (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)(unsigned int)v22);
              }
              wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                (void **)&v28,
                0LL);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x424,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)(unsigned int)v20);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x421,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v18);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x41E,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v16);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41B,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x418,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v12);
    }
    PropVariantClear(pvar);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x415,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v10);
  }
LABEL_31:
  PropVariantClear(v34);
  return (unsigned int)v11;
}
