/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C25C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800ADB70 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  CBaseObject *v3; // rbx
  int v6; // eax
  CAnimatedTransitionVisual **v7; // rdi
  int DesktopThumbnail; // eax
  int v9; // eax
  CBaseObject *v11; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  if ( (a3 & 0x20000000) != 0 && (a3 & 0xFFFu) - 38 <= 1 )
  {
    v6 = CTransitionVisualController::CreateDesktopAnimationComponent(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
           (struct CWindowData *)a2,
           2,
           (const struct tagRECT *)(a2 + 748),
           1,
           1,
           a1,
           &v11);
    v7 = (CAnimatedTransitionVisual **)v11;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0xEC3u, 0LL);
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect(
        *((CAnimatedTransitionVisual **)v11 + 5),
        (const struct tagRECT *)(a2 + 764));
      CAnimatedTransitionVisual::SetEndRect(v7[5], (const struct tagRECT *)(a2 + 764));
      DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v12);
      if ( DesktopThumbnail < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          DesktopThumbnail,
          0xEC6u,
          0LL);
        v3 = v12;
      }
      else
      {
        v3 = v12;
        CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v7[5], v12);
        v9 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            v9,
            0xEC9u,
            0LL);
        }
        else
        {
          *((_QWORD *)a1 + 23) = v7;
          CBaseObject::AddRef((CBaseObject *)v7);
        }
      }
    }
    if ( v3 )
      CBaseObject::Release(v3);
    if ( v7 )
      CBaseObject::Release((CBaseObject *)v7);
  }
  return 0LL;
}
