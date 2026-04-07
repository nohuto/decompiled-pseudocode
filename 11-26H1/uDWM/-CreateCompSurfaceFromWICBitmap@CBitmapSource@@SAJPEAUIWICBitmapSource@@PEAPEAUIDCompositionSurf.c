/*
 * XREFs of ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurface@@@Z @ 0x180068490
 * Callers:
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x18009AC84 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ @ 0x1800B5EAC (-SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBitmapSource::CreateCompSurfaceFromWICBitmap(
        struct IWICBitmapSource *a1,
        struct IDCompositionSurface **a2,
        __int64 a3,
        const char *a4)
{
  CGraphicsDeviceManager *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, __int64); // rbx
  __int64 (__fastcall *v14)(struct IDCompositionSurface *, _QWORD, GUID *, __int64); // rdi
  __int64 v15; // rax
  CGraphicsDeviceManager *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  CGraphicsDeviceManager *v21; // rbx
  CGraphicsDeviceManager *v23; // rbx
  int v24; // eax
  struct IDCompositionSurface *v25; // rax
  int *v26; // [rsp+20h] [rbp-59h]
  struct IDCompositionSurface *v27; // [rsp+40h] [rbp-39h] BYREF
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  int v29; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+54h] [rbp-25h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  CGraphicsDeviceManager *v32; // [rsp+60h] [rbp-19h] BYREF
  int v33[2]; // [rsp+68h] [rbp-11h] BYREF
  CGraphicsDeviceManager **v34; // [rsp+70h] [rbp-9h]
  __int64 *v35; // [rsp+78h] [rbp-1h]
  char v36; // [rsp+80h] [rbp+7h]
  __int64 v37; // [rsp+88h] [rbp+Fh]
  float v38; // [rsp+90h] [rbp+17h]
  float v39; // [rsp+94h] [rbp+1Bh]
  float v40[4]; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v27 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v6 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v7 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v6, (__int64)a2, a3, a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v7,
      (int)v26);
    v9 = v8;
    v10 = 457LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v9,
      (int)v26);
    goto LABEL_32;
  }
  if ( g_simulateDeviceLost )
    CGraphicsDeviceManager::SimulateDeviceLost(v6);
  v32 = v6;
  v11 = *((_QWORD *)v6 + 6);
  v29 = 0;
  v30 = 0;
  v12 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, int *, int *))a1->lpVtbl->GetSize)(a1, &v29, &v30);
  v8 = v12;
  if ( v12 < 0 )
  {
    v10 = 461LL;
LABEL_7:
    v9 = (unsigned int)v12;
    goto LABEL_8;
  }
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 24LL);
  v27 = 0LL;
  LODWORD(v26) = 1;
  v12 = v13(v11, (unsigned int)v29, (unsigned int)v30, 87LL);
  v8 = v12;
  if ( v12 < 0 )
  {
    v10 = 467LL;
    goto LABEL_7;
  }
  *(_QWORD *)v33 = 0LL;
  v14 = *(__int64 (__fastcall **)(struct IDCompositionSurface *, _QWORD, GUID *, __int64))(*(_QWORD *)v27 + 24LL);
  v28 = 0LL;
  v15 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v28);
  v26 = v33;
  v12 = v14(v27, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, v15);
  v8 = v12;
  if ( v12 < 0 )
  {
    v10 = 471LL;
    goto LABEL_7;
  }
  v16 = v32;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v32 + 3) + 32LL))(*((_QWORD *)v32 + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 9) + 24LL))(*((_QWORD *)v16 + 9));
  v34 = &v32;
  v35 = (__int64 *)&v27;
  v36 = 1;
  v17 = v28;
  v18 = v31;
  v31 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, __int64 *))(*(_QWORD *)v17 + 40LL))(
          v17,
          a1,
          0LL,
          &v31);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v40[0] = (float)v33[0];
    v40[1] = (float)v33[1];
    v40[2] = (float)v29 + (float)v33[0];
    v40[3] = (float)v30 + (float)v33[1];
    v37 = 0LL;
    v38 = (float)v29;
    v39 = (float)v30;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 624LL))(v28, 1LL);
    (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v28 + 208LL))(v28, v31, v40);
    v23 = v32;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v32 + 9) + 32LL))(*((_QWORD *)v32 + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v23 + 3) + 40LL))(*((_QWORD *)v23 + 3));
    v36 = 0;
    v24 = (*(__int64 (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v27 + 32LL))(v27);
    v8 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)(unsigned int)v24,
        0);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( v27 )
        (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v27 + 16LL))(v27);
      return v8;
    }
    v25 = v27;
    v27 = 0LL;
    *a2 = v25;
    v8 = 0;
LABEL_32:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v31);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v27);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E0,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)(unsigned int)v19,
    (int)v33);
  v21 = v32;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v32 + 9) + 32LL))(*((_QWORD *)v32 + 9));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v21 + 3) + 40LL))(*((_QWORD *)v21 + 3));
  (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v27 + 32LL))(v27);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v27 )
    (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v27 + 16LL))(v27);
  return v20;
}
