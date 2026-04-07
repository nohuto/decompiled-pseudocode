/*
 * XREFs of ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180046334
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x1800469C8 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800469FC (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800A6D0C (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAnimationEngine::AddToStoryboard(
        __int64 a1,
        struct IUIAnimationStoryboard2 *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        unsigned int a10,
        struct TA_TIMINGFUNCTION *a11,
        unsigned int a12,
        double *a13,
        double *a14,
        unsigned int a15)
{
  struct IUIAnimationStoryboard2 *v15; // rdi
  int TransitionVisualSetIndex; // eax
  __int64 v18; // r11
  double *v19; // rsi
  double v20; // xmm6_8
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  struct IUIAnimationTransitionLibrary2 **v24; // r15
  CThemeAnimationScheduleHelper *v25; // rcx
  double v26; // xmm6_8
  int v27; // eax
  int v28; // eax
  struct IUIAnimationTransition2 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct IUIAnimationTransition2 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct IUIAnimationTransition2 *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  struct IUIAnimationTransition2 *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct IUIAnimationTransitionLibrary2 *v42; // rdi
  HRESULT (__stdcall *CreateConstantTransition)(IUIAnimationTransitionLibrary2 *, UI_ANIMATION_SECONDS, IUIAnimationTransition2 **); // rbx
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  struct IUIAnimationTransition2 *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct IUIAnimationTransition2 *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct IUIAnimationTransition2 *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct IUIAnimationTransitionLibrary2 *v56; // rdi
  HRESULT (__stdcall *CreateInstantaneousVectorTransition)(IUIAnimationTransitionLibrary2 *, const DOUBLE *, UINT, IUIAnimationTransition2 **); // rbx
  int v58; // eax
  __int64 v59; // rdx
  int v60; // [rsp+28h] [rbp-89h]
  int v61; // [rsp+28h] [rbp-89h]
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v62; // [rsp+80h] [rbp-31h]
  char v63; // [rsp+88h] [rbp-29h]
  struct IUIAnimationTransition2 *v64; // [rsp+90h] [rbp-21h] BYREF
  __int64 v65; // [rsp+98h] [rbp-19h] BYREF
  __int64 v66[3]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]

  v15 = a2;
  v66[0] = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex((CAnimationEngine *)a1, a3);
  if ( TransitionVisualSetIndex < 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v66);
    return 2147500037LL;
  }
  _mm_lfence();
  v19 = *(double **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                       + 8LL * (unsigned int)TransitionVisualSetIndex)
                                           + 40LL)
                               + 8 * v18)
                   + 8LL * a5
                   + 8);
  v63 = 0;
  if ( !*(_QWORD *)v19 )
  {
    v20 = 0.0;
    if ( a13 && a15 < a10 )
    {
      v20 = a8[a15];
      a8[a15] = *a13;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, double *))(**(_QWORD **)(a1 + 8) + 24LL))(
            *(_QWORD *)(a1 + 8),
            a8,
            a10,
            v19);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v21,
        v60);
      v53 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        ((void (__fastcall *)(struct IUIAnimationTransition2 *))v53->lpVtbl->Release)(v53);
      }
      v54 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      }
      v55 = v66[0];
      if ( v66[0] )
      {
        v66[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      return v22;
    }
    v63 = 1;
    if ( a13 && a15 < a10 )
      a8[a15] = v20;
    v15 = a2;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v19 + 192LL))(*(_QWORD *)v19, 0LL, a12);
  v22 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
      (const char *)(unsigned int)v23,
      v60);
    v39 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      ((void (__fastcall *)(struct IUIAnimationTransition2 *))v39->lpVtbl->Release)(v39);
    }
    v40 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = v66[0];
    if ( v66[0] )
    {
      v66[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    return v22;
  }
  v24 = (struct IUIAnimationTransitionLibrary2 **)(a1 + 16);
  if ( a6 > v19[1] )
  {
    v42 = *v24;
    CreateConstantTransition = (*v24)->lpVtbl->CreateConstantTransition;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v66);
    v45 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionLibrary2 *, __int64, __int64 *))CreateConstantTransition)(
            v42,
            v44,
            v66);
    v22 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D1,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v45,
        v60);
      v47 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        ((void (__fastcall *)(struct IUIAnimationTransition2 *))v47->lpVtbl->Release)(v47);
      }
      v48 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v66[0];
      if ( v66[0] )
      {
        v66[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      return v22;
    }
    v15 = a2;
    v46 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
            a2,
            *(_QWORD *)v19,
            v66[0]);
    v22 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v46,
        v60);
      v50 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        ((void (__fastcall *)(struct IUIAnimationTransition2 *))v50->lpVtbl->Release)(v50);
      }
      v51 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = v66[0];
      if ( v66[0] )
      {
        v66[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      return v22;
    }
    v19[1] = a6;
  }
  v25 = (CThemeAnimationScheduleHelper *)(a1 + 16);
  if ( !v63 )
  {
    v56 = *v24;
    CreateInstantaneousVectorTransition = (*v24)->lpVtbl->CreateInstantaneousVectorTransition;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    v58 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionLibrary2 *, double *, _QWORD, __int64 *))CreateInstantaneousVectorTransition)(
            v56,
            a8,
            a10,
            &v65);
    v22 = v58;
    if ( v58 >= 0 )
    {
      v15 = a2;
      v58 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
              a2,
              *(_QWORD *)v19,
              v65);
      v22 = v58;
      if ( v58 >= 0 )
      {
        v25 = (CThemeAnimationScheduleHelper *)(a1 + 16);
        goto LABEL_10;
      }
      v59 = 1243LL;
    }
    else
    {
      v59 = 1242LL;
    }
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v59,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
      (const char *)(unsigned int)v58,
      v60);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v66);
    return v22;
  }
LABEL_10:
  if ( (a13 || (v24 = (struct IUIAnimationTransitionLibrary2 **)v25, a14)) && *(_DWORD *)a11 == 1 )
  {
    v26 = a7;
    v58 = CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
            v25,
            v15,
            *(struct IUIAnimationVariable2 **)v19,
            *v24,
            a7,
            a8,
            a9,
            a10,
            a13,
            a14,
            a15,
            *((float *)a11 + 1),
            *((float *)a11 + 2),
            *((float *)a11 + 3),
            *((float *)a11 + 4),
            v62);
    v22 = v58;
    if ( v58 < 0 )
    {
      v59 = 1272LL;
      goto LABEL_78;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v64);
    v26 = a7;
    v27 = CAnimationEngine::CreateAnimationTransition((CAnimationEngine *)a1, a3, a11, a7, a9, a10, &v64);
    v22 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E1,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v27,
        v61);
      v33 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        ((void (__fastcall *)(struct IUIAnimationTransition2 *))v33->lpVtbl->Release)(v33);
      }
      v34 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v35 = v66[0];
      if ( v66[0] )
      {
        v66[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      return v22;
    }
    v28 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, struct IUIAnimationTransition2 *))v15->lpVtbl->AddTransition)(
            v15,
            *(_QWORD *)v19,
            v64);
    v22 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v28,
        v61);
      v36 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        ((void (__fastcall *)(struct IUIAnimationTransition2 *))v36->lpVtbl->Release)(v36);
      }
      v37 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = v66[0];
      if ( v66[0] )
      {
        v66[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      return v22;
    }
  }
  v19[1] = v26 + v19[1];
  v29 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    ((void (__fastcall *)(struct IUIAnimationTransition2 *))v29->lpVtbl->Release)(v29);
  }
  v30 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v66[0];
  if ( v66[0] )
  {
    v66[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return 0LL;
}
