/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800D0CB0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AA2D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CTouchVisual::Initialize((struct CContainerVisualProxy **)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x23u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 68) = 90;
    *((_DWORD *)this + 67) = 90;
    *(_QWORD *)((char *)this + 276) = *(_QWORD *)((char *)this + 268);
    *(_QWORD *)((char *)this + 284) = 0LL;
    *((_DWORD *)this + 73) = 100;
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    CVisual::SetOpacity(this, 0.0);
  }
  return v3;
}
