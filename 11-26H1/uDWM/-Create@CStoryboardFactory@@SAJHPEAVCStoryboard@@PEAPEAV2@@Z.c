/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18007BCE0 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18007C44C (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x18007D4E0 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x18007DCE0 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18008C344 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x18008D2C8 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18008D2F8 (--0CFade@@IEAA@XZ.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800BFFF0 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800C003C (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800C00B0 (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800C00E4 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800C0124 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800C0154 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800C0190 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800C01C0 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800C01F8 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  CFlyoutPopup *v13; // rax
  CSlideOut *v14; // rbx
  void **v15; // rcx
  CFlyoutPopup *v16; // rax
  CSlideOut *v17; // rax
  void **v18; // rcx
  CSlideOut *v19; // rax
  CFadeOut *v20; // rax
  CSlideOut *v21; // rax
  CSlideIn *v22; // rax
  CSlideIn *v23; // rbx
  CFadeOut *v24; // rax
  CFadeIn *v25; // rax
  CSlide *v26; // rax
  CCrossFade *v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  CAppArrangementBase *v36; // rax
  void **v37; // rcx
  CAppArrangementBase *v38; // rax
  CSlideOut *v39; // rax
  CStoryboard *v40; // rax
  CLaunchSwitchBase *v41; // rax
  unsigned int v42; // ebx
  CLaunchSwitchBase *v43; // rax
  CLauncherAnimationBase *v44; // rax
  CLauncherAnimationBase *v45; // rax
  CStoryboard *v46; // rax
  CStoryboard *v47; // rax
  void **v48; // rcx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  CSlideOut *v57; // rax
  CSlideOut *v58; // rax
  CSlideOut *v59; // rax
  CSlideOut *v60; // rax
  CStoryboard *v61; // rax
  CSlideOut *v62; // rax
  CPanelAnimation *v63; // rax
  void **v64; // rcx
  CPanelAnimation *v65; // rax
  CSlideOut *v66; // rax
  CVirtualDesktopSwitch *v67; // rax
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  CSlideOut *v76; // rax
  CSlideOut *v77; // rax
  CInputView_SizeOrModeChangeBase *v78; // rax
  CInputView_SizeOrModeChangeBase *v79; // rax
  CInputView_SizeOrModeChangeBase *v80; // rax
  CSlideOut *v81; // rax
  CStoryboard *v82; // rax
  CStoryboard *v83; // rax
  __int64 v84; // rcx
  CStoryboard *v85; // rax
  int v86; // eax

  *a3 = 0LL;
  if ( a1 > 69 )
  {
    if ( a1 <= 90 )
    {
      if ( a1 != 90 )
      {
        v49 = a1 - 70;
        if ( !v49 )
        {
          v66 = (CSlideOut *)operator new(0x80uLL);
          v14 = v66;
          if ( v66 )
          {
            memset_0(v66, 0, 0x80uLL);
            CFade::CFade(v14);
            v15 = &CChangePanel::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
          goto LABEL_131;
        }
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v51 - 3;
            if ( v52 )
            {
              v53 = v52 - 2;
              if ( v53 )
              {
                v54 = v53 - 1;
                if ( v54 )
                {
                  v55 = v54 - 3;
                  if ( v55 )
                  {
                    v56 = v55 - 1;
                    if ( v56 )
                    {
                      if ( v56 != 1 )
                        goto LABEL_59;
                      v57 = (CSlideOut *)operator new(0x90uLL);
                      v14 = v57;
                      if ( v57 )
                      {
                        CSlideOut::CSlideOut(v57);
                        v18 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
                        goto LABEL_22;
                      }
                    }
                    else
                    {
                      v58 = (CSlideOut *)operator new(0x88uLL);
                      v14 = v58;
                      if ( v58 )
                      {
                        memset_0(v58, 0, 0x88uLL);
                        CSlideIn::CSlideIn(v14);
                        v18 = &CSlideInCharm::`vftable'{for `CBaseObject'};
                        goto LABEL_22;
                      }
                    }
                  }
                  else
                  {
                    v59 = (CSlideOut *)operator new(0x80uLL);
                    v14 = v59;
                    if ( v59 )
                    {
                      memset_0(v59, 0, 0x80uLL);
                      CFadeOut::CFadeOut(v14);
                      v15 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
                      goto LABEL_16;
                    }
                  }
                }
                else
                {
                  v60 = (CSlideOut *)operator new(0x88uLL);
                  v14 = v60;
                  if ( v60 )
                  {
                    memset_0(v60, 0, 0x88uLL);
                    CSlideIn::CSlideIn(v14);
                    v18 = &CDialogSwitch::`vftable'{for `CBaseObject'};
                    goto LABEL_22;
                  }
                }
              }
              else
              {
                v61 = (CStoryboard *)operator new(0x80uLL);
                v14 = v61;
                if ( v61 )
                {
                  CStoryboard::CStoryboard(v61, 0);
                  v15 = &CInplaceResize::`vftable'{for `CBaseObject'};
                  goto LABEL_16;
                }
              }
            }
            else
            {
              v62 = (CSlideOut *)operator new(0x80uLL);
              v14 = v62;
              if ( v62 )
              {
                memset_0(v62, 0, 0x80uLL);
                CCrossFade::CCrossFade(v14);
                v15 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                goto LABEL_16;
              }
            }
            goto LABEL_131;
          }
          v63 = (CPanelAnimation *)operator new(0xA0uLL);
          v14 = v63;
          if ( !v63 )
            goto LABEL_131;
          CPanelAnimation::CPanelAnimation(v63);
          v64 = &CShrinkPanel::`vftable'{for `CBaseObject'};
        }
        else
        {
          v65 = (CPanelAnimation *)operator new(0xA0uLL);
          v14 = v65;
          if ( !v65 )
            goto LABEL_131;
          CPanelAnimation::CPanelAnimation(v65);
          v64 = &CGrowPanel::`vftable'{for `CBaseObject'};
        }
        *(_QWORD *)v14 = v64;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v14 + 136) = 0;
        *(_QWORD *)((char *)v14 + 140) = 0LL;
        *(_QWORD *)((char *)v14 + 148) = 0LL;
        goto LABEL_132;
      }
      v67 = (CVirtualDesktopSwitch *)operator new(0xC0uLL);
      if ( !v67 )
        goto LABEL_131;
      v20 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v67);
      goto LABEL_25;
    }
    v68 = a1 - 91;
    if ( v68 )
    {
      v69 = v68 - 1;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 10;
          if ( v71 )
          {
            v72 = v71 - 2;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                v74 = v73 - 1;
                if ( v74 )
                {
                  v75 = v74 - 3;
                  if ( v75 )
                  {
                    if ( v75 != 1 )
                      goto LABEL_59;
                    v76 = (CSlideOut *)operator new(0x90uLL);
                    v14 = v76;
                    if ( v76 )
                    {
                      CSlideOut::CSlideOut(v76);
                      v18 = &CSlideOutAppBar::`vftable'{for `CBaseObject'};
                      goto LABEL_22;
                    }
                  }
                  else
                  {
                    v77 = (CSlideOut *)operator new(0x88uLL);
                    v14 = v77;
                    if ( v77 )
                    {
                      memset_0(v77, 0, 0x88uLL);
                      CSlideIn::CSlideIn(v14);
                      v18 = &CSlideInAppBar::`vftable'{for `CBaseObject'};
                      goto LABEL_22;
                    }
                  }
                }
                else
                {
                  v78 = (CInputView_SizeOrModeChangeBase *)operator new(0x80uLL);
                  v14 = v78;
                  if ( v78 )
                  {
                    CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v78);
                    v15 = &CInputView_SizeChangeOnly::`vftable'{for `CBaseObject'};
                    goto LABEL_16;
                  }
                }
              }
              else
              {
                v79 = (CInputView_SizeOrModeChangeBase *)operator new(0x80uLL);
                v14 = v79;
                if ( v79 )
                {
                  CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v79);
                  v15 = &CInputView_FloatingToDocked::`vftable'{for `CBaseObject'};
                  goto LABEL_16;
                }
              }
            }
            else
            {
              v80 = (CInputView_SizeOrModeChangeBase *)operator new(0x80uLL);
              v14 = v80;
              if ( v80 )
              {
                CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v80);
                v15 = &CInputView_DockedToFloating::`vftable'{for `CBaseObject'};
                goto LABEL_16;
              }
            }
          }
          else
          {
            v81 = (CSlideOut *)operator new(0x88uLL);
            v14 = v81;
            if ( v81 )
            {
              memset_0(v81, 0, 0x88uLL);
              CSlideIn::CSlideIn(v14);
              v18 = &CInputView::`vftable'{for `CBaseObject'};
              goto LABEL_22;
            }
          }
        }
        else
        {
          v82 = (CStoryboard *)operator new(0x80uLL);
          v14 = v82;
          if ( v82 )
          {
            CStoryboard::CStoryboard(v82, 0);
            v15 = &CTabSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
        }
      }
      else
      {
        v83 = (CStoryboard *)operator new(0x88uLL);
        v14 = v83;
        if ( v83 )
        {
          CStoryboard::CStoryboard(v83, 0);
          *(_BYTE *)(v84 + 128) = 1;
          *(_QWORD *)v84 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
          goto LABEL_17;
        }
      }
      goto LABEL_131;
    }
    v85 = (CStoryboard *)operator new(0x88uLL);
    v14 = v85;
    if ( !v85 )
      goto LABEL_131;
    CStoryboard::CStoryboard(v85, 0);
    v48 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
LABEL_130:
    *(_QWORD *)v14 = v48;
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_BYTE *)v14 + 128) = 0;
    goto LABEL_132;
  }
  if ( a1 == 69 )
  {
    v47 = (CStoryboard *)operator new(0x88uLL);
    v14 = v47;
    if ( !v47 )
      goto LABEL_131;
    CStoryboard::CStoryboard(v47, 0);
    v48 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
    goto LABEL_130;
  }
  if ( a1 > 34 )
  {
    v28 = a1 - 50;
    if ( !v28 )
    {
      v46 = (CStoryboard *)operator new(0x80uLL);
      v14 = v46;
      if ( v46 )
      {
        CStoryboard::CStoryboard(v46, 0);
        v15 = &CWindowClose::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_131;
    }
    v29 = v28 - 6;
    if ( !v29 )
    {
      v45 = (CLauncherAnimationBase *)operator new(0x90uLL);
      v14 = v45;
      if ( v45 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v45);
        v15 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_131;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v44 = (CLauncherAnimationBase *)operator new(0x98uLL);
      v14 = v44;
      if ( v44 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v44);
        *((_BYTE *)v14 + 144) = 0;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *(_QWORD *)v14 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
        goto LABEL_132;
      }
      goto LABEL_131;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      if ( a2 )
      {
        v43 = (CLaunchSwitchBase *)operator new(0xB0uLL);
        v14 = v43;
        if ( v43 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v43);
          *((_BYTE *)v14 + 168) = 0;
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v14 = &CAppLaunch::`vftable'{for `CBaseObject'};
          goto LABEL_132;
        }
        goto LABEL_131;
      }
      goto LABEL_59;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      if ( a2 )
      {
        v41 = (CLaunchSwitchBase *)operator new(0xB0uLL);
        v14 = v41;
        if ( v41 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v41);
          *((_BYTE *)v14 + 168) = 1;
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v14 = &CAppSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_132;
        }
        goto LABEL_131;
      }
      goto LABEL_59;
    }
    v33 = v32 - 5;
    if ( !v33 )
    {
      v40 = (CStoryboard *)operator new(0x80uLL);
      v14 = v40;
      if ( v40 )
      {
        CStoryboard::CStoryboard(v40, 0);
        v15 = &CNoAnimation::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_131;
    }
    v34 = v33 - 2;
    if ( !v34 )
    {
      v39 = (CSlideOut *)operator new(0x80uLL);
      v14 = v39;
      if ( v39 )
      {
        memset_0(v39, 0, 0x80uLL);
        CFadeIn::CFadeIn(v14);
        v15 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_131;
    }
    v35 = v34 - 1;
    if ( v35 )
    {
      if ( v35 != 1 )
        goto LABEL_59;
      v36 = (CAppArrangementBase *)operator new(0xC0uLL);
      v14 = v36;
      if ( !v36 )
        goto LABEL_131;
      CAppArrangementBase::CAppArrangementBase(v36, 1);
      v37 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v38 = (CAppArrangementBase *)operator new(0xC0uLL);
      v14 = v38;
      if ( !v38 )
        goto LABEL_131;
      CAppArrangementBase::CAppArrangementBase(v38, 0);
      v37 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *(_QWORD *)v14 = v37;
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_QWORD *)v14 + 23) = 0LL;
    goto LABEL_132;
  }
  if ( a1 == 34 )
  {
    v27 = (CCrossFade *)operator new(0x80uLL);
    if ( !v27 )
      goto LABEL_131;
    v20 = CCrossFade::CCrossFade(v27);
    goto LABEL_25;
  }
  v5 = a1 - 3;
  if ( !v5 )
  {
    v26 = (CSlide *)operator new(0x88uLL);
    v14 = v26;
    if ( v26 )
    {
      CSlide::CSlide(v26);
      v15 = &CReposition::`vftable'{for `CBaseObject'};
      goto LABEL_16;
    }
    goto LABEL_131;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v25 = (CFadeIn *)operator new(0x80uLL);
    if ( !v25 )
      goto LABEL_131;
    v20 = CFadeIn::CFadeIn(v25);
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v24 = (CFadeOut *)operator new(0x80uLL);
    if ( !v24 )
      goto LABEL_131;
    v20 = CFadeOut::CFadeOut(v24);
    goto LABEL_25;
  }
  v8 = v7 - 9;
  if ( !v8 )
  {
    v22 = (CSlideIn *)operator new(0x88uLL);
    v23 = v22;
    if ( !v22 )
      goto LABEL_131;
    memset_0(v22, 0, 0x88uLL);
    v20 = CSlideIn::CSlideIn(v23);
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v16 = (CFlyoutPopup *)operator new(0x80uLL);
          v14 = v16;
          if ( v16 )
          {
            CFlyoutPopup::CFlyoutPopup(v16);
            v15 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
          goto LABEL_131;
        }
        if ( v12 == 1 )
        {
          v13 = (CFlyoutPopup *)operator new(0x80uLL);
          v14 = v13;
          if ( v13 )
          {
            CFlyoutPopup::CFlyoutPopup(v13);
            v15 = &CHidePopup::`vftable'{for `CBaseObject'};
LABEL_16:
            *(_QWORD *)v14 = v15;
LABEL_17:
            *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            goto LABEL_132;
          }
          goto LABEL_131;
        }
LABEL_59:
        v42 = -2147024809;
        goto LABEL_138;
      }
      v17 = (CSlideOut *)operator new(0x90uLL);
      v14 = v17;
      if ( v17 )
      {
        CSlideOut::CSlideOut(v17);
        v18 = &CSlideOutLong::`vftable'{for `CBaseObject'};
LABEL_22:
        *(_QWORD *)v14 = v18;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v14 + 68) = 1;
        goto LABEL_132;
      }
      goto LABEL_131;
    }
    v19 = (CSlideOut *)operator new(0x90uLL);
    if ( !v19 )
      goto LABEL_131;
    v20 = CSlideOut::CSlideOut(v19);
LABEL_25:
    v14 = v20;
    goto LABEL_132;
  }
  v21 = (CSlideOut *)operator new(0x88uLL);
  v14 = v21;
  if ( v21 )
  {
    memset_0(v21, 0, 0x88uLL);
    CSlideIn::CSlideIn(v14);
    v18 = &CSlideInLong::`vftable'{for `CBaseObject'};
    goto LABEL_22;
  }
LABEL_131:
  v14 = 0LL;
LABEL_132:
  *a3 = v14;
  if ( !v14 )
  {
    v42 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x194Du, 0LL);
    goto LABEL_138;
  }
  v86 = (*(__int64 (__fastcall **)(CSlideOut *))(*(_QWORD *)v14 + 8LL))(v14);
  v42 = v86;
  if ( v86 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v86, 0x194Fu, 0LL);
LABEL_138:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return v42;
  }
  if ( a2 )
    CStoryboard::SetParentStoryboard(*a3, a2);
  return v42;
}
