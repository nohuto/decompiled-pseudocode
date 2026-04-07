/*
 * XREFs of ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18008821C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180030650 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800307E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::FadeOut(CDirectTouchVisual *this)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax
  int v7; // edi
  unsigned int v8; // eax

  CDirectTouchVisual::StopFadeTimeline(this);
  v2 = DefaultHeap::AllocClear(0x78uLL);
  if ( v2 )
    v6 = CTimeline<float>::CTimeline<float>((__int64)v2, v3, v4, v5, 0);
  else
    v6 = 0LL;
  *((_QWORD *)this + 43) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 357;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
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
