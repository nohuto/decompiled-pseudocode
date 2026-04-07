/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180033AF8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StageCloneWithOwn.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180075A0C (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18008D00C (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800CE5E4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        CTopLevelWindow *a2,
        CContainerVisual *a3,
        int a4,
        int a5)
{
  unsigned int v5; // r15d
  struct CWindowData *WindowData; // rax
  __int64 v9; // r8
  struct CVisual *v10; // rsi
  bool v11; // zf
  struct tagRECT *v12; // rdi
  unsigned int v13; // ebx
  int v14; // r9d
  bool v15; // r9
  int inserted; // eax
  struct tagRECT v17; // xmm1
  int v18; // edx
  int bottom; // r11d
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  int v24; // r10d
  int left; // r8d
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-58h]
  bool v35; // [rsp+30h] [rbp-48h] BYREF
  CContainerVisual *v36; // [rsp+38h] [rbp-40h] BYREF
  struct CVisual *v37; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+48h] [rbp-30h] BYREF
  CContainerVisual **v39; // [rsp+58h] [rbp-20h]
  bool *v40; // [rsp+60h] [rbp-18h]
  int v41; // [rsp+C8h] [rbp+50h] BYREF

  v41 = a4;
  v5 = *(_DWORD *)(a1 + 48);
  v36 = a3;
  WindowData = CTopLevelWindow::GetWindowData(a2);
  v10 = 0LL;
  v35 = 1;
  v11 = *(_QWORD *)(a1 + 96) == -1LL;
  v12 = (struct tagRECT *)WindowData;
  v37 = 0LL;
  if ( !v11 )
  {
    *(_QWORD *)&rc.right = a1;
    *(_QWORD *)&rc.left = &v41;
    LOBYTE(v9) = 1;
    v39 = &v36;
    v40 = &v35;
    CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___(
      WindowData,
      &rc,
      v9);
    inserted = CTransitionVisualController::_StageClone((CTransitionVisualController *)a1, a2, v36, v15, 1, &v35);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v34 = 242;
    }
    else
    {
      if ( !*((_DWORD *)v36 + 42) )
      {
        v13 = -2003304447;
        v34 = 247;
        goto LABEL_3;
      }
      if ( a5 != 1 )
        goto LABEL_45;
      v11 = (v12[46].right & 0x1000000) == 0;
      v17 = v12[3];
      rc = v17;
      if ( !v11 )
      {
        v18 = 0;
        bottom = v12[46].bottom;
        v20 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v17, 8));
        if ( v12[47].top - bottom >= 0 )
          v18 = v12[47].top - bottom;
        v21 = _mm_cvtsi128_si32((__m128i)v17);
        v22 = 0;
        v23 = v20 - v21;
        if ( v23 >= 0 )
          v22 = v23;
        if ( v18 > v22 )
          rc.right = v18 + v21;
        v24 = 0;
        left = v12[47].left;
        if ( v12[47].right - left >= 0 )
          v24 = v12[47].right - left;
        v26 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v26 = rc.bottom - rc.top;
        if ( v24 > v26 )
          rc.bottom = rc.top + v24;
        OffsetRect(&rc, bottom, left);
      }
      if ( (v12[46].right & 0x800000) != 0 )
      {
        v27 = 0;
        if ( v12[49].top - v12[48].bottom >= 0 )
          v27 = v12[49].top - v12[48].bottom;
        v28 = 0;
        if ( rc.right - rc.left >= 0 )
          v28 = rc.right - rc.left;
        if ( v27 > v28 )
          rc.right = v27 + rc.left;
        v29 = 0;
        if ( v12[49].right - v12[49].left >= 0 )
          v29 = v12[49].right - v12[49].left;
        v30 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v30 = rc.bottom - rc.top;
        if ( v29 > v30 )
          rc.bottom = v29 + rc.top;
      }
      v31 = CTransitionVisualController::CreateBackground(&rc, &v37);
      v13 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v31,
          0x118u,
          0LL);
        v10 = v37;
        goto LABEL_42;
      }
      v10 = v37;
      inserted = CContainerVisual::InsertChildAfter(v36, v37, 0LL);
      v13 = inserted;
      if ( inserted >= 0 )
        goto LABEL_45;
      v34 = 281;
    }
    v14 = inserted;
    goto LABEL_41;
  }
  v13 = -2147467259;
  v34 = 221;
LABEL_3:
  v14 = v13;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v14,
    v34,
    0LL);
LABEL_42:
  CContainerVisual::RemoveAllChildren(v36);
  while ( 1 )
  {
    v32 = *(_DWORD *)(a1 + 48);
    if ( v32 <= v5 )
      break;
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (v32 - 1)),
      0);
    DynArray<CFlickTextFeedback,0>::RemoveAt(a1 + 24, (unsigned int)(*(_DWORD *)(a1 + 48) - 1));
  }
LABEL_45:
  if ( v10 )
    CBaseObject::Release(v10);
  return v13;
}
