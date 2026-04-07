/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD684
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800CD360 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800CD7E4 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800CDC60 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r9
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // r9d

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)((char *)this + 228) = *v3;
  *((_DWORD *)this + 63) = 0;
  CTouchPressHoldVisual::_UpdateFinalSize(this);
  v4 = CTimeline<float>::operator new();
  if ( v4 )
    v4 = CTimeline<float>::CTimeline<float>((__int64)v4, v5, v6, v7, 0);
  *((_QWORD *)this + 34) = v4;
  if ( !v4 )
  {
    v8 = -2147024882;
    v9 = 96;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    *(_QWORD *)((char *)this + 244) = *(_QWORD *)((char *)this + 236);
    *(_QWORD *)((char *)this + 252) = 0LL;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v8 < 0 )
  {
    v9 = 98;
    goto LABEL_8;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2);
  return 0LL;
}
