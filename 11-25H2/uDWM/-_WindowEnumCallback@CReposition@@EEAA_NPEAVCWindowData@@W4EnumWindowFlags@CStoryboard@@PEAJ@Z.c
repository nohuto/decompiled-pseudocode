/*
 * XREFs of ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z @ 0x1800A3F60 (-SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800CA568 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CReposition::_WindowEnumCallback(CSlide *a1, struct CWindowData *a2, char a3, int *a4)
{
  CBaseObject *v4; // r10
  int v5; // ebx
  int v7; // eax
  struct CAnimationComponent *v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0;
  v9 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 170) & 0xFFF) == 0x2C )
  {
    v7 = CSlide::_SlideWindow(a1, a2, 1.0, &v9);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x736u, 0LL);
      v4 = v9;
    }
    else
    {
      CAnimatedTransitionVisual::SetOverrideMorphedBeginAlpha(*((CAnimatedTransitionVisual **)v9 + 5));
    }
  }
  *a4 = v5;
  if ( v4 )
    CBaseObject::Release(v4);
  return 1;
}
