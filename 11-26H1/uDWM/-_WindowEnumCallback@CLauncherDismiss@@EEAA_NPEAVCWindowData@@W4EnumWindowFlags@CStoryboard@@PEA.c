/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002D570
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002D8E0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x18002DBB4 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180035E88 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x18003841C (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180065C6C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18006B68C (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18006D5B0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18007BB70 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C361C (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char result; // al
  int v9; // ebx
  char v10; // r12
  struct tagRECT *v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // al
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int PVLTarget; // eax
  int v25; // eax
  CBaseObject *v26; // rdi
  struct tagRECT v27; // xmm0
  CBaseObject *v28; // rdi
  struct tagRECT **v29; // [rsp+28h] [rbp-58h]
  char v30; // [rsp+40h] [rbp-40h]
  CBaseObject *v31; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT *v33; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v34; // [rsp+68h] [rbp-18h] BYREF

  result = CFlyoutPopup::_WindowEnumCallback();
  v30 = result;
  if ( *a4 >= 0 && result )
  {
    v9 = 0;
    v10 = 0;
    v31 = 0LL;
    if ( (a3 & 1) != 0 )
    {
      v32 = 0LL;
      CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v32);
      v33 = 0LL;
      v11 = (struct tagRECT *)(a1 + 128);
      v34 = 0LL;
      v32 = 0LL;
      CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 128), &v34, &v33, &v32, v29);
      v12 = *(_DWORD *)(a2 + 744);
      v13 = v12 & 0xFFF;
      switch ( v13 )
      {
        case 3:
          if ( *(_DWORD *)(a2 + 128) == 1 )
          {
            if ( *(_BYTE *)(a1 + 144) )
            {
              v34 = *v11;
              v32 = v34;
            }
            PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v12);
            v25 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    PVLTarget,
                    &v34,
                    0,
                    &v31);
            v9 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v25,
                0xB7Eu,
                0LL);
              goto LABEL_35;
            }
            v26 = v31;
            if ( *((_DWORD *)v31 + 17) != 2 )
            {
              v27 = *v11;
              *((_DWORD *)v31 + 17) = 2;
              *(struct tagRECT *)((char *)v26 + 104) = v27;
            }
          }
          else
          {
            v22 = CLauncherDismiss::GetPVLTarget(a1, v12);
            v23 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    v22,
                    v33,
                    0LL,
                    -1,
                    &v31);
            v9 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v23,
                0xB72u,
                0LL);
              goto LABEL_35;
            }
          }
          break;
        case 22:
          v16 = ContainsRect((const struct tagRECT *)(a1 + 128), (const struct tagRECT *)(a2 + 48));
          if ( v16 && *(_BYTE *)(a1 + 144) )
          {
            v10 = 1;
            v18 = CLauncherDismiss::GetPVLTarget(a1, v17);
            v19 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    v18,
                    &v31);
            v9 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v19,
                0xB5Cu,
                0LL);
              goto LABEL_35;
            }
          }
          else
          {
            if ( (*(_BYTE *)(a2 + 736) & 1) == 0 || (*(_BYTE *)(a2 + 740) & 1) != 0 || !v16 )
              goto LABEL_37;
            v20 = CLauncherDismiss::GetPVLTarget(a1, v17);
            v21 = CStoryboard::_CreateAndAddAnimationComponent(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    v20,
                    &v31);
            v9 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v21,
                0xB69u,
                0LL);
              goto LABEL_35;
            }
            v34 = *(struct tagRECT *)(a2 + 48);
            v32 = v34;
          }
          break;
        case 43:
          v10 = 1;
          v14 = CLauncherDismiss::GetPVLTarget(a1, v12);
          v15 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v14,
                  &v31);
          v9 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v15,
              0xB90u,
              0LL);
            goto LABEL_35;
          }
          break;
        default:
          goto LABEL_37;
      }
      v28 = v31;
      if ( v31 )
      {
        if ( !v10 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v31 + 5), 0.0);
          CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v28 + 5), &v34);
          CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v28 + 5), &v32);
        }
        goto LABEL_35;
      }
LABEL_37:
      result = v30;
      goto LABEL_38;
    }
    if ( (a3 & 4) == 0 )
    {
LABEL_38:
      *a4 = v9;
      return result;
    }
    if ( (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x2B )
      goto LABEL_37;
    *(_BYTE *)(a1 + 144) = 1;
LABEL_35:
    if ( v31 )
      CBaseObject::Release(v31);
    goto LABEL_37;
  }
  return result;
}
