/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908
 * Callers:
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800296AC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002AEF4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18006D6A4 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180032AE8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // ebx
  CBaseObject *v4; // rsi
  CBaseObject *v5; // r14
  int v7; // eax
  int v8; // eax
  CContainerVisual *v9; // rax
  CContainerVisual *v10; // rax
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  int v13; // eax
  int v14; // eax
  CBaseObject ***OverlayRootVisualForDesktop; // rbx
  unsigned __int64 v16; // rdx
  CWindowList *v17; // rcx
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  CContainerVisual *v20; // rax
  int v21; // eax
  CBaseObject *v22; // [rsp+60h] [rbp+30h] BYREF
  CBaseObject *v23; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  if ( !v2 )
    goto LABEL_2;
  v24 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v24) )
  {
    v14 = CTransitionVisualController::_SetDesktopId(this, v24);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v14,
        0x260u,
        0LL);
      goto LABEL_14;
    }
LABEL_2:
    if ( *((_QWORD *)this + 1) )
      goto LABEL_3;
    v13 = CContainerVisual::Create(&v22);
    v3 = v13;
    if ( v13 >= 0 )
    {
      OverlayRootVisualForDesktop = (CBaseObject ***)CWindowList::GetOverlayRootVisualForDesktop(
                                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                                       *((_QWORD *)this + 12),
                                                       0);
      v16 = *((_QWORD *)this + 12);
      v17 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
      if ( OverlayRootVisualForDesktop )
      {
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v17, v16);
        v4 = v22;
        inserted = CContainerVisual::InsertChildBefore(
                     RenderTargetRootVisualForDesktop,
                     (CBaseObject ***)v22,
                     OverlayRootVisualForDesktop);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            inserted,
            0x269u,
            0LL);
          goto LABEL_14;
        }
      }
      else
      {
        v20 = CWindowList::GetRenderTargetRootVisualForDesktop(v17, v16);
        v4 = v22;
        v21 = CContainerVisual::AddChild(v20, v22);
        v3 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v21,
            0x26Du,
            0LL);
          goto LABEL_14;
        }
      }
      *((_QWORD *)this + 1) = v4;
      if ( v4 )
        CBaseObject::AddRef(v4);
LABEL_3:
      if ( *((_QWORD *)this + 2) )
        goto LABEL_4;
      v7 = CContainerVisual::Create(&v23);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v7,
          0x274u,
          0LL);
        v5 = v23;
      }
      else
      {
        v5 = v23;
        v8 = CContainerVisual::AddChild(*((CContainerVisual **)this + 1), v23);
        v3 = v8;
        if ( v8 >= 0 )
        {
          *((_QWORD *)this + 2) = v5;
          if ( v5 )
            CBaseObject::AddRef(v5);
          goto LABEL_4;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v8,
          0x275u,
          0LL);
      }
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v13,
      0x265u,
      0LL);
    v4 = v22;
LABEL_14:
    if ( v4 )
    {
      CContainerVisual::RemoveAllChildren(v4);
      v9 = CWindowList::GetRenderTargetRootVisualForDesktop(
             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
             *((_QWORD *)this + 12));
      CContainerVisual::RemoveChild(v9, v4);
    }
    if ( v5 )
    {
      CContainerVisual::RemoveAllChildren(*((CContainerVisual **)this + 1));
      v10 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
              *((_QWORD *)this + 12));
      CContainerVisual::RemoveChild(v10, *((struct CVisual **)this + 1));
    }
    goto LABEL_18;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    -2147467259,
    0x25Du,
    0LL);
LABEL_18:
  v11 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 1) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_4:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}
