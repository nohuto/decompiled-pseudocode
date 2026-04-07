/*
 * XREFs of ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800CFEE4
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800CF288 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180075FFC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800965FC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
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
  v9 = (CAnimatedTransitionVisual *)CAnimationComponent::operator new();
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
        0x60Fu,
        0LL);
    }
    else
    {
      CAnimatedTransitionVisual::SetBitmap((CBaseObject **)v15[0], *(struct CBitmapSource **)(a1 + 184));
      *((_QWORD *)v12 + 111) = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 128LL);
      *((_BYTE *)v10 + 72) = 1;
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(
        v12,
        *(_DWORD *)(*(_QWORD *)(a4 + 8) + 72LL),
        *(_DWORD *)a4);
      *((_BYTE *)v12 + 908) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect(v12, (const struct tagRECT *)(a4 + 16));
      CAnimatedTransitionVisual::SetEndRect(v12, (const struct tagRECT *)(a4 + 32));
      CAnimationComponent::SetTransitionVisual(v10, v12);
      *a5 = v10;
      CBaseObject::AddRef(v10);
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
      0x60Du,
      0LL);
  }
  return v13;
}
