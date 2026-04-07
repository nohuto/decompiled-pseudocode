/*
 * XREFs of ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD530
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

__int64 __fastcall CTouchPressHoldVisual::StartHold(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r9
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // r9d
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)((char *)this + 228) = *v3;
  CTouchPressHoldVisual::_UpdateFinalSize(this);
  *(_QWORD *)((char *)this + 244) = *(_QWORD *)((char *)this + 236);
  *((_DWORD *)this + 63) = 0;
  v4 = CTimeline<float>::operator new();
  if ( v4 )
    v8 = CTimeline<float>::CTimeline<float>((__int64)v4, v5, v6, v7, 0);
  else
    v8 = 0LL;
  *((_QWORD *)this + 34) = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 66;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    *(_QWORD *)((char *)this + 244) = *(_QWORD *)((char *)this + 236);
    *((_DWORD *)this + 64) = 1065353216;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v11 = CTimeline<float>::operator new();
  if ( v11 )
    v15 = CTimeline<float>::CTimeline<float>((__int64)v11, v12, v13, v14, 0);
  else
    v15 = 0LL;
  *((_QWORD *)this + 35) = v15;
  if ( !v15 )
  {
    v9 = -2147024882;
    v10 = 68;
    goto LABEL_14;
  }
  v9 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v9 < 0 )
  {
    v10 = 70;
    goto LABEL_14;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 1);
  return 0LL;
}
