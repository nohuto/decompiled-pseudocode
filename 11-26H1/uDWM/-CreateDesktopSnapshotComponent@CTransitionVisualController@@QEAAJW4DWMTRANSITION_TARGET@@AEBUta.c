/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CEF3C
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800C1F30 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180032AE8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180075FFC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        int *a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v8; // rsi
  LONG v9; // r12d
  LONG v10; // r13d
  void *v11; // rbx
  int v12; // eax
  __int64 v13; // rbp
  unsigned int v14; // edi
  struct CVisual *RootVisualForDesktop; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-58h]
  CAnimatedTransitionVisual *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]
  void *v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v22 = 0LL;
  v9 = 0;
  if ( a3->right - a3->left >= 0 )
    v9 = a3->right - a3->left;
  LODWORD(v23) = v9;
  v10 = 0;
  if ( a3->bottom - a3->top >= 0 )
    v10 = a3->bottom - a3->top;
  HIDWORD(v23) = v10;
  v25 = 0LL;
  v11 = CAnimationComponent::operator new();
  v24 = v11;
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v13 = CAnimationComponent::CAnimationComponent((__int64)v11, -1LL, 10LL, v12, (__int64)a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4DFu,
      0LL);
    return v14;
  }
  *(_DWORD *)(v13 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v25);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v25);
  if ( !RootVisualForDesktop )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4E5u,
      0LL);
    goto LABEL_28;
  }
  v16 = CTransitionVisualController::_SetDesktopId(a1, v25);
  v14 = v16;
  if ( v16 < 0 )
  {
    v21 = 1256;
  }
  else
  {
    v17 = CAnimatedTransitionVisual::Create(&v22);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v17,
        0x4EBu,
        0LL);
      v8 = v22;
      goto LABEL_28;
    }
    v8 = v22;
    if ( !v22 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x4ECu,
        0LL);
      goto LABEL_28;
    }
    v16 = CAnimatedTransitionVisual::SetVisual(v22, RootVisualForDesktop, 1, a3);
    v14 = v16;
    if ( v16 < 0 )
    {
      v21 = 1263;
    }
    else
    {
      v16 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v8, RootVisualForDesktop);
      v14 = v16;
      if ( v16 < 0 )
      {
        v21 = 1266;
      }
      else
      {
        v16 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v14 = v16;
        if ( v16 >= 0 )
        {
          CAnimatedTransitionVisual::SetBeginRect(v8, a3);
          CAnimatedTransitionVisual::SetEndRect(v8, a3);
          CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v8 + 8), v9, v10);
          *((_QWORD *)v8 + 111) = v23;
          CVisual::SetInterpolationMode((__int64)v8 + 8, 1LL, v18);
          v19 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
          CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v8, a4[18], v19);
          *((_BYTE *)v8 + 908) = CStoryboard::IsRTL();
          CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v13, v8);
          *(struct tagRECT *)(v13 + 88) = *a3;
          if ( *(_DWORD *)(v13 + 68) != 2 )
            *(_DWORD *)(v13 + 68) = 1;
          *((_QWORD *)v8 + 110) = 0LL;
          *a5 = v13;
          CBaseObject::AddRef((CBaseObject *)v13);
          goto LABEL_28;
        }
        v21 = 1267;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v16,
    v21,
    0LL);
LABEL_28:
  CBaseObject::Release((CBaseObject *)v13);
  if ( v8 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
  return v14;
}
