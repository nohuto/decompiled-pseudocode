/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18003DC00
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180077060 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6910 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6BD0 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180035E88 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x18003841C (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18003ABE0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C7D4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18003DEFC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18003DF3C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18006B68C (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18007C358 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18008D238 (-SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800C1B58 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800CF774 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  CAnimatedTransitionVisual **v3; // rdi
  bool v4; // zf
  bool IsWindowTrackedAndCloakChanged; // r15
  CWindowPropertyTracker *WPT; // rax
  __int64 v10; // rdx
  bool v11; // r8
  int v12; // eax
  bool IsLauncherShownAboveWindow; // al
  int v14; // r8d
  bool v15; // dl
  float v16; // xmm6_4
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct tagRECT *v24; // rbx
  CAnimatedTransitionVisual *v25; // rcx
  bool v26; // cf
  struct tagRECT *v27; // rax
  CBaseObject *v29; // [rsp+48h] [rbp-19h] BYREF
  CImmersiveState *v30; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT v31; // [rsp+58h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v3 = 0LL;
  v4 = (*((_DWORD *)a2 + 186) & 0x100000) == 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( v4 )
  {
    WPT = CStoryboard::_GetWPT(this);
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       WPT,
                                       *(HWND *)(v10 + 40),
                                       v11);
  }
  else
  {
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 740) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  }
  v12 = CImmersiveState::Create(&v30, *((_QWORD *)a2 + 17));
  if ( v12 >= 0 )
  {
    IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v30, a2);
    v15 = 0;
    if ( !IsLauncherShownAboveWindow )
      v15 = IsWindowTrackedAndCloakChanged;
    if ( a3 || !v15 )
    {
      if ( !v15 )
        goto LABEL_33;
      if ( a3 )
      {
        v16 = 0.0;
LABEL_14:
        if ( (*((_DWORD *)a2 + 186) & 0x20000) != 0 )
        {
          CTransitionVisualController::GetOwnedInclusiveClipRect(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
            a2,
            &v31);
          v17 = -*((_DWORD *)a2 + 13);
          v18 = -*((_DWORD *)a2 + 12);
          rc = v31;
          OffsetRect(&rc, v18, v17);
          v19 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 112LL))(
                  this,
                  *((unsigned int *)a2 + 186));
          v20 = CStoryboard::_CreateAndAddAnimationComponentWithRect(this, a2, 1, v19, &rc, 0LL, -1, &v29);
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v20,
              0x207u,
              0LL);
LABEL_17:
            v3 = (CAnimatedTransitionVisual **)v29;
            goto LABEL_31;
          }
          v3 = (CAnimatedTransitionVisual **)v29;
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 112LL))(this);
          v22 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v21, &v29);
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v22,
              0x20Bu,
              0LL);
            goto LABEL_17;
          }
          v3 = (CAnimatedTransitionVisual **)v29;
          v31 = *(struct tagRECT *)((char *)v29 + 88);
        }
        v23 = *((_DWORD *)a2 + 186);
        v24 = (struct tagRECT *)((char *)a2 + 764);
        if ( (v23 & 0x1000000) != 0 )
          v31 = *v24;
        v25 = v3[5];
        v26 = (v23 & 0x800000) != 0;
        v27 = &v31;
        if ( v26 )
          v27 = v24;
        rc = *v27;
        CAnimatedTransitionVisual::SetBeginRect(v25, &v31);
        CAnimatedTransitionVisual::SetEndRect(v3[5], &rc);
        CAnimatedTransitionVisual::SetBeginAlpha(v3[5], v16);
        CAnimatedTransitionVisual::SetEndAlpha(v3[5], 1.0 - v16);
        goto LABEL_31;
      }
    }
    else if ( CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2, v14) )
    {
      goto LABEL_33;
    }
    v16 = FLOAT_0_99000001;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x1E8u, 0LL);
LABEL_31:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
LABEL_33:
  if ( v30 )
    CBaseObject::Release(v30);
  return 0LL;
}
