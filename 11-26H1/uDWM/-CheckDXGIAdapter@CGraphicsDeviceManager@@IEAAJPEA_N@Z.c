/*
 * XREFs of ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180053FCC
 * Callers:
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x180053F38 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180054480 (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter(CGraphicsDeviceManager *this, bool *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, GUID *, __int64); // r9
  __int64 v6; // r10
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  int (__fastcall ***v11)(_QWORD, GUID *, __int64); // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  int (__fastcall ***v14)(_QWORD, GUID *, __int64); // r9
  void *v15; // rdx
  __int64 v16; // rbx
  __int64 *v17; // rcx
  char v18; // si
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  void **v22; // rax
  HRESULT DXGIFactory1; // eax
  __int64 v24; // rax
  __int64 v25; // r10
  int (__fastcall *v26)(__int64, __int64, GUID *, __int64); // r11
  int v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[296]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+1E8h] [rbp+E8h]
  _BYTE v37[296]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v38; // [rsp+318h] [rbp+218h]
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  if ( a2 )
    *a2 = 0;
  v30 = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v30);
  v7 = v5(v6, &GUID_770aae78_f26f_4dba_a829_253c83d1b387, v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x118,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)v7,
      v27);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v8;
  }
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 312LL))(*((_QWORD *)this + 8)) >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 104LL))(v30) )
      goto LABEL_20;
    memset_0(v35, 0, 0x130uLL);
    v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), v35);
    v8 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x120,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v21,
        v27);
    }
    else
    {
      v31 = 0LL;
      v22 = (void **)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v31);
      DXGIFactory1 = CreateDXGIFactory1(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, v22);
      v8 = DXGIFactory1;
      if ( DXGIFactory1 >= 0 )
      {
        v32 = 0LL;
        v24 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v32);
        if ( v26(v25, v36, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, v24) >= 0 )
        {
          v18 = 1;
          v29 = 0LL;
          v19 = *v31;
          v29 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v19 + 56))(v31, 0LL, &v29) < 0
            || (memset_0(v37, 0, 0x130uLL),
                (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 64LL))(v29, v37) < 0)
            || v38 != v36 )
          {
            v28 = 0LL;
            v33 = 0LL;
            memset_0(v34, 0, sizeof(v34));
            v20 = *v32;
            v28 = 0LL;
            if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v20 + 56))(v32, 0LL, &v28) < 0
              || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 56LL))(v28, v34) < 0 )
            {
              v18 = 0;
            }
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v33);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v28);
          }
          if ( v29 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          if ( v18 )
          {
            v28 = 0LL;
            v29 = 0LL;
            v10 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v29);
            if ( (**v11)(v11, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v10) >= 0 )
            {
              v12 = v28;
              v28 = 0LL;
              if ( v12 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
              v13 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v28);
              if ( (**v14)(v14, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v13) >= 0 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 248LL))(v28, *((unsigned int *)this + 28));
                *((_DWORD *)this + 28) = 0;
                wil::details::ResetEvent(*((wil::details **)this + 10), v15);
                (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v29 + 240LL))(
                  v29,
                  *((_QWORD *)this + 10),
                  (char *)this + 112);
                v16 = *((_QWORD *)this + 5);
                v17 = v32;
                *((_QWORD *)this + 5) = v32;
                if ( v17 )
                  (*(void (__fastcall **)(__int64 *))(*v17 + 8))(v17);
                if ( v16 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              }
            }
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
        else
        {
          v18 = 0;
        }
        if ( v32 )
          (*(void (__fastcall **)(__int64 *))(*v32 + 16))(v32);
        if ( v31 )
          (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
        if ( !v18 )
          goto LABEL_5;
LABEL_20:
        if ( a2 )
          *a2 = 1;
        goto LABEL_6;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)DXGIFactory1,
        v27);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v31);
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v30);
    return v8;
  }
LABEL_5:
  CGraphicsDeviceManager::HandleGraphicsDeviceLost(this);
LABEL_6:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return 0LL;
}
