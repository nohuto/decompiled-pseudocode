/*
 * XREFs of ?OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18012C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AvoidEndpointPolicyRule::OnRuleOperation(__int64 a1, const wchar_t *a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, __int64, __int64 *); // rdi
  LPVOID v13; // rbx
  __int64 (__fastcall *v14)(LPVOID, const wchar_t *, __int64 *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD **); // rdi
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  PROPVARIANT v24[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v6 = a5;
  *a5 = 1;
  if ( !a3 )
  {
    if ( a4 == 1 || wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
      return 0LL;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v7 = a1 + 84;
    if ( wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
    {
      v20 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      a5 = 0LL;
      *(_OWORD *)v24 = 0LL;
      v25 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v23 = 0LL;
      ppv = 0LL;
      v8 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v11 = ppv;
        v12 = *(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v20);
        v8 = v12(v11, v7, &v20);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v13 = ppv;
          v14 = *(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 40LL);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v19);
          v8 = v14(v13, a2, &v19);
          v9 = v8;
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v18);
            v9 = v8;
            if ( v8 >= 0 )
            {
              v15 = v19;
              v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD **))(*(_QWORD *)v19 + 32LL);
              if ( a5 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a5 + 16LL))(a5);
              v8 = v16(v15, 0LL, &a5);
              v9 = v8;
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
                       v18,
                       &DEVPKEY_Device_ContainerId,
                       v24);
                v9 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(_DWORD *, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
                         a5,
                         &DEVPKEY_Device_ContainerId,
                         pvar);
                  v9 = v8;
                  if ( v8 >= 0 )
                  {
                    if ( LOWORD(v24[0]) == 72
                      && LOWORD(pvar[0]) == 72
                      && (*(_QWORD *)v24[1] || *((_QWORD *)v24[1] + 1) != -1LL)
                      && *(_QWORD *)v24[1] == *(_QWORD *)pvar[1]
                      && *((_QWORD *)v24[1] + 1) == *((_QWORD *)pvar[1] + 1) )
                    {
                      *v6 = 2;
                    }
                    PropVariantClear(pvar);
                    PropVariantClear(v24);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
                    return 0LL;
                  }
                  v10 = 96LL;
                }
                else
                {
                  v10 = 95LL;
                }
              }
              else
              {
                v10 = 94LL;
              }
            }
            else
            {
              v10 = 93LL;
            }
          }
          else
          {
            v10 = 92LL;
          }
        }
        else
        {
          v10 = 91LL;
        }
      }
      else
      {
        v10 = 87LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
        (const char *)(unsigned int)v8);
      PropVariantClear(pvar);
      PropVariantClear(v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      return v9;
    }
LABEL_7:
    *v6 = 2;
  }
  return 0LL;
}
