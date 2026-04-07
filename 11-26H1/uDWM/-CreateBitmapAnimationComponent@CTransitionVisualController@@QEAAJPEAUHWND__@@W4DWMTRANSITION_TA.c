/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE6B0
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800C340C (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180075FFC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180089760 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800965FC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBitmapAnimationComponent(
        CTransitionVisualController *a1,
        HWND a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        CAnimationComponent **a6)
{
  CAnimatedTransitionVisual *v6; // rsi
  CAnimationComponent *v11; // rbp
  int TransitionBitmapIndex; // eax
  __int64 v13; // r13
  CAnimatedTransitionVisual *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  CAnimatedTransitionVisual *v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v18[0] = 0LL;
  v11 = 0LL;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(a1, a2);
  v13 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
  {
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x65Cu,
      0LL);
  }
  else
  {
    v14 = (CAnimatedTransitionVisual *)CAnimationComponent::operator new();
    v18[1] = v14;
    if ( !v14
      || (v11 = (CAnimationComponent *)CAnimationComponent::CAnimationComponent((__int64)v14, (__int64)a2, a3, a4, a5)) == 0LL )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x649u,
        0LL);
      return v16;
    }
    v15 = CAnimatedTransitionVisual::Create(v18);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v15,
        0x64Bu,
        0LL);
      v6 = v18[0];
    }
    else
    {
      _mm_lfence();
      v6 = v18[0];
      CAnimatedTransitionVisual::SetBitmap(
        (CBaseObject **)v18[0],
        *(struct CBitmapSource **)(*((_QWORD *)a1 + 19) + 56 * v13 + 48));
      *((_QWORD *)v6 + 111) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 56 * v13 + 48) + 128LL);
      *((_BYTE *)v11 + 72) = 1;
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v6, *(_DWORD *)(a5 + 72), a4);
      *((_BYTE *)v6 + 908) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect(v6, (const struct tagRECT *)(56 * v13 + *((_QWORD *)a1 + 19) + 12LL));
      CAnimatedTransitionVisual::SetBeginRect(v6, (const struct tagRECT *)(56 * v13 + *((_QWORD *)a1 + 19) + 28LL));
      CAnimationComponent::SetTransitionVisual(v11, v6);
      *a6 = v11;
      CBaseObject::AddRef(v11);
    }
  }
  if ( v6 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v6 + 8));
  if ( v11 )
    CBaseObject::Release(v11);
  return v16;
}
