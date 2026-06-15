/*
 * XREFs of ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012C630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x18012975C (-AddHead@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AvoidEndpointPolicyRule::RuntimeClassInitialize(
        AvoidEndpointPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v3; // rsi
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  HRESULT v10; // eax
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, char *, __int64 *); // rdi
  __int64 v13; // r8
  _OWORD *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  LPVOID ppv; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v3 = a3;
  ppv = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)a3 + 2) != 1 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 20LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
      (const char *)v7);
    goto LABEL_14;
  }
  if ( *((_DWORD *)a3 + 1) >= 2u )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 23LL;
    goto LABEL_9;
  }
  v9 = 2LL;
  if ( (*((_BYTE *)a3 + 16) & 2) != 0 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 24LL;
    goto LABEL_9;
  }
  ppv = 0LL;
  v10 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 25LL;
    goto LABEL_9;
  }
  *((_WORD *)v3 + 137) = 0;
  v11 = ppv;
  v12 = *(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)ppv + 40LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v18);
  v6 = v12(v11, (char *)v3 + 20, &v18);
  if ( v6 >= 0 )
  {
    ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddHead(
      (__int64 *)this + 2,
      (__int64)a2,
      v13);
    v14 = (_OWORD *)((char *)this + 64);
    do
    {
      *v14 = *(_OWORD *)v3;
      v14[1] = *((_OWORD *)v3 + 1);
      v14[2] = *((_OWORD *)v3 + 2);
      v14[3] = *((_OWORD *)v3 + 3);
      v14[4] = *((_OWORD *)v3 + 4);
      v14[5] = *((_OWORD *)v3 + 5);
      v14[6] = *((_OWORD *)v3 + 6);
      v14 += 8;
      *(v14 - 1) = *((_OWORD *)v3 + 7);
      v3 = (struct _DynamicRoutingRule *)((char *)v3 + 128);
      --v9;
    }
    while ( v9 );
    *v14 = *(_OWORD *)v3;
    *((_DWORD *)v14 + 4) = *((_DWORD *)v3 + 4);
    v6 = 0;
  }
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v6;
}
