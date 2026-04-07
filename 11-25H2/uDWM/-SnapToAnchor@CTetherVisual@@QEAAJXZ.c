/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800CE920
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AAF14 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800CEAA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  CTimelineBase *v2; // rcx
  LPVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  int v8; // esi
  unsigned int v9; // eax

  v2 = (CTimelineBase *)*((_QWORD *)this + 44);
  if ( v2 )
    CTimelineBase::Release(v2);
  v3 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v3 )
  {
    *((_QWORD *)this + 44) = 0LL;
    goto LABEL_8;
  }
  v7 = CTimeline<float>::CTimeline<float>((__int64)v3, v4, v5, v6, 2);
  *((_QWORD *)this + 44) = v7;
  if ( !v7 )
  {
LABEL_8:
    v8 = -2147024882;
    v9 = 316;
    goto LABEL_9;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v8 < 0 )
  {
    v9 = 318;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CTetherVisual::Stop(this);
  }
  return (unsigned int)v8;
}
