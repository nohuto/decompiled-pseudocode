/*
 * XREFs of ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800C3730
 * Callers:
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800C38DC (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18006C7C0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800CF288 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        CBaseObject *a7,
        CBaseObject *a8)
{
  int GutterAnimationComponentsForRect; // eax
  unsigned int v9; // ebx

  if ( a7 )
    *(_QWORD *)a7 = 0LL;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  GutterAnimationComponentsForRect = CTransitionVisualController::CreateGutterAnimationComponentsForRect(
                                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
                                       a2);
  v9 = GutterAnimationComponentsForRect;
  if ( GutterAnimationComponentsForRect < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      GutterAnimationComponentsForRect,
      0x1614u,
      0LL);
  return v9;
}
