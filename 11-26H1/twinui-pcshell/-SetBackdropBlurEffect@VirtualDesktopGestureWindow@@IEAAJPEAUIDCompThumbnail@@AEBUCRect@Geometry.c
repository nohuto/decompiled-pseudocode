/*
 * XREFs of ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180562180
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18055B9E0 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??1?$com_ptr_t@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18055C9AC (--1-$com_ptr_t@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@Uerr_returncode_po.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x180563C70 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall VirtualDesktopGestureWindow::SetBackdropBlurEffect(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        const struct Geometry::CRect *a3,
        float a4)
{
  int v6; // r12d
  int v7; // r13d
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, int *); // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // esi
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 **); // rdi
  __int64 (__fastcall **v22)(_QWORD, GUID *, __int64 **); // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int64, __int64); // r14
  __int64 v33; // rsi
  int v34; // eax
  __int64 (__fastcall **v35)(_QWORD, _QWORD, _QWORD); // rax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  int v47[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v48; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v51; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v52; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v54; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall ***v59)(_QWORD, GUID *, __int64 **); // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v61; // [rsp+98h] [rbp-70h] BYREF
  int v62; // [rsp+A0h] [rbp-68h]
  int v63; // [rsp+A4h] [rbp-64h]
  __int64 v64[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v65; // [rsp+B8h] [rbp-50h] BYREF
  int v66; // [rsp+C0h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v6 = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
  v62 = v6 / 2;
  v63 = v7 / 2;
  v64[0] = 0LL;
  v68 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  ActivationFactory = RoGetActivationFactory(v68, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, v64);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    *(_QWORD *)v47 = 0LL;
    v10 = v64[0];
    v11 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v64[0] + 48LL);
    *(_QWORD *)v47 = 0LL;
    v68 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v12 = v11(v10, v68, v47);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v12);
LABEL_5:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v47);
      goto LABEL_65;
    }
    v48 = 0LL;
    v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))v47)(
            *(_QWORD *)v47,
            &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2,
            &v48);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v13);
LABEL_8:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v48);
      goto LABEL_5;
    }
    v49 = 0LL;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v49);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x340,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
LABEL_11:
      wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(&v49);
      goto LABEL_8;
    }
    v15 = v49;
    v16 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
            (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v49 + 32),
            a4);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x341,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v16);
LABEL_64:
      wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>(&v49);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v48);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v47);
      v9 = v17;
      goto LABEL_65;
    }
    *(_DWORD *)(v15 + 80) = 1;
    *(_DWORD *)(v15 + 76) = 0;
    v18 = v48;
    if ( *(_QWORD **)(v15 + 64) != v48 )
    {
      v52 = v48;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
      v19 = *(_QWORD *)(v15 + 64);
      *(_QWORD *)(v15 + 64) = v18;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v52,
      v20);
    v51 = 0LL;
    v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))v52;
    v22 = (__int64 (__fastcall **)(_QWORD, GUID *, __int64 **))*v52;
    v51 = 0LL;
    v23 = ((__int64 (__fastcall **)(_QWORD *, GUID *, __int64 **))v22)[11](v52, (GUID *)v15, &v51);
    v9 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x348,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v23);
LABEL_19:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v51);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v52);
      goto LABEL_11;
    }
    v50 = 0LL;
    v24 = *v51;
    v50 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v24 + 48))(v51, &v50);
    v9 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v25);
LABEL_22:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
      goto LABEL_19;
    }
    v54 = 0LL;
    v26 = (**v21)(v21, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v54);
    v9 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v26);
LABEL_25:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
      goto LABEL_22;
    }
    v53 = 0LL;
    v27 = *v54;
    v53 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v27 + 64))(
            v54,
            &v53);
    v9 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x350,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v28);
LABEL_28:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
      goto LABEL_25;
    }
    v55 = 0LL;
    v29 = (**v53)(v53, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v55);
    v9 = v29;
    if ( v29 < 0 )
    {
      v30 = 850LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v29);
LABEL_32:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
      goto LABEL_28;
    }
    v31 = v50;
    v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 56LL);
    v33 = v55;
    v68 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v29 = v32(v31, v68, v33);
    v9 = v29;
    v17 = 0;
    if ( v29 < 0 )
    {
      v30 = 851LL;
      goto LABEL_31;
    }
    v57 = 0LL;
    v34 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v50)(
            v50,
            &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
            &v57);
    v9 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v34);
LABEL_37:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
      goto LABEL_32;
    }
    v56 = 0LL;
    v35 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v21;
    v56 = 0LL;
    v36 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **), __int64 *))v35[22])(v21, &v56);
    v9 = v36;
    if ( v36 < 0 )
    {
      v37 = 857LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v36);
LABEL_41:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
      goto LABEL_37;
    }
    v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 56LL))(v56, v57);
    v9 = v36;
    if ( v36 < 0 )
    {
      v37 = 858LL;
      goto LABEL_40;
    }
    v58 = 0LL;
    v38 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v56)(
            v56,
            &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
            &v58);
    v9 = v38;
    if ( v38 >= 0 )
    {
      v38 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v58 + 288LL))(
              v58,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v6), (__m128)COERCE_UNSIGNED_INT((float)v7)).m128_u64[0]);
      v9 = v38;
      if ( v38 >= 0 )
      {
        v65 = _mm_unpacklo_ps(
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)v62), (__m128)_xmm),
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)v63), (__m128)_xmm)).m128_u64[0];
        v66 = 0;
        v38 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v58 + 168LL))(v58, &v65);
        v9 = v38;
        if ( v38 >= 0 )
        {
          v40 = *(_QWORD *)a2;
          v59 = 0LL;
          v41 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v40 + 104))(
                  a2,
                  &v59);
          v9 = v41;
          if ( v41 >= 0 )
          {
            v61 = 0LL;
            v42 = (**v59)(v59, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v61);
            v9 = v42;
            if ( v42 >= 0 )
            {
              v60 = 0LL;
              v43 = *v61;
              v60 = 0LL;
              v44 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v43 + 360))(v61, &v60);
              v9 = v44;
              if ( v44 >= 0 )
              {
                v44 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 72LL))(v60, v58);
                v9 = v44;
                if ( v44 >= 0 )
                {
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v51);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v52);
                  goto LABEL_64;
                }
                v45 = 874LL;
              }
              else
              {
                v45 = 873LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v45,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v44);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x367,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v42);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x365,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v41);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
          goto LABEL_47;
        }
        v39 = 865LL;
      }
      else
      {
        v39 = 864LL;
      }
    }
    else
    {
      v39 = 861LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v38);
LABEL_47:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x339,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_65:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v64);
  return v9;
}
