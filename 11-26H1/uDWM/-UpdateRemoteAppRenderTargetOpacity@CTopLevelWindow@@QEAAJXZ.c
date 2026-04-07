/*
 * XREFs of ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180016700
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180015188 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800173EC (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x18005CB38 (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CBBA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(CTopLevelWindow *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 98) )
    return v2;
  v5 = *((_QWORD *)this + 87);
  if ( !v5 )
    return v2;
  v6 = 3;
  v11 = 0LL;
  HIDWORD(v11) = 1065353216;
  if ( *(_QWORD *)(v5 + 424) || (*(_BYTE *)(v5 + 737) & 0x40) == 0 || (*(_DWORD *)(v5 + 120) & 0x200000) != 0 )
  {
    HIDWORD(v11) = 0;
    goto LABEL_12;
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl,
    a2);
  if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) <= 5 )
  {
    v7 = *((_QWORD *)this + 26);
    if ( v7 )
    {
      if ( *(float *)(v7 + 248) != 0.0 )
      {
        HIDWORD(v11) = 998277249;
LABEL_12:
        v6 = 1;
      }
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 98) + 32LL))(*((_QWORD *)this + 98), v6);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x176Cu, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 98) + 72LL))(*((_QWORD *)this + 98), &v11);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x176Du, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 6)
                                                                 + 32LL));
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x176Eu, 0LL);
    }
  }
  return v2;
}
