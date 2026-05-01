/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804EF3A4
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180075A8C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804EF8F4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1804EF8F4.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EF9D0 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180114160 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180115BDC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116E14 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        LONG *a3,
        char a4,
        __int64 *a5,
        int a6,
        __int64 a7)
{
  __int64 v10; // rdi
  char v11; // r12
  __int64 (__fastcall *v12)(struct IApplicationView *, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *v15)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  CDesktopPositioner *v20; // rcx
  int FullPositionSnapshot; // eax
  __int64 v22; // rdx
  int (__fastcall *v23)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rdx
  int (__fastcall *v29)(__int64 *, struct IApplicationViewTitlebarConfiguration **); // rbx
  CDesktopPositioner *v30; // rcx
  int fixed; // eax
  __int64 v32; // rdx
  int v33; // ebx
  LONG v34; // r8d
  int v35; // ecx
  int v36; // edi
  int v37; // r11d
  int v38; // edx
  int v39; // r10d
  int v40; // r9d
  int v41; // ecx
  int v42; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  LONG v45; // r8d
  int v46; // eax
  __int64 v47; // rax
  __int64 v49; // [rsp+20h] [rbp-D9h]
  __int64 v50; // [rsp+40h] [rbp-B9h] BYREF
  struct IApplicationViewTitlebarConfiguration *v51; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v52; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A1h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v54; // [rsp+60h] [rbp-99h] BYREF
  __int64 v55; // [rsp+68h] [rbp-91h] BYREF
  int v56; // [rsp+70h] [rbp-89h] BYREF
  unsigned int v57[3]; // [rsp+74h] [rbp-85h] BYREF
  RECT v58; // [rsp+80h] [rbp-79h] BYREF
  int v59; // [rsp+90h] [rbp-69h]
  int v60; // [rsp+A0h] [rbp-59h]
  __int64 v61; // [rsp+B0h] [rbp-49h]
  __int128 v62; // [rsp+B8h] [rbp-41h]
  RECT rc1; // [rsp+D0h] [rbp-29h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v10 = a1;
  v61 = a1;
  v53 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v53);
  v11 = 0;
  if ( v53
    || (v12 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53),
        v13 = v12(a2, &v53),
        v14 = v13,
        v13 >= 0) )
  {
    v50 = 0LL;
    v15 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v50);
    v17 = v15(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v16);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 2666LL;
LABEL_6:
      v19 = (unsigned int)v17;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v19);
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      goto LABEL_56;
    }
    v56 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v50 + 32LL))(v50, &v56);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 2669LL;
      goto LABEL_6;
    }
    if ( (unsigned int)(v56 - 2) > 1 )
    {
      v14 = -2147019873;
      v19 = 2147947423LL;
      v18 = 2672LL;
      goto LABEL_7;
    }
    rc1 = 0LL;
    if ( v56 == 2 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v50 + 24LL))(v50, &rc1);
      v14 = v17;
      if ( v17 < 0 )
      {
        v18 = 2678LL;
        goto LABEL_6;
      }
LABEL_23:
      v57[0] = 0;
      v52 = 0LL;
      v23 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v52);
      if ( v23(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v24) >= 0 )
      {
        v55 = 0LL;
        v25 = v52;
        v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
        v27 = v26(v25, &v55);
        v14 = v27;
        if ( v27 < 0 )
        {
          v28 = 2696LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v27);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
LABEL_27:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
          goto LABEL_8;
        }
        v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 368LL))(v55, v57);
        v14 = v27;
        if ( v27 < 0 )
        {
          v28 = 2697LL;
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
        v10 = v61;
      }
      v51 = 0LL;
      if ( a5
        && (v29 = *(int (__fastcall **)(__int64 *, struct IApplicationViewTitlebarConfiguration **))(*a5 + 184),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51),
            v29(a5, &v51) < 0)
        && (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v30, a2, &v51),
            v14 = fixed,
            fixed < 0) )
      {
        v32 = 2703LL;
      }
      else
      {
        v62 = 0LL;
        LODWORD(v49) = 1;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v10 + 288) + 72LL))(
                  *(_QWORD *)(v10 + 288),
                  v53,
                  v57[0],
                  1LL);
        v14 = fixed;
        if ( fixed >= 0 )
        {
          v33 = v62;
          v34 = *a3 - v62;
          *a3 = v34;
          v35 = a3[2] + DWORD2(v62);
          v36 = DWORD1(v62);
          v37 = a3[1] - DWORD1(v62);
          a3[1] = v37;
          v38 = a3[3] + HIDWORD(v62);
          v58 = rc1;
          v39 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc1, 4));
          v59 = v39;
          v40 = _mm_cvtsi128_si32((__m128i)rc1);
          v60 = v40;
          if ( (a4 & 4) != 0 )
          {
            v41 = v35 - v34;
            v42 = v38 - v37;
            if ( (a4 & 8) != 0 )
            {
              v41 -= v33 + DWORD2(v62);
              v42 -= v36 + HIDWORD(v62);
            }
            right = v41 + v40;
            v58.right = right;
            bottom = v42 + v39;
            v58.bottom = bottom;
          }
          else
          {
            bottom = v58.bottom;
            right = v58.right;
          }
          if ( (a4 & 1) != 0 )
          {
            if ( (a4 & 2) != 0 )
            {
              *a3 = v33 + v34;
              a3[1] = v36 + v37;
            }
            v45 = a3[1];
            v46 = *a3 - v60;
            v58.left = *a3;
            v58.right = v46 + right;
            v58.bottom = v45 - v59 + bottom;
            v58.top = v45;
          }
          rc2 = 0LL;
          fixed = CDesktopPositioner::_FixRectForWorkArea(v61, a6, &v58.left, v53, v49, &rc2);
          v14 = fixed;
          if ( fixed >= 0 )
          {
            if ( v11 || !EqualRect(&rc1, &rc2) )
            {
              v47 = *a5;
              v58 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v47 + 56))(a5, &v58);
              v14 = fixed;
              if ( fixed < 0 )
              {
                v32 = 2777LL;
                goto LABEL_35;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v14 = fixed;
              if ( fixed < 0 )
              {
                v32 = 2780LL;
                goto LABEL_35;
              }
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
            v14 = 0;
            goto LABEL_56;
          }
          v32 = 2759LL;
        }
        else
        {
          v32 = 2713LL;
        }
      }
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
      goto LABEL_27;
    }
    if ( v56 != 3 )
      goto LABEL_23;
    v11 = 1;
    v54 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v20, a2, &v54);
    v14 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v54 + 56LL))(
                               v54,
                               &rc1);
      v14 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
        goto LABEL_23;
      }
      v22 = 2688LL;
    }
    else
    {
      v22 = 2687LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA64,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v13);
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
  return v14;
}
