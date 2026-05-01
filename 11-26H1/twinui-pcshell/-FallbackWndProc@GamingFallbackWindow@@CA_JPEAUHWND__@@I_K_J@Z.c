/*
 * XREFs of ?FallbackWndProc@GamingFallbackWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1804FAC40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$CreatedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F36F0 (--$CreatedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWN.c)
 *     ??$DestroyedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F3734 (--$DestroyedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUH.c)
 *     ??$OnFallbackWindowActivated@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F5120 (--$OnFallbackWindowActivated@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEA.c)
 *     ?FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ @ 0x1804FABE8 (-FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall GamingFallbackWindow::FallbackWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LRESULT v8; // rbx
  __int64 v9; // rax
  LONG_PTR WindowLongPtrW; // rsi
  LONG_PTR v11; // rsi
  signed int v12; // eax
  LONG_PTR v13; // r8
  signed int LastError; // eax
  _BYTE v16[80]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  HWND v19; // [rsp+E0h] [rbp+8h] BYREF

  v19 = hWnd;
  v8 = 0LL;
  v16[72] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v9 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v17, "GamingFallbackWindow\\FallbackWndProc");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v16, v9);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  }
  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  if ( Msg == 2 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      SetLastError(0);
      SetWindowLongPtrW(hWnd, 0, 0LL);
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE64,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)LastError);
      GamingPosturePositionerTelemetryProvider::DestroyedFallbackWindow<HWND__ * &>((__int64 *)&v19);
      goto LABEL_28;
    }
    v13 = 0LL;
    goto LABEL_27;
  }
  if ( Msg == 6 )
  {
    if ( wParam == 1 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        GamingPosturePositionerTelemetryProvider::OnFallbackWindowActivated<HWND__ * &>((__int64 *)(WindowLongPtrW + 24));
      GamingPosturePositioner::FallbackWindowActivated(*(GamingPosturePositioner **)(WindowLongPtrW + 32));
    }
    goto LABEL_28;
  }
  if ( Msg != 16 )
  {
    if ( Msg != 70 )
    {
      if ( Msg != 129 )
      {
LABEL_28:
        v8 = DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
        goto LABEL_29;
      }
      v11 = *lParam;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        SetLastError(0);
        SetWindowLongPtrW(hWnd, 0, v11);
        v12 = GetLastError();
        if ( v12 > 0 )
          v12 = (unsigned __int16)v12 | 0x80070000;
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE51,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            (const char *)(unsigned int)v12);
        GamingPosturePositionerTelemetryProvider::CreatedFallbackWindow<HWND__ * &>((__int64 *)&v19);
        goto LABEL_28;
      }
      v13 = v11;
LABEL_27:
      SetWindowLongPtrW(hWnd, 0, v13);
      goto LABEL_28;
    }
    lParam[3] = 0LL;
  }
LABEL_29:
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v16);
  return v8;
}
