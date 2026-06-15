/*
 * XREFs of ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@@Z @ 0x180160AE8
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180031F7C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180071B4C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?reset@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@QEAAXXZ @ 0x180140204 (-reset@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall GetConnectorProcessingModeDataFormatsFromDriver(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        char **a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(__int64, PROPVARIANT, __int64 **); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned __int64 v27; // rcx
  IMalloc *v28; // rcx
  int v29; // ebx
  char *v30; // rsi
  unsigned int *v31; // rax
  char *v32; // r15
  char *v33; // rbx
  unsigned int i; // r14d
  __int64 v35; // r8
  struct tWAVEFORMATEX **v36; // rdx
  int v37; // eax
  unsigned int v38; // r12d
  char *v39; // rcx
  char *v40; // rax
  __int64 *v41; // [rsp+30h] [rbp-108h] BYREF
  int v42[2]; // [rsp+38h] [rbp-100h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-F8h] BYREF
  __int64 *v44; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int *v45; // [rsp+50h] [rbp-E8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-D0h]
  void *v48[2]; // [rsp+70h] [rbp-C8h] BYREF
  PROPVARIANT v49[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+98h] [rbp-A0h] BYREF
  char *v52; // [rsp+A0h] [rbp-98h] BYREF
  char *v53; // [rsp+A8h] [rbp-90h]
  unsigned int **v54; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-80h] BYREF
  char v56; // [rsp+C0h] [rbp-78h]
  _DWORD v57[6]; // [rsp+C8h] [rbp-70h] BYREF
  struct _tagpropertykey v58; // [rsp+E0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v57[0] = 590439624;
  v57[1] = 1283267372;
  v57[2] = 1907779772;
  v57[3] = 1730509416;
  v57[4] = 1;
  if ( a4 == 3 )
  {
    v58 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v58.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v58.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v58.pid = 1;
  }
  *(_OWORD *)pvar = 0LL;
  v47 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, v57, pvar);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 31 )
    {
      *(_OWORD *)v49 = 0LL;
      v50 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
              a2,
              &v58,
              v49);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v41 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)a1 + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v41);
        v14 = v13(a1, pvar[1], &v41);
        v15 = v14;
        if ( v14 >= 0 )
        {
          *(_QWORD *)v42 = 0LL;
          v16 = *v41;
          *(_QWORD *)v42 = 0LL;
          v17 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v16 + 24))(
                  v41,
                  &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                  1LL);
          v18 = v17;
          if ( v17 >= 0 )
          {
            v43 = 0LL;
            v19 = **(_QWORD **)v42;
            v43 = 0LL;
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v19 + 56))(
                    *(_QWORD *)v42,
                    LODWORD(v49[1]),
                    &v43);
            v21 = v20;
            if ( v20 >= 0 )
            {
              v44 = 0LL;
              v22 = *v43;
              v44 = 0LL;
              v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **, int *))(v22 + 104))(
                      v43,
                      23LL,
                      &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
                      &v44,
                      v42);
              v24 = v23;
              if ( v23 >= 0 )
              {
                v45 = 0LL;
                v25 = *v44;
                v54 = &v45;
                v55 = 0LL;
                v56 = 1;
                *(_OWORD *)v48 = *a3;
                v26 = (*(__int64 (__fastcall **)(__int64 *, void **, __int64 *))(v25 + 32))(v44, v48, &v55);
                wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v54);
                if ( (v26 & 0x80000000) == 0 )
                {
                  v27 = v45[1];
                  if ( (_DWORD)v27 )
                  {
                    v48[0] = 0LL;
                    v51 = 0LL;
                    v29 = ULongLongMult(v27, 8uLL, &v51);
                    if ( v29 < 0 || (v29 = CTCoAllocPolicy::Alloc(v28, 1, v51, v48), v29 < 0) )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x3E0,
                        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                        (const char *)(unsigned int)v29);
                      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                        (void **)&v45,
                        0LL);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                      PropVariantClear(v49);
                      PropVariantClear(pvar);
                      return (unsigned int)v29;
                    }
                    else
                    {
                      v30 = (char *)v48[0];
                      v31 = v45;
                      v48[1] = (void *)v45[1];
                      v32 = (char *)(v45 + 2);
                      v33 = 0LL;
                      for ( i = 0; i < v31[1]; ++i )
                      {
                        v35 = *(unsigned int *)&v32[4 * i];
                        if ( *(_DWORD *)&v32[v35] >= 0x52u )
                        {
                          v36 = (struct tWAVEFORMATEX **)&v30[8 * (_QWORD)v33++];
                          v37 = CloneWaveFormat((const struct tWAVEFORMATEX *)&v32[v35 + 64], v36);
                          v38 = v37;
                          if ( v37 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x3EE,
                              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                              (const char *)(unsigned int)v37);
                            wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)v48);
                            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                              (void **)&v45,
                              0LL);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                            PropVariantClear(v49);
                            PropVariantClear(pvar);
                            return v38;
                          }
                          v31 = v45;
                        }
                      }
                      v48[0] = 0LL;
                      v48[1] = 0LL;
                      v52 = v30;
                      v53 = v33;
                      if ( a5 != &v52 )
                      {
                        wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)a5);
                        v39 = *a5;
                        v40 = a5[1];
                        *a5 = v30;
                        a5[1] = v33;
                        v52 = v39;
                        v53 = v40;
                      }
                      wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)&v52);
                      wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)v48);
                      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                        (void **)&v45,
                        0LL);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                      PropVariantClear(v49);
                      PropVariantClear(pvar);
                      return 0LL;
                    }
                  }
                  else
                  {
                    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                      (void **)&v45,
                      0LL);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                    PropVariantClear(v49);
                    PropVariantClear(pvar);
                    return 2147943568LL;
                  }
                }
                else if ( v26 == -2147023728 || v26 == -2147024846 )
                {
                  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                    (void **)&v45,
                    0LL);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                  PropVariantClear(v49);
                  PropVariantClear(pvar);
                  return v26;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x3DB,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)v26);
                  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                    (void **)&v45,
                    0LL);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                  PropVariantClear(v49);
                  PropVariantClear(pvar);
                  return v26;
                }
              }
              else if ( v23 == -2147467262 )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                PropVariantClear(v49);
                PropVariantClear(pvar);
                return 2147500034LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3D8,
                  (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)(unsigned int)v23);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                PropVariantClear(v49);
                PropVariantClear(pvar);
                return v24;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3D5,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)(unsigned int)v20);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
              PropVariantClear(v49);
              PropVariantClear(pvar);
              return v21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3D2,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
            PropVariantClear(v49);
            PropVariantClear(pvar);
            return v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3CF,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
          PropVariantClear(v49);
          PropVariantClear(pvar);
          return v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3CC,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v11);
        PropVariantClear(v49);
        PropVariantClear(pvar);
        return v12;
      }
    }
    else
    {
      PropVariantClear(pvar);
      return 2290679812LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v8);
    PropVariantClear(pvar);
    return v9;
  }
}
