/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180023944 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800437FC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18004383C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C6EE0 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800CA534 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800CA568 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CAnimatedTransitionVisual **v4; // rbx
  int v5; // r14d
  CStoryboard *v9; // rcx
  CWindowPropertyTracker *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  CPanelAnimation *v14; // rcx
  int v15; // ecx
  LONG v16; // edx
  LONG v17; // edx
  int v18; // eax
  struct tagPOINT *v19; // rcx
  int v20; // eax
  CWindowPropertyTracker *WPT; // rax
  __int64 v22; // rdx
  int PVLTarget; // eax
  int v24; // eax
  struct tagRECT v25; // xmm0
  struct tagPOINT *v26; // rcx
  __int128 v27; // xmm0
  struct tagRECT v29; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v30; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v31; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x28 )
      goto LABEL_31;
    v27 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 136) = 1;
    *(_OWORD *)(a1 + 140) = v27;
    goto LABEL_29;
  }
  v9 = (CStoryboard *)((*(_DWORD *)(a2 + 680) & 0xFFFu) - 40);
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x28 )
  {
    WPT = CStoryboard::_GetWPT(v9);
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(v22 + 40), 1) )
      goto LABEL_31;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v24 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, PVLTarget, &v31);
    v5 = v24;
    if ( v24 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v31;
      if ( *(_BYTE *)(a1 + 136) )
        v25 = *(struct tagRECT *)(a1 + 140);
      else
        v25 = *(struct tagRECT *)((char *)v31 + 88);
      v26 = (struct tagPOINT *)*((_QWORD *)v31 + 5);
      v30 = v25;
      CAnimatedTransitionVisual::SetBeginRect(v26, &v30);
      CAnimatedTransitionVisual::SetEndRect(v4[5], &v30);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0x567u, 0LL);
LABEL_16:
    v4 = (CAnimatedTransitionVisual **)v31;
LABEL_29:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x29 )
    goto LABEL_31;
  v10 = CStoryboard::_GetWPT(v9);
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v10, *(HWND *)(v11 + 40), 0) )
    goto LABEL_31;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v12 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v13 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v12, &v31);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v31;
      v29 = *(struct tagRECT *)((char *)v31 + 88);
      v30 = v29;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v14, &v29, (const struct tagRECT *)(a1 + 140)) )
      {
        v15 = 0;
        v16 = *(_DWORD *)(a1 + 140);
        if ( v29.right - v29.left >= 0 )
          v15 = v29.right - v29.left;
        v30.right = v16 + v15;
      }
      else
      {
        v17 = *(_DWORD *)(a1 + 148);
        v18 = 0;
        v30.right = v17;
        if ( v29.right - v29.left >= 0 )
          v18 = v29.right - v29.left;
        v16 = v17 - v18;
      }
      v19 = (struct tagPOINT *)v4[5];
      v30.left = v16;
      CAnimatedTransitionVisual::SetBeginRect(v19, &v30);
      CAnimatedTransitionVisual::SetEndRect(v4[5], &v29);
      CAnimatedTransitionVisual::SetBeginAlpha(v4[5], 0.0);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x548u, 0LL);
    goto LABEL_16;
  }
  v20 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v5 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x55Fu, 0LL);
LABEL_31:
  *a4 = v5;
  return 1;
}
