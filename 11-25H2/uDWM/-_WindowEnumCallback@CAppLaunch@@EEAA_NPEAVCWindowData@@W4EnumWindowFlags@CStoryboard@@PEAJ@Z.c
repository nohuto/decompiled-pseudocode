/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CC020
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180074BD4 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180088B4C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C6E60 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C8F8C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800CA24C (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCAF0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, struct tagRECT *a2, char a3, int *a4)
{
  CAnimatedTransitionVisual **v8; // rbx
  __int16 right; // r9
  int v10; // r9d
  int v11; // edi
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // eax
  int v17; // r8d
  int PVLTarget; // eax
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  struct tagPOINT *v23; // rcx
  int v24; // r9d
  char result; // al
  struct tagRECT v26; // [rsp+30h] [rbp-28h] BYREF
  struct CAnimationComponent *v27; // [rsp+68h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = 0LL;
  right = a2[42].right;
  v27 = 0LL;
  v10 = right & 0xFFF;
  v11 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_26;
    v24 = v10 - 1;
    if ( v24 )
    {
      if ( (unsigned int)(v24 - 2) >= 2 )
        goto LABEL_26;
    }
    else
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_24;
  }
  v12 = v10 - 1;
  if ( !v12 || (v13 = v12 - 2) == 0 || (v14 = v13 - 1) == 0 )
  {
LABEL_7:
    v16 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x8F6u, 0LL);
      goto LABEL_26;
    }
    goto LABEL_24;
  }
  v15 = v14 - 18;
  if ( v15 )
  {
    if ( v15 != 8 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), a2 + 3) )
    goto LABEL_26;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v17);
    v19 = CStoryboard::_CreateAndAddNullComponentWithWindow(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            &v27);
    v11 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x900u, 0LL);
    goto LABEL_13;
  }
  if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2) )
    goto LABEL_26;
  v21 = CAppLaunch::GetPVLTarget(a1, v20);
  v22 = CStoryboard::_CreateAndAddAnimationComponent((CStoryboard *)a1, (struct CWindowData *)a2, 0, v21, &v27);
  v11 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x906u, 0LL);
LABEL_13:
    v8 = (CAnimatedTransitionVisual **)v27;
    goto LABEL_24;
  }
  v8 = (CAnimatedTransitionVisual **)v27;
  v23 = (struct tagPOINT *)*((_QWORD *)v27 + 5);
  v26 = *(struct tagRECT *)((char *)v27 + 88);
  CAnimatedTransitionVisual::SetBeginRect(v23, &v26);
  CAnimatedTransitionVisual::SetEndRect(v8[5], &v26);
LABEL_24:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
LABEL_26:
  result = 1;
  *a4 = v11;
  return result;
}
