/*
 * XREFs of ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001C080
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B874 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001BFB0 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001CB4C (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x18001E86C (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2DD0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055F90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CFE68 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRoundin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int16 v11; // [rsp+44h] [rbp-34h]
  _BYTE v12[8]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 103) )
    return v2;
  v3 = *((_QWORD *)this + 89);
  if ( !v3 )
    return v2;
  v4 = 3;
  v13 = 0LL;
  HIDWORD(v13) = 1065353216;
  if ( *(_QWORD *)(v3 + 424) || (*(_BYTE *)(v3 + 673) & 0x40) == 0 || (*(_DWORD *)(v3 + 120) & 0x200000) != 0 )
  {
    HIDWORD(v13) = 0;
  }
  else
  {
    v5 = `wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl & 4) == 0 )
      v5 = *(_DWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetCachedFeatureEnabledState(
                        &`wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl,
                        v12);
    v10 = 0;
    v11 = 3;
    wil::details::ReportUsageToService(&unk_18011CD00, 48098797LL, (v5 >> 10) & 1, (v5 >> 11) & 1, &v10, 1, 3);
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) > 5 )
      goto LABEL_14;
    v6 = *((_QWORD *)this + 28);
    if ( !v6 || *(float *)(v6 + 272) == 0.0 )
      goto LABEL_14;
    HIDWORD(v13) = 998277249;
  }
  v4 = 1;
LABEL_14:
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 103) + 32LL))(*((_QWORD *)this + 103), v4);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1848u, 0LL);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 103) + 72LL))(
           *((_QWORD *)this + 103),
           &v13);
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1849u, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL)
                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 32LL));
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x184Au, 0LL);
    }
  }
  return v2;
}
