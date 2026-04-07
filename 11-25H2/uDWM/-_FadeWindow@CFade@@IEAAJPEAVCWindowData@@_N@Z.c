/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180043518
 * Callers:
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800434A0 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CC7B0 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCA70 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180023944 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180025310 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800275D0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800437FC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18004383C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180044E38 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180044FD0 (-SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18007BF24 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800C7B58 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800D297C (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  CAnimatedTransitionVisual **v3; // rdi
  bool v5; // zf
  bool IsWindowTrackedAndCloakChanged; // r15
  CWindowPropertyTracker *WPT; // rax
  __int64 v10; // rdx
  char v11; // r8
  int v12; // eax
  bool IsLauncherShownAboveWindow; // al
  int v14; // r8d
  bool v15; // dl
  bool v16; // al
  float v17; // xmm6_4
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct tagRECT *v25; // rbx
  struct tagPOINT *v26; // rcx
  bool v27; // cf
  struct tagRECT *v28; // rax
  CBaseObject *v30; // [rsp+48h] [rbp-19h] BYREF
  CImmersiveState *v31; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT v32; // [rsp+58h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v3 = 0LL;
  v31 = 0LL;
  v5 = (*((_DWORD *)a2 + 170) & 0x100000) == 0;
  v30 = 0LL;
  v32 = 0LL;
  if ( v5 )
  {
    WPT = CStoryboard::_GetWPT(this);
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       WPT,
                                       *(HWND *)(v10 + 40),
                                       v11 != 1);
  }
  else
  {
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 676) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  }
  v12 = CImmersiveState::Create(&v31, *((const struct std::nothrow_t **)a2 + 17));
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x1E8u, 0LL);
LABEL_31:
    if ( v3 )
      CBaseObject::Release((CBaseObject *)v3);
    goto LABEL_33;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v31, a2);
  v15 = 0;
  if ( !IsLauncherShownAboveWindow )
    v15 = IsWindowTrackedAndCloakChanged;
  v16 = v15;
  if ( !a3 && v15 )
    v16 = !CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2, v14);
  if ( v16 )
  {
    if ( a3 )
      v17 = 0.0;
    else
      v17 = FLOAT_0_99000001;
    if ( (*((_DWORD *)a2 + 170) & 0x20000) != 0 )
    {
      CTransitionVisualController::GetOwnedInclusiveClipRect(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        a2,
        &v32);
      v18 = -*((_DWORD *)a2 + 13);
      v19 = -*((_DWORD *)a2 + 12);
      rc = v32;
      OffsetRect(&rc, v19, v18);
      v20 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 170));
      v21 = CStoryboard::_CreateAndAddAnimationComponentWithRect(this, a2, 1, v20, &rc, 0LL, -1, &v30);
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v21,
          0x207u,
          0LL);
LABEL_20:
        v3 = (CAnimatedTransitionVisual **)v30;
        goto LABEL_31;
      }
      v3 = (CAnimatedTransitionVisual **)v30;
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 112LL))(this);
      v23 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v22, &v30);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v23,
          0x20Bu,
          0LL);
        goto LABEL_20;
      }
      v3 = (CAnimatedTransitionVisual **)v30;
      v32 = *(struct tagRECT *)((char *)v30 + 88);
    }
    v24 = *((_DWORD *)a2 + 170);
    v25 = (struct tagRECT *)((char *)a2 + 700);
    if ( (v24 & 0x1000000) != 0 )
      v32 = *v25;
    v26 = (struct tagPOINT *)v3[5];
    v27 = (v24 & 0x800000) != 0;
    v28 = &v32;
    if ( v27 )
      v28 = v25;
    rc = *v28;
    CAnimatedTransitionVisual::SetBeginRect(v26, &v32);
    CAnimatedTransitionVisual::SetEndRect(v3[5], &rc);
    CAnimatedTransitionVisual::SetBeginAlpha(v3[5], v17);
    CAnimatedTransitionVisual::SetEndAlpha(v3[5], 1.0 - v17);
    goto LABEL_31;
  }
LABEL_33:
  if ( v31 )
    CBaseObject::Release(v31);
  return 0LL;
}
