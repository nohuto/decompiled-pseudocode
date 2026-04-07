/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD260
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800A840C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CTouchVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x23u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 56) = 0;
    *((_DWORD *)this + 60) = 90;
    *((_DWORD *)this + 59) = 90;
    *(_QWORD *)((char *)this + 244) = *(_QWORD *)((char *)this + 236);
    *(_QWORD *)((char *)this + 252) = 0LL;
    *((_BYTE *)this + 260) = 0;
    *((_DWORD *)this + 66) = 100;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  return v3;
}
