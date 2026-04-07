/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD310
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800275D0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800429B8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800437FC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18004383C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180044954 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004499C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180087FF0 (-GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180088B4C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x18008A1A0 (-GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18008C910 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800A3ECC (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C7AA0 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800CA568 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800CA754 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // eax
  CBaseObject *v11; // rsi
  double v12; // xmm8_8
  LONG *TaggedWindow; // rax
  LONG bottom; // edi
  int v15; // edx
  double v16; // xmm6_8
  int v17; // ecx
  __m128i v18; // xmm6
  CWindowPropertyTracker *WPT; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  CWindowPropertyTracker *v26; // rax
  CStoryboard *v27; // rcx
  int v28; // eax
  struct tagRECT v29; // xmm0
  CWindowPropertyTracker *v30; // rax
  CStoryboard *v31; // rcx
  CWindowPropertyTracker *v32; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  struct tagSIZE *v37; // r8
  struct tagPOINT *v38; // rdx
  CBaseObject *v40; // [rsp+38h] [rbp-79h] BYREF
  struct tagPOINT v41; // [rsp+40h] [rbp-71h] BYREF
  struct tagSIZE v42; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v43; // [rsp+50h] [rbp-61h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+70h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+80h] [rbp-31h] BYREF
  RECT v47; // [rsp+90h] [rbp-21h] BYREF

  v4 = 0;
  v40 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_71;
  v43 = 0LL;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v43);
  v8 = *(_DWORD *)(a2 + 680);
  v9 = v8 & 0xFFF;
  if ( (unsigned int)v9 <= 0x2B )
  {
    if ( (_DWORD)v9 == 43 )
    {
      v22 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
      v23 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v22, &v40);
      v4 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v23,
          0x2E3u,
          0LL);
      goto LABEL_69;
    }
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( v8 < 0 )
      {
        v21 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
        v4 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v21,
            0x2DDu,
            0LL);
      }
      goto LABEL_71;
    }
    if ( (_DWORD)v9 == 8 )
    {
      WPT = CStoryboard::_GetWPT((CStoryboard *)v9);
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(a2 + 40), 0) )
        goto LABEL_71;
      *(_DWORD *)(a2 + 680) |= 0x200000u;
      v20 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
      v4 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v20,
          0x28Cu,
          0LL);
      else
        *(_BYTE *)(*((_QWORD *)v40 + 5) + 928LL) = 1;
      goto LABEL_69;
    }
    if ( (_DWORD)v9 != 11 )
    {
      if ( (_DWORD)v9 != 24 && (_DWORD)v9 != 42 )
        goto LABEL_71;
      goto LABEL_38;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 680) = v8;
LABEL_11:
    v10 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x29Au, 0LL);
    }
    else
    {
      *(_DWORD *)(a2 + 680) = v8;
      if ( (v8 & 0xFFF) == 0x3C )
      {
        v11 = v40;
        *(_BYTE *)(*((_QWORD *)v40 + 5) + 928LL) = 1;
        v47 = 0LL;
        rcSrc1 = 0LL;
        if ( (int)CAnimatedTransitionVisual::GetBeginRect(*((CAnimatedTransitionVisual **)v11 + 5), &v47) >= 0
          && (int)CAnimatedTransitionVisual::GetEndRect(*((CAnimatedTransitionVisual **)v11 + 5), &rcSrc1) >= 0 )
        {
          v12 = 0.0;
          v42 = 0LL;
          *(double *)&v41 = 0.0;
          rcDst = 0LL;
          rcSrc2 = 0LL;
          TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
          bottom = v43.bottom;
          if ( TaggedWindow )
          {
            v15 = 0;
            rcSrc2.left = TaggedWindow[12];
            if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
              v15 = TaggedWindow[15] - TaggedWindow[13];
            rcSrc2.top = v43.bottom - v15;
            rcSrc2.right = TaggedWindow[14];
            rcSrc2.bottom = v43.bottom;
          }
          v16 = 0.0;
          if ( v47.bottom <= rcSrc1.bottom )
          {
            if ( v47.bottom < rcSrc1.bottom )
            {
              if ( IntersectRect(&rcDst, &v47, &rcSrc2) && !IsRectEmpty(&rcDst) )
              {
                v36 = 0;
                if ( rcDst.bottom - rcDst.top >= 0 )
                  v36 = rcDst.bottom - rcDst.top;
                v12 = (double)-v36;
                *(double *)&v41 = v12;
              }
              v18 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
              goto LABEL_60;
            }
          }
          else
          {
            v12 = (double)(v43.bottom - v47.bottom);
            *(double *)&v41 = v12;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) && !IsRectEmpty(&rcDst) )
            {
              v17 = 0;
              if ( rcDst.bottom - rcDst.top >= 0 )
                v17 = rcDst.bottom - rcDst.top;
              v18 = _mm_cvtsi32_si128(-v17);
LABEL_60:
              *(_QWORD *)&v16 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
              v42 = *(struct tagSIZE *)&v16;
            }
          }
          if ( v16 == 0.0 )
            v37 = 0LL;
          else
            v37 = &v42;
          if ( v12 == 0.0 )
            v38 = 0LL;
          else
            v38 = &v41;
          CAnimatedTransitionVisual::SetChopPosition(
            *((CAnimatedTransitionVisual **)v11 + 5),
            (const double *)v38,
            (const double *)v37);
        }
      }
    }
LABEL_69:
    if ( v40 )
      CBaseObject::Release(v40);
    goto LABEL_71;
  }
  v24 = v9 - 60;
  if ( !v24 )
    goto LABEL_11;
  v25 = v24 - 9;
  if ( !v25 )
  {
    v35 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
    v4 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v35, 0x282u, 0LL);
    goto LABEL_69;
  }
  v9 = (unsigned int)(v25 - 1);
  if ( !(_DWORD)v9 )
  {
    v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
    v4 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v34, 0x27Eu, 0LL);
    goto LABEL_69;
  }
  if ( (_DWORD)v9 != 17 )
    goto LABEL_71;
LABEL_38:
  v26 = CStoryboard::_GetWPT((CStoryboard *)v9);
  if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(v26, *(HWND *)(a2 + 40), 0)
    || ((v28 = *(_DWORD *)(a2 + 680) & 0xFFF, v28 == 42) || v28 == 87)
    && CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
  {
    v29 = *(struct tagRECT *)(a2 + 48);
    *(double *)&v41 = 0.0;
    v42 = 0LL;
    rcDst = v29;
    v30 = CStoryboard::_GetWPT(v27);
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v30, *(HWND *)(a2 + 40), &v41) >= 0 )
      OffsetRect(&rcDst, v41.x - rcDst.left, v41.y - rcDst.top);
    v32 = CStoryboard::_GetWPT(v31);
    if ( (int)CWindowPropertyTracker::GetWindowEndSize(v32, *(HWND *)(a2 + 40), &v42) >= 0 )
    {
      rcDst.right = rcDst.left + v42.cx;
      rcDst.bottom = v42.cy + rcDst.top;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl(&rcDst, &v43);
    v33 = CSlide::_SlideWindowHorizontally(
            a1,
            (struct CWindowData *)a2,
            &v43,
            1,
            (__m128i *)&rcDst,
            (struct tagPOINT ***)&v40);
    v4 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v33, 0x278u, 0LL);
    else
      *(_BYTE *)(*((_QWORD *)v40 + 5) + 928LL) = 1;
    goto LABEL_69;
  }
LABEL_71:
  *a4 = v4;
  return 1;
}
