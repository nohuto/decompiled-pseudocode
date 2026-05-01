/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800354E4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180036B80 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180037220 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180095A74 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801285B8 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180179BC0 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801C6720 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180223210 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804741D0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180475B10 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802D2F54 (_o_ceilf_0.c)
 *     floorf @ 0x1802D2F60 (floorf.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int *v3; // rdi
  int ScaleFactorForMonitor; // eax
  int v5; // ecx
  RECT rcMonitor; // xmm0
  int v7; // eax
  int v8; // edx
  float v9; // xmm2_4
  float v10; // xmm3_4
  bool v11; // zf
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  int v19; // [rsp+28h] [rbp-19h]
  __int128 v20; // [rsp+28h] [rbp-19h]
  __int128 v21; // [rsp+28h] [rbp-19h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v2 = *(HMONITOR *)this;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    v3 = (int *)((char *)this + 40);
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 40);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor,
        v19);
    v5 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    rcMonitor = mi.rcMonitor;
    v7 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 24) = mi.rcMonitor;
    v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4));
    v9 = 0.0;
    v10 = (float)v5;
    v11 = *v3 == 0;
    v12 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)) - v8);
    v13 = (float)v8;
    v14 = (float)(v7 - v5);
    if ( *v3 )
    {
      v9 = (float)*v3;
      *(float *)&v20 = (float)(v10 * 100.0) / v9;
      *((float *)&v20 + 1) = (float)(v13 * 100.0) / v9;
      *((float *)&v20 + 2) = (float)(v14 * 100.0) / v9;
      v15 = (float)(v12 * 100.0) / v9;
    }
    else
    {
      *(float *)&v20 = (float)v5;
      v15 = v12;
      *((float *)&v20 + 1) = (float)v8;
      *((float *)&v20 + 2) = (float)(v7 - v5);
    }
    *((float *)&v20 + 3) = v15;
    *(_OWORD *)((char *)this + 8) = v20;
    if ( !v11 )
    {
      v10 = (float)(v10 * 100.0) / v9;
      v13 = (float)(v13 * 100.0) / v9;
      v14 = (float)(v14 * 100.0) / v9;
      v12 = (float)(v12 * 100.0) / v9;
    }
    *((_QWORD *)&v21 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v14));
    *(_QWORD *)&v21 = __PAIR64__(LODWORD(v13), LODWORD(v10));
    *(_OWORD *)((char *)this + 44) = v21;
    v16 = *((float *)this + 12);
    v17 = *((float *)this + 13);
    v18 = *((float *)this + 14);
    *((float *)this + 15) = floorf(*((float *)this + 11));
    *((float *)this + 16) = floorf(v16);
    *((float *)this + 17) = o_ceilf_0(v17);
    *((float *)this + 18) = o_ceilf_0(v18);
  }
}
