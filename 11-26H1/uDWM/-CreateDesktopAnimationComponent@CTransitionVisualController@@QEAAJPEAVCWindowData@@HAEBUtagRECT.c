/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C25C0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C361C (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180032AE8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180034A5C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180075FFC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800835F8 (-GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x18008B064 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetBeginClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800965BC (-SetBeginClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800966D0 (-SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@@Z @ 0x180096B38 (-SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@@Z.c)
 *     ?SetDesktopThumbnailVisual@CAnimationComponent@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x180098E28 (-SetDesktopThumbnailVisual@CAnimationComponent@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800ADB70 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800ADC00 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?GetVisualBrushSourceRect@CDesktopThumbnailCVI@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@XZ @ 0x1800ADDB0 (-GetVisualBrushSourceRect@CDesktopThumbnailCVI@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800D024C (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  CBaseObject *v11; // r13
  CDesktopThumbnailCVI *v12; // r12
  CAnimatedTransitionVisual *v13; // rdi
  unsigned int v14; // esi
  unsigned int v15; // ebx
  int v16; // eax
  __int64 ShellWindowForDesktop; // rbx
  struct CPerMonitorDesktopThumbnail *v18; // rax
  __int64 v19; // rsi
  int DesktopThumbnail; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v22; // eax
  int v23; // eax
  int VisualBrush; // eax
  RECT v25; // xmm6
  int v26; // r9d
  bool v27; // sf
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // r10d
  __m128i *VisualBrushSourceRect; // rax
  int v34; // r8d
  int v35; // r9d
  int v36; // r10d
  __m128i v37; // xmm6
  int v38; // r15d
  int v39; // eax
  int v40; // edx
  int v41; // r15d
  int v42; // eax
  int v43; // edx
  int v44; // edx
  unsigned int v46; // [rsp+28h] [rbp-D1h]
  unsigned int v47; // [rsp+28h] [rbp-D1h]
  int v49[2]; // [rsp+58h] [rbp-A1h]
  CAnimatedTransitionVisual *v50; // [rsp+60h] [rbp-99h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-91h] BYREF
  struct CPerMonitorDesktopThumbnail *rc[3]; // [rsp+70h] [rbp-89h] BYREF
  int v53; // [rsp+88h] [rbp-71h]
  struct CStoryboard *v54; // [rsp+90h] [rbp-69h]
  CBaseObject *v55; // [rsp+98h] [rbp-61h] BYREF
  struct CAnimationComponent **v56; // [rsp+A0h] [rbp-59h]
  const struct tagRECT *v57; // [rsp+A8h] [rbp-51h]
  __int128 v58; // [rsp+B0h] [rbp-49h] BYREF
  RECT rc2; // [rsp+C8h] [rbp-31h] BYREF

  v57 = a4;
  v54 = a7;
  v56 = a8;
  v11 = 0LL;
  v55 = 0LL;
  v12 = 0LL;
  rc[0] = 0LL;
  v13 = 0LL;
  v50 = 0LL;
  v14 = *((_DWORD *)a2 + 186) & 0xFFF;
  v53 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a7 + 120LL))(a7, v14) & 0x10;
  v58 = 0LL;
  rc2 = *a4;
  if ( v53 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  v51 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v51) )
  {
    v46 = 1323;
LABEL_5:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      v46,
      0LL);
    goto LABEL_76;
  }
  v16 = CTransitionVisualController::_SetDesktopId(this, v51);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v16,
      0x52Fu,
      0LL);
    goto LABEL_70;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                            v51);
  if ( !ShellWindowForDesktop )
  {
    v46 = 1332;
    goto LABEL_5;
  }
  v18 = (struct CPerMonitorDesktopThumbnail *)CAnimationComponent::operator new();
  rc[1] = v18;
  if ( !v18
    || (v19 = CAnimationComponent::CAnimationComponent((__int64)v18, ShellWindowForDesktop, v14, a3, (__int64)v54)) == 0 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x538u,
      0LL);
    goto LABEL_70;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v55);
  v15 = DesktopThumbnail;
  v11 = v55;
  if ( DesktopThumbnail < 0 )
  {
    v47 = 1338;
    goto LABEL_66;
  }
  DesktopThumbnail = CDesktopThumbnailBase::SetDesktopId(v55, v51);
  v15 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    v47 = 1339;
LABEL_66:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      v47,
      0LL);
    goto LABEL_67;
  }
  *(RECT *)&rc[1] = rc2;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v11, (LPCRECT)&rc[1], rc);
  v15 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      PerMonitorDesktopThumbnail,
      0x53Cu,
      0LL);
    v12 = rc[0];
    goto LABEL_67;
  }
  v22 = CAnimatedTransitionVisual::Create(&v50);
  v15 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v22,
      0x53Eu,
      0LL);
    v12 = rc[0];
    goto LABEL_62;
  }
  if ( a5 )
    *(_BYTE *)(v19 + 67) = 1;
  v12 = rc[0];
  if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
  {
    VisualBrush = CDesktopThumbnailCVI::GetVisualBrush(v12, (struct CVisualBrush *)&v58);
    v15 = VisualBrush;
    if ( VisualBrush >= 0 )
    {
      v13 = v50;
      CAnimatedTransitionVisual::SetSharedVisualBrush(v50, (const struct CVisualBrush *)&v58);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      VisualBrush,
      0x54Bu,
      0LL);
LABEL_62:
    v13 = v50;
    goto LABEL_67;
  }
  v13 = v50;
  v23 = CAnimatedTransitionVisual::SetVisual(v50, v11, 1, &rc2);
  v15 = v23;
  if ( v23 >= 0 )
  {
LABEL_23:
    CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v13, *((_DWORD *)v54 + 18), a3);
    *((_BYTE *)v13 + 908) = CStoryboard::IsRTL();
    CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v19, v13);
    CAnimationComponent::SetDesktopThumbnailVisual((CAnimationComponent *)v19, v12);
    *(_OWORD *)&rc[1] = 0LL;
    if ( (*((_DWORD *)a2 + 186) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 748), &rc2)
      || (*((_DWORD *)a2 + 186) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 780), &rc2) )
    {
      v25 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, (struct tagRECT *)&rc[1]);
      v25 = *(RECT *)&rc[1];
    }
    *(RECT *)(v19 + 88) = v25;
    if ( a6 )
    {
      v50 = 0LL;
      v26 = 0;
      if ( rc2.right - rc2.left >= 0 )
        v26 = rc2.right - rc2.left;
      v27 = rc2.bottom - rc2.top < 0;
      v28 = rc2.bottom - rc2.top;
    }
    else
    {
      *(_OWORD *)&rc[1] = 0LL;
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, (struct tagRECT *)&rc[1]);
      v29 = _mm_cvtsi128_si32((__m128i)v25);
      LODWORD(v50) = v29 - LODWORD(rc[1]);
      v30 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v25, 4));
      HIDWORD(v50) = v30 - HIDWORD(rc[1]);
      v31 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v25, 8)) - v29;
      v26 = 0;
      if ( v31 >= 0 )
        v26 = v31;
      v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v25, 12)) - v30;
      v27 = v28 < 0;
    }
    v32 = 0;
    if ( !v27 )
      v32 = v28;
    *(_QWORD *)v49 = __PAIR64__(v32, v26);
    VisualBrushSourceRect = (__m128i *)CDesktopThumbnailCVI::GetVisualBrushSourceRect((__int64)v12);
    v37 = *VisualBrushSourceRect;
    v38 = VisualBrushSourceRect->m128i_i32[2] - _mm_cvtsi128_si32(*VisualBrushSourceRect);
    v39 = v34;
    if ( v38 >= 0 )
      v39 = v38;
    if ( v35 > v39 )
    {
      v40 = v34;
      if ( v38 >= 0 )
        v40 = v38;
      v36 = MulDiv(v36, v40, v35);
      v49[1] = v36;
      v35 = v38;
      v34 = 0;
      if ( v38 < 0 )
        v35 = 0;
      v49[0] = v35;
    }
    v41 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v37, 4));
    v42 = v34;
    if ( v41 >= 0 )
      v42 = v41;
    if ( v36 > v42 )
    {
      v43 = v34;
      if ( v41 >= 0 )
        v43 = v41;
      v49[0] = MulDiv(v35, v43, v36);
      v34 = 0;
      if ( v41 < 0 )
        v41 = 0;
      v49[1] = v41;
    }
    *((_QWORD *)v13 + 110) = v50;
    *((_QWORD *)v13 + 111) = *(_QWORD *)v49;
    if ( v53 != v34 )
    {
      CAnimatedTransitionVisual::SetBeginClip(v13, (const struct tagRECT *)((char *)a2 + 748));
      CAnimatedTransitionVisual::SetEndClip(v13, (const struct tagRECT *)((char *)a2 + 780));
      *((_BYTE *)v13 + 922) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 812)) )
    {
      *(_OWORD *)(v19 + 104) = *(_OWORD *)((char *)a2 + 812);
      *(_DWORD *)(v19 + 68) = 2;
    }
    *v56 = (struct CAnimationComponent *)v19;
    CBaseObject::AddRef((CBaseObject *)v19);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddddd_EtwEventWriteTransfer(
        (_DWORD)v57,
        v44,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v54 + 18),
        *((_DWORD *)a2 + 186),
        1,
        v57->left,
        v57->top,
        v57->bottom,
        v57->right);
    goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v23,
    0x547u,
    0LL);
LABEL_67:
  CBaseObject::Release((CBaseObject *)v19);
LABEL_70:
  if ( v11 )
    CBaseObject::Release(v11);
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v13 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v13 + 8));
LABEL_76:
  CVisualBrush::~CVisualBrush((CVisualBrush *)&v58);
  return v15;
}
