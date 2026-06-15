/*
 * XREFs of ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18013A840
 * Callers:
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x1801376E4 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180134968 (--$regex_match@GV-$regex_traits@G@std@@@std@@YA_NPEBGAEBV-$basic_regex@GV-$regex_traits@G@std@@@.c)
 *     _lambda_65bddec6c6f38403802d6e4c070e95ee_::operator() @ 0x1801363D8 (_lambda_65bddec6c6f38403802d6e4c070e95ee_--operator().c)
 *     ?GetPnpDevnodeFromMMDevice@CEndpointCharacteristics@@AEAAJPEAPEAUIMMDevice@@@Z @ 0x18013A080 (-GetPnpDevnodeFromMMDevice@CEndpointCharacteristics@@AEAAJPEAPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(
        CEndpointCharacteristics *this,
        __int64 *a2,
        _BYTE *a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // di
  LPCWCH *v10; // r14
  LPCWCH *v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  struct IMMDevice *v14; // rbx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 *v19; // rbx
  __int64 *v20; // r14
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  _QWORD v26[3]; // [rsp+60h] [rbp-20h] BYREF
  char v27; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  int v29; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  struct IMMDevice *v31; // [rsp+D0h] [rbp+50h] BYREF

  *a3 = 0;
  v26[0] = this;
  v26[1] = a2;
  v26[2] = &v29;
  v27 = 1;
  v29 = 1;
  if ( *((_DWORD *)this + 16) == 3 )
    goto LABEL_52;
  v29 = 4;
  if ( *((_DWORD *)this + 110) )
  {
    if ( !*((_DWORD *)this + 111) && *(_OWORD *)(*a2 + 1936) != PKEY_FX_EffectPack_Schema_Internal_V1 )
      goto LABEL_52;
  }
  v29 = 7;
  v6 = *((int *)this + 59);
  if ( v6 < 2 )
  {
    v8 = *a2;
    if ( *(_BYTE *)(*a2 + v6 + 1915) )
    {
      v9 = 0;
      v29 = 2;
      v10 = *(LPCWCH **)(v8 + 1864);
      v11 = *(LPCWCH **)(v8 + 1872);
      while ( v10 != v11 )
      {
        if ( *((_QWORD *)this + 52)
          && (CompareStringOrdinal(*v10, -1, L"*", -1, 1) == 2
           || CompareStringOrdinal(*v10, -1, *((LPCWCH *)this + 52), -1, 1) == 2) )
        {
          v9 = 1;
          break;
        }
        ++v10;
      }
      if ( *(_BYTE *)(*a2 + 1912) )
      {
        v29 = 6;
        *(_OWORD *)pvar = 0LL;
        v23 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               &PKEY_Endpoint_IsBluetooth,
               pvar) >= 0
          && LOWORD(pvar[0]) == 11
          && LOWORD(pvar[1]) )
        {
          v9 = 1;
        }
        PropVariantClear(pvar);
      }
      if ( *(_BYTE *)(*a2 + 1913) )
      {
        v29 = 5;
        *(_OWORD *)pvar = 0LL;
        v23 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               &PKEY_Endpoint_IsUSB,
               pvar) >= 0
          && LOWORD(pvar[0]) == 11
          && LOWORD(pvar[1]) )
        {
          v9 = 1;
        }
        PropVariantClear(pvar);
      }
      if ( v9 )
      {
        v29 = 3;
        v12 = *(_QWORD **)(*a2 + 1824);
        v13 = *(_QWORD **)(*a2 + 1832);
        if ( v12 != v13 )
        {
          *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
          while ( (*v12 != *((_QWORD *)this + 53) || v12[1] != *((_QWORD *)this + 54))
               && (*v12 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
                || v12[1] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
          {
            v12 += 2;
            if ( v12 == v13 )
              goto LABEL_52;
          }
          v29 = 8;
          if ( (*(_QWORD *)(*a2 + 1896) - *(_QWORD *)(*a2 + 1888)) / 40LL )
          {
            v31 = 0LL;
            v30 = 0LL;
            *(_OWORD *)pvar = 0LL;
            v23 = 0LL;
            v24 = 0LL;
            v25 = 0LL;
            wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v31);
            CEndpointCharacteristics::GetPnpDevnodeFromMMDevice(this, &v31);
            v14 = v31;
            if ( v31 )
            {
              OpenPropertyStore = v31->lpVtbl->OpenPropertyStore;
              v16 = v30;
              v30 = 0LL;
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))OpenPropertyStore)(v14, 0LL, &v30) >= 0
                && (*(int (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(
                     v30,
                     &DEVPKEY_Device_HardwareIds,
                     pvar) >= 0
                && LOWORD(pvar[0]) == 4127 )
              {
                v17 = (unsigned int)pvar[1];
                if ( LODWORD(pvar[1]) )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    v19 = *(__int64 **)(*a2 + 1888);
                    v20 = *(__int64 **)(*a2 + 1896);
                    if ( v19 != v20 )
                      break;
LABEL_49:
                    if ( ++v18 >= v17 )
                      goto LABEL_50;
                  }
                  while ( !std::regex_match<unsigned short,std::regex_traits<unsigned short>>(
                             *(_QWORD *)(v23 + 8LL * v18),
                             v19) )
                  {
                    v19 += 5;
                    if ( v19 == v20 )
                    {
                      v17 = (unsigned int)pvar[1];
                      goto LABEL_49;
                    }
                  }
                  PropVariantClear(pvar);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
                  v7 = 0;
                  goto LABEL_54;
                }
              }
            }
LABEL_50:
            PropVariantClear(pvar);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
          }
          v29 = 0;
          *a3 = 1;
        }
      }
    }
LABEL_52:
    v27 = 0;
    lambda_65bddec6c6f38403802d6e4c070e95ee_::operator()((__int64)v26);
    return 0LL;
  }
  v7 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85A,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8000FFFFLL);
LABEL_54:
  v27 = 0;
  lambda_65bddec6c6f38403802d6e4c070e95ee_::operator()((__int64)v26);
  return v7;
}
