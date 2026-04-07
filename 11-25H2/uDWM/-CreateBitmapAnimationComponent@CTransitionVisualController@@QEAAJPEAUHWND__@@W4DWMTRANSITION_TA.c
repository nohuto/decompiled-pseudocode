/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D1F2C
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800C9340 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180023604 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180027618 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008E550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800974B0 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A3DA8 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
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
      0x662u,
      0LL);
  }
  else
  {
    v14 = (CAnimatedTransitionVisual *)DefaultHeap::AllocClear(0xA0uLL);
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
        0x64Fu,
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
        0x651u,
        0LL);
      v6 = v18[0];
    }
    else
    {
      _mm_lfence();
      v6 = v18[0];
      CAnimatedTransitionVisual::SetBitmap(
        (CBaseObject **)v18[0],
        *(struct CBaseImageProxy ***)(*((_QWORD *)a1 + 19) + 56 * v13 + 48));
      *((_QWORD *)v6 + 113) = *(_QWORD *)(*(_QWORD *)(56 * v13 + *((_QWORD *)a1 + 19) + 48) + 24LL);
      *((_BYTE *)v11 + 72) = 1;
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v6, *(_DWORD *)(a5 + 72), a4);
      *((_BYTE *)v6 + 924) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect(
        (struct tagPOINT *)v6,
        (const struct tagRECT *)(56 * v13 + *((_QWORD *)a1 + 19) + 12LL));
      CAnimatedTransitionVisual::SetBeginRect(
        (struct tagPOINT *)v6,
        (const struct tagRECT *)(56 * v13 + *((_QWORD *)a1 + 19) + 28LL));
      CAnimationComponent::SetTransitionVisual(v11, v6);
      *a6 = v11;
      CMILRefCountBase::AddRef(v11);
    }
  }
  if ( v6 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v6 + 8));
  if ( v11 )
    CBaseObject::Release(v11);
  return v16;
}
