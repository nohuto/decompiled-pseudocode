/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180042DD0
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180042A70 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800431F0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180023944 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18004383C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18004489C (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180044FD0 (-SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180088B4C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // r15d
  int v8; // edx
  unsigned int v9; // edi
  bool v10; // zf
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  CStoryboard *v14; // rcx
  struct tagPOINT **v15; // rbx
  CWindowPropertyTracker *WPT; // rax
  char v17; // al
  bool v18; // di
  int v19; // r8d
  int v20; // edx
  struct tagRECT *p_rc; // rcx
  int v22; // eax
  CAnimatedTransitionVisual *v23; // rcx
  float v24; // xmm1_4
  int v25; // eax
  int v26; // eax
  bool v28; // [rsp+30h] [rbp-50h] BYREF
  int v29; // [rsp+34h] [rbp-4Ch] BYREF
  int v30; // [rsp+38h] [rbp-48h] BYREF
  CBaseObject *v31[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v31[0] = 0LL;
  if ( (a3 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 144LL))(a1) )
    goto LABEL_45;
  v8 = *(_DWORD *)(a2 + 680);
  v30 = 0;
  v29 = 0;
  v9 = v8 & 0xFFF;
  v32 = 0LL;
  if ( v9 > 0x4F )
  {
    if ( v9 != 80 && v9 != 81 && v9 != 82 && v9 != 88 && v9 != 89 && v9 != 90 )
    {
      v11 = v9 - 91;
      v10 = v9 == 91;
LABEL_12:
      if ( !v10 && v11 != 1 )
        goto LABEL_45;
    }
  }
  else if ( v9 != 79 && v9 != 12 && v9 != 13 && v9 != 14 && v9 != 15 && v9 != 16 )
  {
    if ( v9 == 43 )
    {
      v25 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
      v26 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v25, v31);
      v4 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v26,
          0x4E5u,
          0LL);
      goto LABEL_42;
    }
    v11 = v9 - 77;
    v10 = v9 == 77;
    goto LABEL_12;
  }
  v12 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v8 & 0xFFF);
  v13 = CStoryboard::_CreateAndAddAnimationComponent(a1, (struct CWindowData *)a2, 1, v12, v31);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v15 = (struct tagPOINT **)v31[0];
    v28 = 0;
    v32 = *(struct tagRECT *)((char *)v31[0] + 88);
    rc = v32;
    WPT = CStoryboard::_GetWPT(v14);
    if ( (int)CWindowPropertyTracker::GetWindowEndCloak(WPT, *(HWND *)(a2 + 40), &v28) >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 152LL))(a1, v9, &v30, &v29);
      v18 = v28;
      if ( v17 )
      {
        v19 = v29;
        if ( v28 )
          v19 = -v29;
        v20 = v30;
        if ( v28 )
          v20 = -v30;
        p_rc = &v32;
        if ( !v28 )
          p_rc = &rc;
        OffsetRect(p_rc, v20, v19);
      }
      v22 = *(_DWORD *)(a2 + 680);
      if ( (v22 & 0x1000000) != 0 )
        rc = *(struct tagRECT *)(a2 + 700);
      if ( (v22 & 0x800000) != 0 )
        v32 = *(struct tagRECT *)(a2 + 732);
      CAnimatedTransitionVisual::SetBeginRect(v15[5], &rc);
      CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)v15[5], &v32);
      v23 = (CAnimatedTransitionVisual *)v15[5];
      if ( v18 )
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v23, 1.0);
        v24 = 0.0;
      }
      else
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v23, 0.0);
        v24 = FLOAT_1_0;
      }
      CAnimatedTransitionVisual::SetEndAlpha((CAnimatedTransitionVisual *)v15[5], v24);
    }
    goto LABEL_43;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x4BCu, 0LL);
LABEL_42:
  v15 = (struct tagPOINT **)v31[0];
LABEL_43:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
LABEL_45:
  *a4 = v4;
  return 1;
}
