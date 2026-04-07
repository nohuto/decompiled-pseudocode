/*
 * XREFs of ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180002DDC
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180005D70 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800065E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::FadeOut(CDirectTouchVisual *this)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  int v7; // esi
  unsigned int v8; // eax

  CDirectTouchVisual::StopFadeTimeline(this);
  v2 = CTimeline<float>::operator new();
  if ( v2 )
    v6 = CTimeline<float>::CTimeline<float>(v2, v3, v4, v5, 0);
  else
    v6 = 0LL;
  *((_QWORD *)this + 39) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 357;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8, 0LL);
    CDirectTouchVisual::Stop(this);
    return (unsigned int)v7;
  }
  v7 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v7 < 0 )
  {
    v8 = 359;
    goto LABEL_8;
  }
  return (unsigned int)v7;
}
