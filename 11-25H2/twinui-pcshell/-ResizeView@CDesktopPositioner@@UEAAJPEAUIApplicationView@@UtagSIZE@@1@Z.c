/*
 * XREFs of ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804EFEF0
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180114F88 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804F01B0 (-ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804F01C0 (-ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180114160 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180115BDC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18011691C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180116BF4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::ResizeView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  ApplicationViewOperation *v7; // rbx
  unsigned int LastError; // esi
  __int64 (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rsi
  __int64 *v10; // rax
  int fixed; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r15
  CDesktopPositioner *v15; // rcx
  int FullPositionSnapshot; // eax
  __int64 v17; // rdx
  const char *v18; // r9
  __int64 v20; // [rsp+20h] [rbp-49h]
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v22; // [rsp+38h] [rbp-31h] BYREF
  int v23; // [rsp+40h] [rbp-29h] BYREF
  ApplicationViewOperation *v24; // [rsp+48h] [rbp-21h] BYREF
  struct tagSIZE v25; // [rsp+50h] [rbp-19h]
  RECT rcSrc; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v28; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  cx = a3.cx;
  v25 = a3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v24);
  v7 = v24;
  if ( v24 )
  {
    v21 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v21);
    fixed = v9(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v10);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v12 = 338LL;
LABEL_5:
      v13 = (unsigned int)fixed;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v13);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      goto LABEL_31;
    }
    v23 = 0;
    fixed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 32LL))(v21, &v23);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v12 = 342LL;
      goto LABEL_5;
    }
    if ( (unsigned int)(v23 - 2) > 1 )
    {
      LastError = -2147019873;
      v13 = 2147947423LL;
      v12 = 345LL;
      goto LABEL_6;
    }
    rcSrc = 0LL;
    v14 = 0;
    if ( v23 == 2 )
    {
      fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v21 + 24LL))(v21, &rcSrc);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v12 = 351LL;
        goto LABEL_5;
      }
LABEL_22:
      rcDst = 0LL;
      if ( !CopyRect(&rcDst, &rcSrc) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x16F,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      v18);
        goto LABEL_7;
      }
      rcSrc.right = cx + rcSrc.left;
      rcSrc.bottom = v25.cy + rcSrc.top;
      if ( v14 || !EqualRect(&rcDst, &rcSrc) )
      {
        v28 = 0LL;
        fixed = CDesktopPositioner::_FixRectForWorkArea((__int64)this - 120, 3, &rcSrc.left, 0LL, v20, &v28);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v12 = 376LL;
          goto LABEL_5;
        }
        *(struct tagRECT *)((char *)v7 + 88) = v28;
        *((_BYTE *)v7 + 84) = 1;
        fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                  a2,
                  v7);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v12 = 382LL;
          goto LABEL_5;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      LastError = 0;
      goto LABEL_31;
    }
    if ( v23 != 3 )
      goto LABEL_22;
    v14 = 1;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v15, a2, &v22);
    LastError = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v22 + 56LL))(
                               v22,
                               &rcSrc);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        goto LABEL_22;
      }
      v17 = 361LL;
    }
    else
    {
      v17 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    goto LABEL_7;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_31:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v24);
  return LastError;
}
