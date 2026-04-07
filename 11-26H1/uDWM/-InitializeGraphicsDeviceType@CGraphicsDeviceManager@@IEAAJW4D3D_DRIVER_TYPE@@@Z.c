/*
 * XREFs of ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00
 * Callers:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180089634 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UID3D11Device4@@@?$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID3D11Device4@@@Z @ 0x18008D268 (--$query_to@UID3D11Device4@@@-$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
HRESULT __fastcall CGraphicsDeviceManager::InitializeGraphicsDeviceType(wil::details **this, enum D3D_DRIVER_TYPE a2)
{
  ID3D11Device **ppDevice; // rsi
  HRESULT result; // eax
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64); // r9
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, __int64); // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, GUID *, __int64); // r9
  __int64 v19; // r10
  int v20; // eax
  void *v21; // rdx
  __int64 v22; // rdx
  void *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rdi
  void **v27; // rax
  HRESULT Factory; // eax
  __int64 v29; // rax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64); // r9
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64, wil::details **); // rbx
  __int64 v33; // rax
  __int64 (__fastcall *v34)(__int64, GUID *, __int64); // r9
  __int64 v35; // r10
  int v36; // eax
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64); // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, wil::details *, wil::details **); // rdi
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, wil::details *, wil::details **); // rsi
  int v45; // eax
  int pFeatureLevels; // [rsp+20h] [rbp-50h]
  __int64 v47; // [rsp+50h] [rbp-20h] BYREF
  __int64 v48; // [rsp+58h] [rbp-18h] BYREF
  __int64 v49; // [rsp+60h] [rbp-10h] BYREF
  __int64 v50; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v53; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v54; // [rsp+C8h] [rbp+58h] BYREF

  pFeatureLevel = 0;
  ppDevice = (ID3D11Device **)(this + 8);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 8);
  result = D3D11CreateDevice(0LL, a2, 0LL, 0x20u, 0LL, 0, 7u, ppDevice, &pFeatureLevel, 0LL);
  if ( result >= 0 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 9);
    v6 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 9));
    v8 = (**v7)(v7, &GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0, v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v8,
        pFeatureLevels);
      return v9;
    }
    v49 = 0LL;
    v10 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v49);
    v12 = (**v11)(v11, &GUID_77db970f_6276_48ba_ba28_070143b4392c, v10);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 124LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v12,
        pFeatureLevels);
LABEL_46:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v49);
      return v9;
    }
    v14 = v49;
    v15 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v49 + 48LL);
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(this + 5);
    v16 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 5));
    v12 = v15(v14, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, v16);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 127LL;
      goto LABEL_9;
    }
    v53 = 0LL;
    v17 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v53);
    v20 = v18(v19, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v17);
    v9 = v20;
    if ( v20 < 0 )
    {
      v22 = 130LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v20,
        pFeatureLevels);
LABEL_45:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v53);
      goto LABEL_46;
    }
    wil::details::ResetEvent(this[10], v21);
    v20 = (*(__int64 (__fastcall **)(__int64, wil::details *, char *))(*(_QWORD *)v53 + 240LL))(
            v53,
            this[10],
            (char *)this + 112);
    v9 = v20;
    if ( v20 < 0 )
    {
      v22 = 133LL;
      goto LABEL_12;
    }
    wil::details::ResetEvent(this[11], v23);
    v54 = 0LL;
    v24 = wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::query_to<ID3D11Device4>(ppDevice, &v54);
    v9 = v24;
    if ( v24 < 0 )
    {
      v25 = 137LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v24,
        pFeatureLevels);
LABEL_44:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v54);
      goto LABEL_45;
    }
    v24 = (*(__int64 (__fastcall **)(__int64, wil::details *, char *))(*(_QWORD *)v54 + 520LL))(
            v54,
            this[11],
            (char *)this + 116);
    v9 = v24;
    if ( v24 < 0 )
    {
      v25 = 138LL;
      goto LABEL_17;
    }
    v26 = (__int64 *)(this + 2);
    if ( !this[2] )
    {
      *v26 = 0LL;
      v27 = (void **)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 2));
      Factory = D2D1CreateFactory(
                  D2D1_FACTORY_TYPE_MULTI_THREADED,
                  &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                  0LL,
                  v27);
      v9 = Factory;
      if ( Factory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)Factory,
          pFeatureLevels);
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        if ( v53 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        return v9;
      }
    }
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 3);
    v29 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 3));
    v24 = (**v30)(v30, &GUID_31e6e7bc_e0ff_4d46_8c64_a0a8c41c15d3, v29);
    v9 = v24;
    if ( v24 < 0 )
    {
      v25 = 145LL;
      goto LABEL_17;
    }
    v31 = *v26;
    v32 = *(__int64 (__fastcall **)(__int64, __int64, wil::details **))(*(_QWORD *)v31 + 136LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 4);
    v24 = v32(v31, v49, this + 4);
    v9 = v24;
    if ( v24 < 0 )
    {
      v25 = 147LL;
      goto LABEL_17;
    }
    v47 = 0LL;
    v33 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v47);
    v36 = v34(v35, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, v33);
    v9 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v36,
        pFeatureLevels);
LABEL_43:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v47);
      goto LABEL_44;
    }
    v48 = 0LL;
    v37 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v48);
    v39 = (**v38)(v38, &GUID_75f6468d_1b8e_447c_9bc6_75fea80b5b25, v37);
    v9 = v39;
    if ( v39 < 0 )
    {
      v40 = 153LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v39,
        pFeatureLevels);
LABEL_42:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v48);
      goto LABEL_43;
    }
    v41 = v48;
    v42 = *(__int64 (__fastcall **)(__int64, wil::details *, wil::details **))(*(_QWORD *)v48 + 56LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 6);
    v39 = v42(v41, this[4], this + 6);
    v9 = v39;
    if ( v39 < 0 )
    {
      v40 = 154LL;
      goto LABEL_37;
    }
    v50 = 0LL;
    v43 = v47;
    v44 = *(__int64 (__fastcall **)(__int64, wil::details *, wil::details **))(*(_QWORD *)v47 + 40LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(this + 7);
    v45 = v44(v43, this[6], this + 7);
    v9 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v45,
        pFeatureLevels);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v50);
      goto LABEL_42;
    }
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    return 0;
  }
  return result;
}
