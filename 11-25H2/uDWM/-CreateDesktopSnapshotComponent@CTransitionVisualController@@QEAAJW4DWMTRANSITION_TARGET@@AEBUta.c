/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D2130
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800C7F30 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180023514 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180023604 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180026FD8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180027618 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008E550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        int *a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v8; // rbp
  int v9; // edx
  int v10; // eax
  int v11; // r13d
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  LPVOID v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  unsigned int v18; // esi
  struct CVisual *RootVisualForDesktop; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-68h]
  CAnimatedTransitionVisual *v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  LPVOID v28; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+98h] [rbp+10h]

  v8 = 0LL;
  v26 = 0LL;
  v9 = a3->right - a3->left;
  v10 = v9;
  if ( v9 < 0 )
    v10 = 0;
  LODWORD(v27) = v10;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v12 = a3->bottom - a3->top;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIDWORD(v27) = v13;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v29 = v14;
  v15 = DefaultHeap::AllocClear(0xA0uLL);
  v28 = v15;
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v17 = CAnimationComponent::CAnimationComponent((__int64)v15, -1LL, 10LL, v16, (__int64)a4);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4E1u,
      0LL);
    return v18;
  }
  *(_DWORD *)(v17 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           0LL);
  if ( !RootVisualForDesktop )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4E7u,
      0LL);
    goto LABEL_32;
  }
  v20 = CTransitionVisualController::_SetDesktopId(a1, 0LL);
  v18 = v20;
  if ( v20 < 0 )
  {
    v25 = 1258;
  }
  else
  {
    v21 = CAnimatedTransitionVisual::Create(&v26);
    v18 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v21,
        0x4EDu,
        0LL);
      v8 = v26;
      goto LABEL_32;
    }
    v8 = v26;
    if ( !v26 )
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x4EEu,
        0LL);
      goto LABEL_32;
    }
    v20 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v26, RootVisualForDesktop, 1, a3);
    v18 = v20;
    if ( v20 < 0 )
    {
      v25 = 1265;
    }
    else
    {
      v20 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v8, RootVisualForDesktop, a3);
      v18 = v20;
      if ( v20 < 0 )
      {
        v25 = 1268;
      }
      else
      {
        v20 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v18 = v20;
        if ( v20 >= 0 )
        {
          CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v8, a3);
          CAnimatedTransitionVisual::SetEndRect(v8, a3);
          CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v8 + 8), v11, v29);
          v22 = v27;
          *((_QWORD *)v8 + 113) = v27;
          CVisual::SetInterpolationMode((__int64 *)v8 + 1, 1);
          v23 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
          CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v8, a4[18], v23);
          *((_BYTE *)v8 + 924) = CStoryboard::IsRTL();
          CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v17, v8);
          *(struct tagRECT *)(v17 + 88) = *a3;
          if ( *(_DWORD *)(v17 + 68) != 2 )
            *(_DWORD *)(v17 + 68) = 1;
          *((_QWORD *)v8 + 112) = 0LL;
          *((_QWORD *)v8 + 113) = v22;
          *a5 = v17;
          CMILRefCountBase::AddRef((CMILRefCountBase *)v17);
          goto LABEL_32;
        }
        v25 = 1269;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v20,
    v25,
    0LL);
LABEL_32:
  CBaseObject::Release((CBaseObject *)v17);
  if ( v8 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
  return v18;
}
