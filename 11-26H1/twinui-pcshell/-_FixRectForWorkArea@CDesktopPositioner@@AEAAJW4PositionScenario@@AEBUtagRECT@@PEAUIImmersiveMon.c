/*
 * XREFs of ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180166600
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180165FD0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x18050EE4C (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805109C8 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180511500 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805122A4 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180166C54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixRectForWorkArea(
        __int64 a1,
        int a2,
        LONG *a3,
        __int64 a4,
        __int64 a5,
        struct tagRECT *lprc)
{
  LONG v10; // ecx
  LONG v11; // r8d
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, unsigned __int64 *, GUID *, GUID *, int *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  int v20; // eax
  LONG right; // edx
  int v22; // ecx
  int v23; // ecx
  LONG bottom; // r8d
  int v25; // r11d
  int v26; // ebx
  int v27; // r8d
  int v28; // r8d
  int v29; // edx
  RECT v30; // xmm0
  struct IApplicationViewTitlebarConfiguration *v31; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-61h] BYREF
  int v33[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v34; // [rsp+58h] [rbp-51h]
  unsigned __int64 v35; // [rsp+60h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-39h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  SetRectEmpty(lprc);
  v10 = *a3;
  rcSrc1.left = *a3;
  v11 = a3[1];
  rcSrc1.top = v11;
  rcSrc1.right = a3[2];
  rcSrc1.bottom = a3[3];
  if ( a2 == 2 )
  {
    v32 = __PAIR64__(v11, v10);
    v35 = __PAIR64__(v11, v10);
    *(_QWORD *)v33 = 0LL;
    v12 = *(_QWORD *)(a1 + 264);
    v13 = *(__int64 (__fastcall **)(__int64, unsigned __int64 *, GUID *, GUID *, int *))(*(_QWORD *)v12 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
    v14 = v13(v12, &v35, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v33);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x763,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
      return v15;
    }
    LODWORD(v34) = rcSrc1.right - rcSrc1.left;
    HIDWORD(v34) = rcSrc1.bottom - rcSrc1.top;
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v17 = CDesktopPositioner::_CreateTitlebarConfiguration(v16, 0LL, &v31);
    v15 = v17;
    if ( v17 < 0 )
    {
      v18 = 1898LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      goto LABEL_9;
    }
    v32 = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, unsigned __int64 *))(**(_QWORD **)(a1 + 288) + 48LL))(
            *(_QWORD *)(a1 + 288),
            v34,
            *(_QWORD *)v33,
            0LL,
            1,
            v31,
            &v32);
    v15 = v17;
    if ( v17 < 0 )
    {
      v18 = 1902LL;
      goto LABEL_8;
    }
    rcSrc1.right = v32 + rcSrc1.left;
    rcSrc1.bottom = HIDWORD(v32) + rcSrc1.top;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
  }
  rcSrc2 = 0LL;
  if ( a4 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a4 + 88LL))(a4, &rcSrc2);
    v15 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77A,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v20);
      return v15;
    }
  }
  else if ( (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, &rcSrc1, &rcSrc2) < 0
         && (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &rcSrc2) < 0 )
  {
    goto LABEL_36;
  }
  rcDst = 0LL;
  UnionRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( EqualRect(&rcDst, &rcSrc2) )
  {
LABEL_36:
    v30 = rcSrc1;
    goto LABEL_37;
  }
  right = rcSrc1.right;
  if ( a2 == 6 )
  {
    v22 = rcSrc2.right - rcSrc2.left;
    if ( rcSrc1.right - rcSrc1.left > rcSrc2.right - rcSrc2.left )
    {
      right = v22 + rcSrc1.left;
      rcSrc1.right = v22 + rcSrc1.left;
    }
    v23 = rcSrc2.bottom - rcSrc2.top;
    bottom = rcSrc1.bottom;
    if ( rcSrc1.bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    {
      bottom = v23 + rcSrc1.top;
      rcSrc1.bottom = v23 + rcSrc1.top;
    }
  }
  else
  {
    bottom = rcSrc1.bottom;
  }
  if ( right - rcSrc1.left > rcSrc2.right - rcSrc2.left || bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    return 2147942487LL;
  v25 = rcSrc2.right - right;
  v26 = rcSrc2.bottom - bottom;
  rc = rcSrc1;
  v27 = 0;
  if ( rcSrc2.top - rcSrc1.top >= 0 )
    v27 = rcSrc2.top - rcSrc1.top;
  if ( v26 >= 0 )
    v26 = 0;
  v28 = v26 + v27;
  v29 = 0;
  if ( rcSrc2.left - rcSrc1.left >= 0 )
    v29 = rcSrc2.left - rcSrc1.left;
  if ( v25 >= 0 )
    v25 = 0;
  OffsetRect(&rc, v25 + v29, v28);
  v30 = rc;
LABEL_37:
  result = 0LL;
  *lprc = v30;
  return result;
}
