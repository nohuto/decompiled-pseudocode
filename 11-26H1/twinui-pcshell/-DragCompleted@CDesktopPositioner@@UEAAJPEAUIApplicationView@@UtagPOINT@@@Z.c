/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18050FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800AF8BC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x1800B074C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180165EF8 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180165FD0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180166C54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802A39F0 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802C3C54 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  CDesktopPositioner *v6; // rcx
  int FullPositionSnapshot; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  HMONITOR v10; // rax
  int ScaleFactorForRect; // eax
  int v12; // r14d
  int v13; // edi
  int v14; // eax
  int MonitorFromPoint; // eax
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // edi
  int WorkAreaFromRect; // eax
  unsigned int v20; // r14d
  int v21; // eax
  int fixed; // eax
  ApplicationViewOperation *v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rdx
  struct tagPOINT v26; // rdi
  int v27; // eax
  struct IImmersiveMonitor *v29; // [rsp+20h] [rbp-69h] BYREF
  int nNumerator; // [rsp+28h] [rbp-61h] BYREF
  struct tagPOINT v31; // [rsp+30h] [rbp-59h] BYREF
  int (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-51h] BYREF
  struct tagPOINT v33; // [rsp+40h] [rbp-49h] BYREF
  ApplicationViewOperation *v34; // [rsp+48h] [rbp-41h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v35[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v38; // [rsp+80h] [rbp-9h] BYREF
  __int128 v39; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v33 = a3;
  v35[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v35);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v6, a2, v35);
  v8 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    v37 = 0LL;
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v35[0] + 56LL))(
                             v35[0],
                             &v37);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 958LL;
      goto LABEL_5;
    }
    nNumerator = 0;
    v10 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v10, &nNumerator);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 964LL;
      goto LABEL_5;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v37);
    v12 = ScaleFactorForRect;
    rc = v37;
    if ( ScaleFactorForRect != nNumerator )
    {
      v13 = MulDiv(v37.right - v37.left, nNumerator, ScaleFactorForRect);
      v14 = MulDiv(v37.bottom - v37.top, nNumerator, v12);
      rc.right = v13 + rc.left;
      rc.bottom = rc.top + v14;
    }
    OffsetRect(&rc, a3.x - v37.left, v33.y - v37.top);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint((CDesktopPositioner *)((char *)this - 128), &v33, &v29);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v16 = 992LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_38:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      goto LABEL_39;
    }
    v39 = 0LL;
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *, __int128 *))(**((_QWORD **)this + 20)
                                                                                                 + 64LL))(
                         *((_QWORD *)this + 20),
                         v29,
                         &v39);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v16 = 995LL;
      goto LABEL_12;
    }
    v17 = SDWORD1(v39) / -2;
    v18 = (int)(float)((float)(*((_DWORD *)this + 70) * nNumerator) / -100.0);
    v38 = 0LL;
    WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 128), &rc, &v38);
    v20 = WorkAreaFromRect;
    if ( WorkAreaFromRect < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)WorkAreaFromRect);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      v8 = v20;
      goto LABEL_39;
    }
    if ( v17 + rc.top < v38.top )
      v17 = v38.top - rc.top;
    if ( v18 + rc.left < v38.left )
      v18 = v38.left - rc.left;
    OffsetRect(&rc, v18, v17);
    v32 = 0LL;
    v21 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            (__int64 *)&v32,
            (__int64)&rc);
    v8 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x403,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v21);
LABEL_37:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      goto LABEL_38;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    fixed = CDesktopPositioner::_FixPosition((__int64)this - 128, 4u, v32, (__int64 *)&v31);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x407,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_36:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      goto LABEL_37;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v34);
    v23 = v34;
    if ( v34 )
    {
      v26 = v31;
      if ( *((_QWORD *)v34 + 8) != v31 )
      {
        v33 = v31;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
        v33 = (struct tagPOINT)*((_QWORD *)v23 + 8);
        *((struct tagPOINT *)v23 + 8) = v26;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      }
      *((_WORD *)v23 + 52) = 257;
      v27 = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v23);
      v8 = v27;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v8 = v27;
        if ( v27 >= 0 )
        {
LABEL_35:
          Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v34);
          goto LABEL_36;
        }
        v25 = 1044LL;
      }
      else
      {
        v25 = 1041LL;
      }
      v24 = (unsigned int)v27;
    }
    else
    {
      v8 = -2147024882;
      v24 = 2147942414LL;
      v25 = 1035LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v24);
    goto LABEL_35;
  }
  v9 = 955LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v35);
  return v8;
}
