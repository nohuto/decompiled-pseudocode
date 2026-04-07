/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800D10D8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18006A510 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800D0DB0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800D1208 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800D13D0 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r9
  __int64 v4; // r9
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rax

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *((_DWORD *)this + 71) = 0;
  *(_QWORD *)((char *)this + 260) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize(this);
  v5 = DefaultHeap::AllocClear(0x78uLL);
  if ( v5 )
    v5 = CTimeline<float>::CTimeline<float>((__int64)v5, v6, v7, v8, 0);
  *((_QWORD *)this + 37) = v5;
  if ( !v5 )
  {
    v9 = -2147024882;
    v10 = 98;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    v11 = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 71) = 0;
    *(_QWORD *)((char *)this + 276) = v11;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v9 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v9 < 0 )
  {
    v10 = 100;
    goto LABEL_8;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2u);
  return 0LL;
}
