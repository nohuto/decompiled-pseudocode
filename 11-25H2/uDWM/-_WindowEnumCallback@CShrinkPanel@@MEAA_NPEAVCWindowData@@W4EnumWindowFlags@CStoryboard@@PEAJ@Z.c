/*
 * XREFs of ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD080
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

char __fastcall CShrinkPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CBaseObject *v4; // rbx
  int v5; // r14d
  int v9; // edx
  CWindowPropertyTracker *WPT; // rax
  int PVLTarget; // eax
  int v12; // eax
  struct tagRECT *v13; // rdx
  CWindowPropertyTracker *v14; // rax
  int v15; // eax
  int v16; // eax
  CPanelAnimation *v17; // rcx
  struct tagRECT v18; // xmm6
  bool v19; // zf
  int v20; // ecx
  int v21; // eax
  LONG v22; // edx
  int v23; // ecx
  int v24; // eax
  LONG v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  __int128 v29; // xmm0
  char result; // al
  struct tagRECT v31; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v32; // [rsp+40h] [rbp-20h] BYREF
  CBaseObject *v33; // [rsp+98h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v33 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x29 )
      goto LABEL_29;
    v29 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 136) = 1;
    *(_OWORD *)(a1 + 140) = v29;
    goto LABEL_27;
  }
  v9 = (*(_DWORD *)(a2 + 680) & 0xFFF) - 40;
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_29;
    WPT = CStoryboard::_GetWPT((CStoryboard *)a1);
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(a2 + 40), 0) )
      goto LABEL_29;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v12 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, PVLTarget, &v33);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v4 = v33;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v33 + 5), 1.0);
      v13 = &v31;
      v31 = *(struct tagRECT *)((char *)v4 + 88);
LABEL_7:
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v4 + 5), v13);
      CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v4 + 5), &v31);
      goto LABEL_27;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x5E0u, 0LL);
    goto LABEL_21;
  }
  v14 = CStoryboard::_GetWPT((CStoryboard *)a1);
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v14, *(HWND *)(a2 + 40), 1) )
    goto LABEL_29;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v15 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v16 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v15, &v33);
    v5 = v16;
    if ( v16 >= 0 )
    {
      v4 = v33;
      v18 = *(struct tagRECT *)((char *)v33 + 88);
      v32 = v18;
      v31 = v18;
      v19 = !CPanelAnimation::_ShouldSlideBasedOnLeft(v17, &v31, (const struct tagRECT *)(a1 + 140));
      v20 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8));
      v21 = _mm_cvtsi128_si32((__m128i)v18);
      if ( v19 )
      {
        v25 = *(_DWORD *)(a1 + 148);
        v26 = v20 - v21;
        v27 = 0;
        v31.right = v25;
        if ( v26 >= 0 )
          v27 = v26;
        v22 = v25 - v27;
      }
      else
      {
        v22 = *(_DWORD *)(a1 + 140);
        v23 = v20 - v21;
        v24 = 0;
        if ( v23 >= 0 )
          v24 = v23;
        v31.right = v22 + v24;
      }
      v31.left = v22;
      v13 = &v32;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x5C2u, 0LL);
LABEL_21:
    v4 = v33;
LABEL_27:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_29;
  }
  v28 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 1.0, 0LL);
  v5 = v28;
  if ( v28 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v28, 0x5D8u, 0LL);
LABEL_29:
  result = 1;
  *a4 = v5;
  return result;
}
