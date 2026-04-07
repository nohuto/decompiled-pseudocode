/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CC220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180023944 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800429B8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180074BD4 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18007BF24 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180086A60 (-GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180088B4C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _lambda_074c95c81bff18b0cb7765135f89e04b_::operator() @ 0x1800C6824 (_lambda_074c95c81bff18b0cb7765135f89e04b_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C6EA0 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800C97EC (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800CA24C (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCAF0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  struct tagRECT *v9; // rdi
  CAnimatedTransitionVisual **v10; // r13
  char v11; // r14
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // r14
  int PVLTarget; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // edx
  CAnimatedTransitionVisual **v28; // r14
  int v29; // eax
  CAnimatedTransitionVisual *v30; // rcx
  struct tagPOINT *v31; // rcx
  CBaseObject *v32; // rbx
  char result; // al
  CBaseObject *v34; // [rsp+40h] [rbp-49h] BYREF
  CBaseObject *v35; // [rsp+48h] [rbp-41h] BYREF
  LONG v36; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v37; // [rsp+58h] [rbp-31h] BYREF
  _DWORD *v38; // [rsp+60h] [rbp-29h]
  struct tagRECT v39; // [rsp+68h] [rbp-21h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v41; // [rsp+90h] [rbp+7h] BYREF

  v38 = a4;
  CGroupingStoryboard::_WindowEnumCallback();
  v7 = *(_DWORD *)(a2 + 680);
  v34 = 0LL;
  v8 = v7 & 0xFFF;
  v37 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_86;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_86;
    }
    if ( v8 != 3 )
      goto LABEL_86;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_78;
  }
  v39 = 0LL;
  v41 = 0LL;
  rc = 0LL;
  if ( (v7 & 0x1000000) == 0 || (v11 = 1, IsRectEmpty((const RECT *)(a2 + 684))) )
    v11 = 0;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v39);
  v12 = (struct tagRECT *)(a2 + 700);
  if ( !v11 )
    v12 = &v39;
  v41 = *v12;
  rc = v41;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 128) == 1 )
        *(_DWORD *)(a2 + 680) |= 0x4000000u;
      if ( v11 )
        v9 = (struct tagRECT *)(a2 + 684);
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v25 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              v9,
              0LL,
              17,
              &v34);
      LODWORD(v9) = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v25,
          0x9A9u,
          0LL);
        goto LABEL_78;
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
      v26 = !CStoryboard::IsRTL();
      v27 = 0;
      if ( v26 )
      {
        if ( v39.right - v39.left >= 0 )
          v27 = v39.right - v39.left;
        v27 = -v27;
      }
      else if ( v39.right - v39.left >= 0 )
      {
        v27 = v39.right - v39.left;
      }
      OffsetRect(&rc, v27, 0);
      goto LABEL_62;
    case 3u:
      if ( *(_DWORD *)(a2 + 128) == 1 )
        *(_DWORD *)(a2 + 680) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v20 = 3;
      else
        v20 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      if ( v11 )
      {
        v21 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v20,
                (struct tagRECT *)(a2 + 684),
                0LL,
                -1,
                &v34);
        LODWORD(v9) = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v21,
            0x967u,
            0LL);
          goto LABEL_78;
        }
      }
      else
      {
        v22 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v20, &v34);
        LODWORD(v9) = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v22,
            0x96Bu,
            0LL);
          goto LABEL_78;
        }
      }
      v23 = v34;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v34 + 5), 0.0);
      if ( *((_DWORD *)v23 + 17) != 2 )
        *((_DWORD *)v23 + 17) = 1;
      goto LABEL_62;
    case 0x16u:
      if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_86;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v18 = 7;
      else
        v18 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v19 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v18, &v34);
      LODWORD(v9) = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v19,
          0x980u,
          0LL);
        goto LABEL_78;
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
      v41 = *(struct tagRECT *)((char *)v34 + 88);
      rc = v41;
      goto LABEL_62;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      if ( v11 )
      {
        v16 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 684),
                0LL,
                -1,
                &v34);
        LODWORD(v9) = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v16,
            0x991u,
            0LL);
          goto LABEL_78;
        }
      }
      else
      {
        v17 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v15, &v34);
        LODWORD(v9) = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v17,
            0x995u,
            0LL);
          goto LABEL_78;
        }
      }
      if ( *((_DWORD *)v34 + 17) != 2 )
        *((_DWORD *)v34 + 17) = 1;
LABEL_62:
      v28 = (CAnimatedTransitionVisual **)v34;
      if ( !v34 )
        goto LABEL_86;
      if ( v8 <= 0x1C )
      {
        v29 = 272629772;
        if ( _bittest(&v29, v8) )
        {
          v30 = (CAnimatedTransitionVisual *)*((_QWORD *)v34 + 5);
          v36 = 0;
          CAnimatedTransitionVisual::GetBeginAlpha(v30, (float *)&v36);
          v31 = (struct tagPOINT *)v28[5];
          v39.right = v36;
          *(_QWORD *)&v39.left = a1;
          CAnimatedTransitionVisual::SetBeginRect(v31, &v41);
          CAnimatedTransitionVisual::SetEndRect(v28[5], &rc);
          if ( v8 - 2 <= 1 )
            lambda_074c95c81bff18b0cb7765135f89e04b_::operator()((__int64)&v39, v28);
          if ( (*(_DWORD *)(a2 + 680) & 0x18000) != 0 )
          {
            CGroupingStoryboard::_CreateGuttersForApp(
              a1,
              a2,
              &v41,
              &rc,
              v8,
              (CMILRefCountBase *)&v37,
              (CMILRefCountBase *)&v35);
            v10 = (CAnimatedTransitionVisual **)v37;
            if ( v37 )
              lambda_074c95c81bff18b0cb7765135f89e04b_::operator()((__int64)&v39, (CAnimatedTransitionVisual **)v37);
            v32 = v35;
            if ( v35 )
              lambda_074c95c81bff18b0cb7765135f89e04b_::operator()((__int64)&v39, v10);
            goto LABEL_79;
          }
        }
      }
LABEL_78:
      v32 = v35;
LABEL_79:
      if ( v34 )
        CBaseObject::Release(v34);
      goto LABEL_82;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)a1, (struct CWindowData *)a2, v13, &v34);
      LODWORD(v9) = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v14,
          0x9B2u,
          0LL);
        goto LABEL_78;
      }
      goto LABEL_62;
  }
  v32 = v35;
LABEL_82:
  if ( v10 )
    CBaseObject::Release((CBaseObject *)v10);
  if ( v32 )
    CBaseObject::Release(v32);
LABEL_86:
  result = 1;
  *v38 = (_DWORD)v9;
  return result;
}
