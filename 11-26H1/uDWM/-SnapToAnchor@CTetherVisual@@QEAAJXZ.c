/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800C88CC
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  CTimelineBase *v2; // rcx
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  int v8; // esi
  unsigned int v9; // eax

  v2 = (CTimelineBase *)*((_QWORD *)this + 34);
  if ( v2 )
    CTimelineBase::Release(v2);
  v3 = CTimeline<float>::operator new();
  if ( !v3 )
  {
    *((_QWORD *)this + 34) = 0LL;
    goto LABEL_8;
  }
  v7 = CTimeline<float>::CTimeline<float>((__int64)v3, v4, v5, v6, 2);
  *((_QWORD *)this + 34) = v7;
  if ( !v7 )
  {
LABEL_8:
    v8 = -2147024882;
    v9 = 260;
    goto LABEL_9;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v8 < 0 )
  {
    v9 = 262;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CTetherVisual::Stop(this);
  }
  return (unsigned int)v8;
}
