/*
 * XREFs of ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x18053E330
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA78 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180537C30 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??1?$com_ptr_t@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180538BA8 (--1-$com_ptr_t@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@Uerr_returncode_po.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x18053FE60 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall VirtualDesktopGestureWindow::SetBackdropBlurEffect(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        const struct Geometry::CRect *a3,
        float a4)
{
  int v6; // eax
  __m128 v7; // xmm9
  int v8; // r8d
  __m128 v9; // xmm10
  __m128 v10; // xmm6
  __m128 v11; // xmm7
  int ActivationFactory; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, int *); // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // esi
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 **); // rdi
  __int64 (__fastcall **v26)(_QWORD, GUID *, __int64 **); // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, __int64, __int64); // r14
  __int64 v37; // rsi
  int v38; // eax
  __int64 (__fastcall **v39)(_QWORD, _QWORD, _QWORD); // rax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  int v52[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v53; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v56; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v59; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall ***v64)(_QWORD, GUID *, __int64 **); // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v66; // [rsp+98h] [rbp-70h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-60h] BYREF
  int v69; // [rsp+B0h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v6 = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  v7 = (__m128)COERCE_UNSIGNED_INT((float)v6);
  v8 = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
  v9 = (__m128)COERCE_UNSIGNED_INT((float)v8);
  v10 = (__m128)COERCE_UNSIGNED_INT((float)(v6 / 2));
  v11 = (__m128)COERCE_UNSIGNED_INT((float)(v8 / 2));
  v67 = 0LL;
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  ActivationFactory = RoGetActivationFactory(v71, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v67);
  v13 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    *(_QWORD *)v52 = 0LL;
    v14 = v67;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v67 + 48LL);
    *(_QWORD *)v52 = 0LL;
    v71 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v16 = v15(v14, v71, v52);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v16);
LABEL_5:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v52);
      goto LABEL_64;
    }
    v53 = 0LL;
    v17 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))v52)(
            *(_QWORD *)v52,
            &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2,
            &v53);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v17);
LABEL_8:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
      goto LABEL_5;
    }
    v54 = 0LL;
    v18 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v54);
    v13 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x340,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v18);
LABEL_11:
      wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(&v54);
      goto LABEL_8;
    }
    v19 = v54;
    v20 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
            (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v54 + 32),
            a4);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x341,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(&v54);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v52);
      v13 = v21;
      goto LABEL_64;
    }
    *(_DWORD *)(v19 + 80) = 1;
    *(_DWORD *)(v19 + 76) = 0;
    v22 = v53;
    if ( *(_QWORD **)(v19 + 64) != v53 )
    {
      v57 = v53;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v57);
      v23 = *(_QWORD *)(v19 + 64);
      *(_QWORD *)(v19 + 64) = v22;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v57,
      v24);
    v56 = 0LL;
    v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))v57;
    v26 = (__int64 (__fastcall **)(_QWORD, GUID *, __int64 **))*v57;
    v56 = 0LL;
    v27 = ((__int64 (__fastcall **)(_QWORD *, GUID *, __int64 **))v26)[11](v57, (GUID *)v19, &v56);
    v13 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x348,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v27);
LABEL_19:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
      goto LABEL_11;
    }
    v55 = 0LL;
    v28 = *v56;
    v55 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v28 + 48))(v56, &v55);
    v13 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v29);
LABEL_22:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
      goto LABEL_19;
    }
    v59 = 0LL;
    v30 = (**v25)(v25, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v59);
    v13 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v30);
LABEL_25:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
      goto LABEL_22;
    }
    v58 = 0LL;
    v31 = *v59;
    v58 = 0LL;
    v32 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v31 + 64))(
            v59,
            &v58);
    v13 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x350,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v32);
LABEL_28:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
      goto LABEL_25;
    }
    v60 = 0LL;
    v33 = (**v58)(v58, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v60);
    v13 = v33;
    if ( v33 < 0 )
    {
      v34 = 850LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v33);
LABEL_32:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
      goto LABEL_28;
    }
    v35 = v55;
    v36 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v55 + 56LL);
    v37 = v60;
    v71 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v33 = v36(v35, v71, v37);
    v13 = v33;
    if ( v33 < 0 )
    {
      v34 = 851LL;
      goto LABEL_31;
    }
    v62 = 0LL;
    v38 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v55)(
            v55,
            &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
            &v62);
    v13 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v38);
LABEL_37:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v62);
      goto LABEL_32;
    }
    v61 = 0LL;
    v39 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v25;
    v61 = 0LL;
    v40 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **), __int64 *))v39[22])(v25, &v61);
    v13 = v40;
    if ( v40 < 0 )
    {
      v41 = 857LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v41,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v40);
LABEL_41:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v61);
      goto LABEL_37;
    }
    v40 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v61 + 56LL))(v61, v62);
    v13 = v40;
    if ( v40 < 0 )
    {
      v41 = 858LL;
      goto LABEL_40;
    }
    v63 = 0LL;
    v42 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v61)(
            v61,
            &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
            (__int64 *)&v63);
    v13 = v42;
    if ( v42 >= 0 )
    {
      v42 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v63 + 288))(
              v63,
              _mm_unpacklo_ps(v7, v9).m128_u64[0]);
      v13 = v42;
      if ( v42 >= 0 )
      {
        v44 = *v63;
        v68 = _mm_unpacklo_ps(_mm_xor_ps(v10, (__m128)_xmm), _mm_xor_ps(v11, (__m128)_xmm)).m128_u64[0];
        v69 = 0;
        v42 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(v44 + 168))(v63, &v68);
        v13 = v42;
        if ( v42 >= 0 )
        {
          v45 = *(_QWORD *)a2;
          v64 = 0LL;
          v46 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v45 + 104))(
                  a2,
                  &v64);
          v13 = v46;
          if ( v46 >= 0 )
          {
            v66 = 0LL;
            v47 = (**v64)(v64, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v66);
            v13 = v47;
            if ( v47 >= 0 )
            {
              v65 = 0LL;
              v48 = *v66;
              v65 = 0LL;
              v49 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v48 + 360))(v66, &v65);
              v13 = v49;
              if ( v49 >= 0 )
              {
                v49 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 72LL))(v65, v63);
                v13 = v49;
                if ( v49 >= 0 )
                {
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v65);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v66);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v64);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v63);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v61);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v62);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
                  wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(&v54);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v52);
                  v13 = 0;
                  goto LABEL_64;
                }
                v50 = 874LL;
              }
              else
              {
                v50 = 873LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v50,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v49);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v65);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x367,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v47);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v66);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x365,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v46);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v64);
          goto LABEL_47;
        }
        v43 = 865LL;
      }
      else
      {
        v43 = 864LL;
      }
    }
    else
    {
      v43 = 861LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v42);
LABEL_47:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v63);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x339,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_64:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v67);
  return v13;
}
