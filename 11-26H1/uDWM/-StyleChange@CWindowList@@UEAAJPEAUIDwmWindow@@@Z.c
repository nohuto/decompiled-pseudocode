/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018310 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x1800305E4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003B930 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18004E078 (-TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180079370 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18007D5B0 (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x1800B93E8 (-IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAA_NXZ @ 0x1800E4F38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rdi
  int v5; // esi
  int v6; // r12d
  __int64 v7; // r8
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  char v12; // al
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  char v20; // si
  char v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // ebx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // r9d
  int v33; // [rsp+20h] [rbp-48h]
  unsigned __int16 v34; // [rsp+24h] [rbp-44h]
  int v35; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+2Ch] [rbp-3Ch]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *v39; // [rsp+80h] [rbp+18h] BYREF
  char v40; // [rsp+88h] [rbp+20h]

  v37 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v39 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v39);
  v4 = v39;
  if ( !v39 )
    goto LABEL_71;
  v36 = *((_DWORD *)v39 + 29);
  v5 = v36;
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v35 = *((_DWORD *)v4 + 31);
  v34 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  v40 = 0;
  if ( (v36 & 0x20000000) != 0 )
  {
    v8 = v6 & 0x20000000;
    if ( (v6 & 0x20000000) == 0 )
    {
      v40 = 1;
      CWindowData::ClearSnapshot(v4, 0, v7, 0);
    }
LABEL_10:
    *((_DWORD *)v4 + 29) = v6;
    *((_DWORD *)v4 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
    *((_DWORD *)v4 + 31) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
    *((_BYTE *)v4 + 736) ^= (*((_BYTE *)v4 + 736) ^ (8
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 160LL))(a2))) & 8;
    v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
    *((_BYTE *)v4 + 736) &= ~0x80u;
    *((_BYTE *)v4 + 736) |= v12 << 7;
    if ( !v40 )
      goto LABEL_17;
    v13 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
    v14 = *v13;
    if ( v8 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct CWindowData *))(v14 + 96))(v13, v4);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_17;
      v17 = 4442LL;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct CWindowData *))(v14 + 104))(v13, v4);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_17;
      v17 = 4446LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v15,
      v33);
LABEL_17:
    if ( !*((_QWORD *)v4 + 55) )
    {
LABEL_67:
      CWindowData::CheckOwnedWindowEligibility(v4);
      CWindowList::CheckForMaximizedChange(this, v4);
      if ( ((v36 ^ v6) & 0x20000000) != 0 )
        CWindowData::NotifyRepresentationChanged(v4, v29, v30, v31);
      v9 = CWindowList::ReevaluateAutoParenting(this, v4, 0);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 4594LL;
        goto LABEL_54;
      }
LABEL_71:
      v10 = 0;
      goto LABEL_72;
    }
    if ( (v36 & 0x20000000) != 0 || v8 || (LOBYTE(v33) = 0, *(_BYTE *)(*((_QWORD *)v4 + 56) + 336LL)) )
      LOBYTE(v33) = 1;
    v18 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
    {
      v19 = v6 & 0x1000000;
    }
    else
    {
      v19 = v6 & 0x1000000;
      if ( (v6 & 0x1000000) != 0 )
      {
        v20 = 1;
        goto LABEL_29;
      }
    }
    v20 = 0;
    if ( v18 && !v19 )
    {
      LOBYTE(v39) = 1;
LABEL_30:
      if ( (v35 & 0x1000) == 0 || (BYTE1(v33) = 1, (v34 & 0x1000) != 0) )
        BYTE1(v33) = 0;
      v21 = 0;
      if ( *((_BYTE *)this + 674) )
      {
        v22 = *((_QWORD *)this + 85);
        if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) == v22 )
        {
          v21 = 1;
          *((_BYTE *)this + 674) = 0;
        }
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixDwmAnimations>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixDwmAnimations>::GetImpl'::`2'::impl) )
      {
        if ( !(_BYTE)v33
          && (v20 || (_BYTE)v39 || v21 || BYTE1(v33))
          && (*((_BYTE *)v4 + 736) & 0x20) == 0
          && !CLivePreview::IsOpaqueLivePreview(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), v4) )
        {
          goto LABEL_44;
        }
      }
      else if ( !(_BYTE)v33 )
      {
        if ( v20 )
        {
LABEL_44:
          v25 = (char)v39;
LABEL_74:
          try
          {
            *((_BYTE *)this + 673) = 1;
            if ( v20 )
            {
              v26 = 2;
            }
            else if ( v25 )
            {
              v26 = 3;
            }
            else if ( v21 )
            {
              v26 = 4;
              UDwmTrace::WindowSnapBeginPreTransition(v24, v23);
            }
            else
            {
              v26 = 5;
            }
            *((_QWORD *)this + 85) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
            Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
            winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
              (__int64)Current,
              *((_QWORD *)v4 + 56),
              v26);
          }
          catch ( ... )
          {
            LODWORD(v39) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x11C7,
                             (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                             v28);
            v10 = (unsigned int)v39;
            goto LABEL_72;
          }
          goto LABEL_52;
        }
        v25 = (char)v39;
        if ( (_BYTE)v39 || v21 || BYTE1(v33) )
          goto LABEL_74;
      }
LABEL_52:
      v9 = CWindowData::OnWindowStyleUpdated(v4);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 4554LL;
        goto LABEL_54;
      }
      if ( (((unsigned __int16)v35 ^ v34) & 0x1000) != 0 )
        CWindowData::OnColorizationUpdated(v4);
      CWindowList::TrackMinimizedWindowDuringModeChange(this, v4);
      v9 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 56));
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 4569LL;
        goto LABEL_54;
      }
      if ( v40 )
        CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v4 + 55));
      goto LABEL_67;
    }
LABEL_29:
    LOBYTE(v39) = 0;
    goto LABEL_30;
  }
  v8 = v6 & 0x20000000;
  if ( (v6 & 0x20000000) == 0 )
    goto LABEL_10;
  v40 = 1;
  if ( v4 != *((struct CWindowData **)this + 87) )
    goto LABEL_10;
  v9 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v5 = v36;
    goto LABEL_10;
  }
  v11 = 4428LL;
LABEL_54:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v9,
    v33);
LABEL_72:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
  return v10;
}
