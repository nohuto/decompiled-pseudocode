/*
 * XREFs of ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800D2D88
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800D2490 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180023604 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180027618 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008E550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A3DA8 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_CreateSingleGutterAnimationComponent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        CAnimationComponent **a5)
{
  CAnimatedTransitionVisual *v9; // rax
  CAnimationComponent *v10; // rsi
  int v11; // eax
  CAnimatedTransitionVisual *v12; // rdi
  unsigned int v13; // ebx
  CAnimatedTransitionVisual *v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v9 = (CAnimatedTransitionVisual *)DefaultHeap::AllocClear(0xA0uLL);
  v15[1] = v9;
  if ( v9
    && (v10 = (CAnimationComponent *)CAnimationComponent::CAnimationComponent(
                                       (__int64)v9,
                                       a2,
                                       a3,
                                       *(_DWORD *)a4,
                                       *(_QWORD *)(a4 + 8))) != 0LL )
  {
    v11 = CAnimatedTransitionVisual::Create(v15);
    v12 = v15[0];
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v11,
        0x615u,
        0LL);
    }
    else
    {
      CAnimatedTransitionVisual::SetBitmap((CBaseObject **)v15[0], *(struct CBaseImageProxy ***)(a1 + 184));
      *((_QWORD *)v12 + 113) = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      *((_BYTE *)v10 + 72) = 1;
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(
        v12,
        *(_DWORD *)(*(_QWORD *)(a4 + 8) + 72LL),
        *(_DWORD *)a4);
      *((_BYTE *)v12 + 924) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v12, (const struct tagRECT *)(a4 + 16));
      CAnimatedTransitionVisual::SetEndRect(v12, (const struct tagRECT *)(a4 + 32));
      CAnimationComponent::SetTransitionVisual(v10, v12);
      *a5 = v10;
      CMILRefCountBase::AddRef(v10);
    }
    if ( v12 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v12 + 8));
    CBaseObject::Release(v10);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x613u,
      0LL);
  }
  return v13;
}
