/*
 * XREFs of ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803242D0
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18014BE18 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801A7CE0 (-ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_.c)
 *     ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801ED4D0 (-DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180323590 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803238C0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180324F70 (-TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180325060 (-UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18011691C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180116BF4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x18021D200 (-SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802CFC70 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUCRect@Geometry@@@Z @ 0x1803226D0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geome.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180324124 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180325010 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180325254 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FullScreenPositioner::PositionView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 result; // rax
  const char *v8; // r9
  ApplicationViewOperation *v9; // rbx
  bool IsLightweightFullScreen; // r12
  __int64 v11; // rsi
  struct IApplicationView *v12; // rdx
  struct IApplicationViewTitlebarConfiguration **v13; // r9
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-49h] BYREF
  bool v16[8]; // [rsp+28h] [rbp-41h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h] BYREF
  ApplicationViewOperation *v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-11h]
  __int128 v21; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a3;
  FullScreenPositionerLogging::TraceLoggingInfo(
    "FullScreenPositioner - Position view: %p with PositionViewShowOperation: %d and animation requested: %d",
    a2,
    a3,
    a4);
  v21 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 216) + 72LL))(*(_QWORD *)(a1 + 216), &v21);
  if ( (int)result >= 0 )
  {
    v19[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v18);
    v9 = v18;
    if ( v18 )
    {
      v17 = 0LL;
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,Geometry::CRect &>(
                  &v17,
                  &v21) >= 0 )
      {
        IsLightweightFullScreen = FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)a1, a2);
        v11 = v17;
        if ( *((_QWORD *)v9 + 8) != v17 )
        {
          v15 = v17;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
          v15 = *((_QWORD *)v9 + 8);
          *((_QWORD *)v9 + 8) = v11;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        }
        *((_DWORD *)v9 + 27) = 255;
        *((_DWORD *)v9 + 28) = 0;
        ApplicationViewOperation::SetZOrderBand(v9, IsLightweightFullScreen ? 1 : 8);
        *((_DWORD *)v9 + 48) = 0;
        *(_QWORD *)((char *)v9 + 196) = 0LL;
        *(_QWORD *)((char *)v9 + 204) = 0LL;
        *((_BYTE *)v9 + 228) = 1;
        *((_QWORD *)v9 + 29) = 0LL;
        v15 = 0x100000001LL;
        *(_QWORD *)((char *)v9 + 212) = 0x100000001LL;
        *(_QWORD *)((char *)v9 + 220) = 0LL;
        *(__m128i *)&v20[4] = _mm_load_si128((const __m128i *)&_xmm);
        *(_DWORD *)&v20[20] = 0;
        *(_DWORD *)v20 = 1;
        *(_OWORD *)((char *)v9 + 124) = 0LL;
        *(_OWORD *)((char *)v9 + 140) = *(_OWORD *)v20;
        *(_QWORD *)((char *)v9 + 156) = *(_QWORD *)&v20[16];
        *((_DWORD *)v9 + 41) = 0;
        *((_BYTE *)v9 + 120) = 1;
        *(_QWORD *)v16 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
        LOBYTE(v12) = *(_BYTE *)(a1 + 392);
        FullScreenPositionerHelpers::CreateTitlebarConfiguration((FullScreenPositionerHelpers *)a2, v12, (bool)v16, v13);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v9 + 23, *(__int64 *)v16);
        *((_DWORD *)v9 + 29) = 1;
        if ( v4 )
        {
          *((_BYTE *)v9 + 104) = 1;
          *((_BYTE *)v9 + 105) = v4 == 1;
        }
        FullScreenPositionerLogging::TraceLoggingInfo(
          "FullScreenPositioner - Applying positioning operation: %p for view: %p",
          v9,
          a2);
        v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), ApplicationViewOperation *))(*a2)[40])(
                a2,
                v9);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4BD,
            (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
    else
    {
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x489,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        v8);
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18);
    return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  }
  return result;
}
