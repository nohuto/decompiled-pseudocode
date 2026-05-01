/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805109C8
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18008E1BC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x180510EF0 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_180510EF0.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180510FD0 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180165EF8 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180166600 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        _DWORD *a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _DWORD *v8; // rdi
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
  int (__fastcall *v29)(__int64, struct IApplicationViewTitlebarConfiguration **); // rbx
  CDesktopPositioner *v30; // rcx
  int fixed; // eax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  int v37; // ebx
  int v38; // edi
  unsigned int v39; // edx
  int v40; // r9d
  LONG right; // eax
  LONG bottom; // edx
  __int64 v44; // [rsp+20h] [rbp-B9h]
  __int64 v45; // [rsp+40h] [rbp-99h] BYREF
  struct IApplicationViewTitlebarConfiguration *v46; // [rsp+48h] [rbp-91h] BYREF
  __int64 v47; // [rsp+50h] [rbp-89h] BYREF
  __int64 v48; // [rsp+58h] [rbp-81h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v49; // [rsp+60h] [rbp-79h] BYREF
  __int64 v50; // [rsp+68h] [rbp-71h] BYREF
  int v51; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v52[3]; // [rsp+74h] [rbp-65h] BYREF
  RECT v53; // [rsp+80h] [rbp-59h] BYREF
  RECT v54; // [rsp+90h] [rbp-49h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-39h]
  RECT rc1; // [rsp+B0h] [rbp-29h] BYREF
  RECT rc2; // [rsp+C0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+3Fh]

  v8 = a3;
  *(_QWORD *)&v53.left = a3;
  *(_QWORD *)&v54.left = a1;
  v48 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v48);
  v11 = 0;
  if ( v48
    || (v12 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48),
        v13 = v12(a2, &v48),
        v14 = v13,
        v13 >= 0) )
  {
    v45 = 0LL;
    v15 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v45);
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
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
      goto LABEL_56;
    }
    v51 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 32LL))(v45, &v51);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 2669LL;
      goto LABEL_6;
    }
    if ( (unsigned int)(v51 - 2) > 1 )
    {
      v14 = -2147019873;
      v19 = 2147947423LL;
      v18 = 2672LL;
      goto LABEL_7;
    }
    rc1 = 0LL;
    if ( v51 == 2 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v45 + 24LL))(v45, &rc1);
      v14 = v17;
      if ( v17 < 0 )
      {
        v18 = 2678LL;
        goto LABEL_6;
      }
LABEL_23:
      v52[0] = 0;
      v47 = 0LL;
      v23 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v47);
      if ( v23(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v24) >= 0 )
      {
        v50 = 0LL;
        v25 = v47;
        v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
        v27 = v26(v25, &v50);
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
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
LABEL_27:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
          goto LABEL_8;
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v50 + 368LL))(v50, v52);
        v14 = v27;
        if ( v27 < 0 )
        {
          v28 = 2697LL;
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
        v8 = *(_DWORD **)&v53.left;
      }
      v46 = 0LL;
      if ( a5
        && (v29 = *(int (__fastcall **)(__int64, struct IApplicationViewTitlebarConfiguration **))(*(_QWORD *)a5 + 184LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46),
            v29(a5, &v46) < 0)
        && (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v30, a2, &v46),
            v14 = fixed,
            fixed < 0) )
      {
        v32 = 2703LL;
      }
      else
      {
        v55 = 0LL;
        LODWORD(v44) = 1;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 288) + 72LL))(
                  *(_QWORD *)(a1 + 288),
                  v48,
                  v52[0],
                  1LL);
        v14 = fixed;
        if ( fixed >= 0 )
        {
          v33 = *v8 - v55;
          v34 = DWORD2(v55) + v8[2];
          v35 = v8[1] - DWORD1(v55);
          v36 = v8[3] + HIDWORD(v55);
          v53 = rc1;
          v37 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc1, 4));
          v38 = _mm_cvtsi128_si32((__m128i)rc1);
          if ( (a4 & 4) != 0 )
          {
            v39 = v34 - v33;
            v40 = v36 - v35;
            if ( (a4 & 8) != 0 )
            {
              v39 -= v55 + DWORD2(v55);
              v40 -= DWORD1(v55) + HIDWORD(v55);
            }
            right = v38 + v39;
            v53.right = v38 + v39;
            bottom = v37 + v40;
            v53.bottom = v37 + v40;
          }
          else
          {
            bottom = v53.bottom;
            right = v53.right;
          }
          if ( (a4 & 1) != 0 )
          {
            if ( (a4 & 2) != 0 )
            {
              v35 += DWORD1(v55);
              v33 += v55;
            }
            *(_QWORD *)&v53.left = __PAIR64__(v35, v33);
            v53.right = v33 - v38 + right;
            v53.bottom = v35 - v37 + bottom;
          }
          rc2 = 0LL;
          fixed = CDesktopPositioner::_FixRectForWorkArea(*(__int64 *)&v54.left, a6, &v53.left, v48, v44, &rc2);
          v14 = fixed;
          if ( fixed >= 0 )
          {
            if ( v11 || !EqualRect(&rc1, &rc2) )
            {
              v54 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a5 + 56LL))(a5, &v54);
              v14 = fixed;
              if ( fixed < 0 )
              {
                v32 = 2777LL;
                goto LABEL_35;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v14 = fixed;
              if ( fixed < 0 )
              {
                v32 = 2780LL;
                goto LABEL_35;
              }
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
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
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
      goto LABEL_27;
    }
    if ( v51 != 3 )
      goto LABEL_23;
    v11 = 1;
    v49 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v20, a2, &v49);
    v14 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v49 + 56LL))(
                               v49,
                               &rc1);
      v14 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
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
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA64,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v13);
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48);
  return v14;
}
