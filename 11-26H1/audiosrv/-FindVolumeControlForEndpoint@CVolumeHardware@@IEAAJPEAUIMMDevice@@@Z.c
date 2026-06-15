/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@@Z @ 0x180117934
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180053388 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _lambda_110eb6d0a144432e2d69846a52ab523e_::operator() @ 0x180117674 (_lambda_110eb6d0a144432e2d69846a52ab523e_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(CVolumeHardware *this, struct IMMDevice *a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int *v9; // rdi
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 *v19; // [rsp+98h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      this);
  }
  if ( !a2 )
    return 2147500035LL;
  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x540,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v6);
LABEL_30:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return v7;
  }
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
         v21,
         &PKEY_Endpoint_HasHardwareVolume,
         pvar);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x543,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v8);
LABEL_29:
    PropVariantClear(pvar);
    goto LABEL_30;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) == 524 && (v9 = v17) != 0LL && *v17 )
  {
    v19 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned int *, __int64 **))GetDevice)(
            g_DeviceEnumerator,
            v9 + 1,
            &v19);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x552,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v11);
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      goto LABEL_29;
    }
    v20 = 0LL;
    v12 = *v19;
    v20 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
            v19,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            23LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 1365LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      goto LABEL_28;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v20 + 56LL))(v20, *v9, (char *)this + 248);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 1367LL;
      goto LABEL_27;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
        this);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 31) + 104LL))(
            *((_QWORD *)this + 31),
            23LL,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 256);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 1370LL;
      goto LABEL_27;
    }
    v15[0] = &v19;
    v15[1] = this;
    lambda_110eb6d0a144432e2d69846a52ab523e_::operator()((__int64)v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return 0LL;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return 2147943568LL;
  }
}
