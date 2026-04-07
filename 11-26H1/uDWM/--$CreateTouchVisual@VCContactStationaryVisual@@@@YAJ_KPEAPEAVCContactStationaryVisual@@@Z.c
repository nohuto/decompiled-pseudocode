/*
 * XREFs of ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x180003410
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800032EC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x180002CBC (--0CContactStationaryVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x180002D10 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CContainerVisual@@KAPEAX_K@Z @ 0x180085CD8 (--2CContainerVisual@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CContactStationaryVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  unsigned int v4; // edi
  CContactStationaryVisual *v5; // rax
  struct CImage **v6; // rax
  CBaseObject *v7; // rbx
  unsigned int v8; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Cu, 0LL);
    return v4;
  }
  v5 = (CContactStationaryVisual *)CContainerVisual::operator new(0x160uLL);
  if ( v5 )
  {
    v6 = (struct CImage **)CContactStationaryVisual::CContactStationaryVisual(v5, a1);
    v7 = (CBaseObject *)v6;
    if ( v6 )
    {
      v4 = CContactStationaryVisual::Initialize(v6);
      if ( (v4 & 0x80000000) == 0 )
      {
        *a2 = v7;
        return v4;
      }
      v8 = 66;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v4 = -2147024882;
  v8 = 64;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v8, 0LL);
  if ( v7 )
    CBaseObject::Release(v7);
  return v4;
}
