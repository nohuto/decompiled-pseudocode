/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C3050
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6170 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x18002DBB4 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18006B68C (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18006B6D8 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator() @ 0x1800C0504 (_CGroupingStoryboard--_Create3DComponent_--_44_--_lambda_1_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800C38DC (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x1800C41B4 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800CF5C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGroupingStoryboard::_Create3DComponent(CGroupingStoryboard *this, struct CWindowData *a2)
{
  int v4; // edx
  int v5; // r13d
  int v6; // esi
  CBaseObject *v7; // r15
  CBaseObject *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  struct tagRECT *p_rc; // rbx
  int v14; // eax
  struct tagRECT v15; // xmm0
  int v16; // eax
  CBaseObject *v17; // rbx
  unsigned int v19; // [rsp+20h] [rbp-49h]
  CBaseObject *v20; // [rsp+50h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v21; // [rsp+58h] [rbp-11h] BYREF
  CAnimatedTransitionVisual **v22; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v24; // [rsp+78h] [rbp+Fh] BYREF

  v20 = 0LL;
  v4 = *((_DWORD *)a2 + 186);
  v21 = 0LL;
  v5 = v4 & 0xFFF;
  v22 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  if ( v5 == 1 || (v4 & 0xFFF) == 3 || (v4 & 0xFFF) == 4 )
  {
    if ( *((_DWORD *)a2 + 32) == 1 )
    {
      v4 |= 0x4000000u;
      *((_DWORD *)a2 + 186) = v4;
    }
    if ( (v4 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
      LOBYTE(v6) = 1;
    if ( (*((_DWORD *)a2 + 186) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 748)) )
    {
      v16 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 186));
      v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v16, 0LL, 0LL, -1, v6, &v20);
      v6 = v10;
      if ( v10 < 0 )
      {
        v19 = 2151;
        goto LABEL_35;
      }
      if ( *((_DWORD *)a2 + 32) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v24);
        goto LABEL_26;
      }
      v15 = *(struct tagRECT *)((char *)v20 + 88);
    }
    else
    {
      rc = 0LL;
      if ( v5 == 1 )
      {
        v11 = -*((_DWORD *)a2 + 191);
        v12 = -HIDWORD(*(_QWORD *)((char *)a2 + 764));
        rc = *(struct tagRECT *)((char *)a2 + 764);
        OffsetRect(&rc, v11, v12);
      }
      p_rc = &rc;
      if ( v5 != 1 )
        p_rc = 0LL;
      v14 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 186));
      v6 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
             this,
             a2,
             0,
             v14,
             (struct tagRECT *)((char *)a2 + 748),
             p_rc,
             -1,
             v6,
             &v20);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v6,
          0x862u,
          0LL);
        goto LABEL_36;
      }
      v15 = *(struct tagRECT *)((char *)a2 + 764);
    }
    v24 = v15;
    goto LABEL_26;
  }
  if ( (v4 & 0xFFF) == 0x1E )
  {
    *(_QWORD *)&rc.left = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v24, (struct tagRECT **)&rc, 0LL);
    v9 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
           this,
           *((unsigned int *)a2 + 186));
    v10 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
            this,
            a2,
            0,
            v9,
            *(struct tagRECT **)&rc.left,
            0LL,
            -1,
            &v20);
    v6 = v10;
    if ( v10 < 0 )
    {
      v19 = 2170;
LABEL_35:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, v19, 0LL);
      goto LABEL_36;
    }
  }
LABEL_26:
  v17 = v20;
  *(_QWORD *)&rc.left = this;
  CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v20 + 5), &v24);
  CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v17 + 5), &v24);
  CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator()(
    (CGroupingStoryboard **)&rc,
    (CAnimatedTransitionVisual **)v17);
  if ( *((_DWORD *)v17 + 17) != 2 )
    *((_DWORD *)v17 + 17) = 1;
  if ( (*((_DWORD *)a2 + 186) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v24, &v24, v5, &v21, &v22);
    v7 = (CBaseObject *)v21;
    if ( v21 )
      CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator()((CGroupingStoryboard **)&rc, v21);
    v8 = (CBaseObject *)v22;
    if ( v22 )
      CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator()((CGroupingStoryboard **)&rc, v22);
  }
LABEL_36:
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v8 )
    CBaseObject::Release(v8);
  return (unsigned int)v6;
}
