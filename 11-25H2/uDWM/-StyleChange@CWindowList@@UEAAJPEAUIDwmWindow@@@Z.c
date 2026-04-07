/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180006D20 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018AB0 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019690 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180049720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180055740 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x180061700 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180064040 (-TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18008A490 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008E858 (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@QEAA_NXZ @ 0x1800E921C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@de.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // r12d
  unsigned __int16 v6; // si
  __int64 v7; // r8
  int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  char v12; // al
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // eax
  char v20; // di
  char v21; // r13
  char v22; // si
  int v23; // edi
  const struct std::nothrow_t *v24; // rdx
  __int64 v25; // rcx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v27; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int16 v30; // [rsp+24h] [rbp-44h]
  int v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+2Ch] [rbp-3Ch]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *v35; // [rsp+80h] [rbp+18h] BYREF
  char v36; // [rsp+88h] [rbp+20h]

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v35 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v35);
  v4 = v35;
  if ( !v35 )
    goto LABEL_70;
  v32 = *((_DWORD *)v35 + 29);
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v31 = *((_DWORD *)v4 + 31);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  v30 = v6;
  LOBYTE(v35) = 0;
  if ( (v32 & 0x20000000) != 0 )
  {
    v8 = v5 & 0x20000000;
    if ( (v5 & 0x20000000) == 0 )
    {
      LOBYTE(v35) = 1;
      CWindowData::ClearSnapshot(v4, 0, v7, 0);
    }
LABEL_10:
    *((_DWORD *)v4 + 29) = v5;
    *((_DWORD *)v4 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
    *((_DWORD *)v4 + 31) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
    *((_BYTE *)v4 + 672) ^= (*((_BYTE *)v4 + 672) ^ (8
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 160LL))(a2))) & 8;
    v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
    *((_BYTE *)v4 + 672) &= ~0x80u;
    *((_BYTE *)v4 + 672) |= v12 << 7;
    if ( !(_BYTE)v35 )
      goto LABEL_17;
    v13 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
    v14 = *v13;
    if ( v8 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct CWindowData *))(v14 + 112))(v13, v4);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_17;
      v17 = 4163LL;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct CWindowData *))(v14 + 120))(v13, v4);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_17;
      v17 = 4167LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v15,
      v29);
LABEL_17:
    if ( !*((_QWORD *)v4 + 55) )
    {
LABEL_66:
      CWindowData::CheckOwnedWindowEligibility(v4);
      CWindowList::CheckForMaximizedChange(this, v4);
      if ( ((v32 ^ v5) & 0x20000000) != 0 )
        CWindowData::NotifyRepresentationChanged(v4);
      v9 = CWindowList::ReevaluateAutoParenting(this, v4, 0);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 4294LL;
        goto LABEL_45;
      }
LABEL_70:
      v10 = 0;
      goto LABEL_71;
    }
    if ( (v32 & 0x20000000) != 0 || v8 || (v18 = *(_BYTE *)(*((_QWORD *)v4 + 56) + 488LL) == 0, v36 = 0, !v18) )
      v36 = 1;
    if ( (v32 & 0x1000000) != 0 )
    {
      v19 = v5 & 0x1000000;
    }
    else
    {
      v19 = v5 & 0x1000000;
      if ( (v5 & 0x1000000) != 0 )
      {
        v20 = 1;
        goto LABEL_29;
      }
    }
    v20 = 0;
    if ( (v32 & 0x1000000) != 0 && !v19 )
    {
      v21 = 1;
LABEL_30:
      if ( (v31 & 0x1000) == 0 || (LOBYTE(v29) = 1, (v6 & 0x1000) != 0) )
        LOBYTE(v29) = 0;
      v22 = 0;
      if ( *((_BYTE *)this + 674)
        && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) == *((_QWORD *)this + 85) )
      {
        v22 = 1;
        *((_BYTE *)this + 674) = 0;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::GetImpl'::`2'::impl) )
      {
        if ( v36 || !v20 && !v21 && !v22 && !(_BYTE)v29 || (*((_BYTE *)v4 + 672) & 0x20) != 0 )
          goto LABEL_43;
      }
      else if ( v36 || !v20 && !v21 && !v22 && !(_BYTE)v29 )
      {
LABEL_43:
        v9 = CWindowData::OnWindowStyleUpdated(v4);
        v10 = v9;
        if ( v9 < 0 )
        {
          v11 = 4254LL;
          goto LABEL_45;
        }
        if ( (((unsigned __int16)v31 ^ v30) & 0x1000) != 0 )
          CWindowData::OnColorizationUpdated(v4);
        CWindowList::TrackMinimizedWindowDuringModeChange(this, v4);
        v9 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 56));
        v10 = v9;
        if ( v9 < 0 )
        {
          v11 = 4269LL;
          goto LABEL_45;
        }
        if ( (_BYTE)v35 )
          CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v4 + 55));
        goto LABEL_66;
      }
      try
      {
        *((_BYTE *)this + 673) = 1;
        if ( v20 )
        {
          v23 = 2;
        }
        else if ( v21 )
        {
          v23 = 3;
        }
        else if ( v22 )
        {
          v23 = 4;
          UDwmTrace::WindowSnapBeginPreTransition(0LL);
        }
        else
        {
          v23 = 5;
        }
        *((_QWORD *)this + 85) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v25, v24);
        winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
          (__int64)Current,
          *((_QWORD *)v4 + 56),
          v23);
      }
      catch ( ... )
      {
        LODWORD(v35) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x109B,
                         (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                         v27);
        v10 = (unsigned int)v35;
        goto LABEL_71;
      }
      goto LABEL_43;
    }
LABEL_29:
    v21 = 0;
    goto LABEL_30;
  }
  v8 = v5 & 0x20000000;
  if ( (v5 & 0x20000000) == 0 )
    goto LABEL_10;
  LOBYTE(v35) = 1;
  if ( v4 != *((struct CWindowData **)this + 87) )
    goto LABEL_10;
  v9 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v6 = v30;
    goto LABEL_10;
  }
  v11 = 4149LL;
LABEL_45:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v9,
    v29);
LABEL_71:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v10;
}
