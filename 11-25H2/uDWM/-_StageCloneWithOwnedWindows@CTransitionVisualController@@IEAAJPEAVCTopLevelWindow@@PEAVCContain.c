/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008E25C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800033F8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x180055730 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180085264 (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x1800997C8 (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800D1BCC (CTransitionVisualController--ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800D1E64 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
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
  CBaseObject *v10; // rsi
  bool v11; // zf
  struct tagRECT *v12; // rdi
  unsigned int v13; // ebx
  int v14; // r9d
  bool v15; // r9
  int inserted; // eax
  struct tagRECT v17; // xmm1
  int bottom; // r11d
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int left; // r8d
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  int v30; // ecx
  int v31; // r8d
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned int v40; // [rsp+20h] [rbp-58h]
  bool v41; // [rsp+30h] [rbp-48h] BYREF
  CContainerVisual *v42; // [rsp+38h] [rbp-40h] BYREF
  struct CVisual *v43; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+48h] [rbp-30h] BYREF
  CContainerVisual **v45; // [rsp+58h] [rbp-20h]
  bool *v46; // [rsp+60h] [rbp-18h]
  int v47; // [rsp+C8h] [rbp+50h] BYREF

  v47 = a4;
  v5 = *(_DWORD *)(a1 + 48);
  v42 = a3;
  WindowData = CTopLevelWindow::GetWindowData(a2);
  v10 = 0LL;
  v41 = 1;
  v11 = *(_QWORD *)(a1 + 96) == -1LL;
  v12 = (struct tagRECT *)WindowData;
  v43 = 0LL;
  if ( !v11 )
  {
    *(_QWORD *)&rc.right = a1;
    *(_QWORD *)&rc.left = &v47;
    LOBYTE(v9) = 1;
    v45 = &v42;
    v46 = &v41;
    CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___(WindowData, &rc, v9);
    inserted = CTransitionVisualController::_StageClone((CTransitionVisualController *)a1, a2, v42, v15, 1, &v41);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v40 = 242;
    }
    else
    {
      if ( !*((_DWORD *)v42 + 44) )
      {
        v13 = -2003304447;
        v40 = 247;
        goto LABEL_3;
      }
      if ( a5 != 1 )
        goto LABEL_53;
      v11 = (v12[42].right & 0x1000000) == 0;
      v17 = v12[3];
      rc = v17;
      if ( !v11 )
      {
        bottom = v12[42].bottom;
        v19 = 0;
        v20 = _mm_cvtsi128_si32((__m128i)v17);
        v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v17, 8)) - v20;
        if ( v21 >= 0 )
          v19 = v21;
        v22 = 0;
        v23 = v12[43].top - bottom;
        if ( v23 >= 0 )
          v22 = v12[43].top - bottom;
        if ( v22 > v19 )
        {
          v24 = 0;
          if ( v23 >= 0 )
            v24 = v12[43].top - bottom;
          rc.right = v20 + v24;
        }
        v25 = 0;
        left = v12[43].left;
        if ( rc.bottom - rc.top >= 0 )
          v25 = rc.bottom - rc.top;
        v27 = 0;
        v28 = v12[43].right - left;
        if ( v28 >= 0 )
          v27 = v12[43].right - left;
        if ( v27 > v25 )
        {
          v29 = 0;
          if ( v28 >= 0 )
            v29 = v12[43].right - left;
          rc.bottom = rc.top + v29;
        }
        OffsetRect(&rc, bottom, left);
      }
      if ( (v12[42].right & 0x800000) != 0 )
      {
        v30 = 0;
        v31 = v12[45].top - v12[44].bottom;
        if ( v31 >= 0 )
          v30 = v12[45].top - v12[44].bottom;
        v32 = 0;
        if ( rc.right - rc.left >= 0 )
          v32 = rc.right - rc.left;
        if ( v30 > v32 )
        {
          v33 = 0;
          if ( v31 >= 0 )
            v33 = v12[45].top - v12[44].bottom;
          rc.right = rc.left + v33;
        }
        v34 = 0;
        v35 = v12[45].right - v12[45].left;
        if ( rc.bottom - rc.top >= 0 )
          v34 = rc.bottom - rc.top;
        v36 = 0;
        if ( v35 >= 0 )
          v36 = v12[45].right - v12[45].left;
        if ( v36 > v34 )
        {
          v37 = 0;
          if ( v35 >= 0 )
            v37 = v12[45].right - v12[45].left;
          rc.bottom = rc.top + v37;
        }
      }
      v38 = CTransitionVisualController::CreateBackground(&rc, &v43);
      v13 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v38,
          0x118u,
          0LL);
        v10 = v43;
        goto LABEL_50;
      }
      v10 = v43;
      inserted = CContainerVisual::InsertChildAfter(v42, v43, 0LL);
      v13 = inserted;
      if ( inserted >= 0 )
        goto LABEL_53;
      v40 = 281;
    }
    v14 = inserted;
    goto LABEL_49;
  }
  v13 = -2147467259;
  v40 = 221;
LABEL_3:
  v14 = v13;
LABEL_49:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v14,
    v40,
    0LL);
LABEL_50:
  CContainerVisual::RemoveAllChildren(v42);
  while ( *(_DWORD *)(a1 + 48) > v5 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CFlickTextFeedback,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_53:
  if ( v10 )
    CBaseObject::Release(v10);
  return v13;
}
