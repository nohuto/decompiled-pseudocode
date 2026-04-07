/*
 * XREFs of ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CD3C4
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

__int64 __fastcall CTouchPressHoldVisual::StartAbort(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r9
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // r9d
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm1
  float v15; // xmm0_4

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
    v9 = 125;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 60));
    v15 = (float)*((int *)this + 59);
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 61) = (int)(float)(v15 * 0.25);
    *((_DWORD *)this + 62) = (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] * 0.25);
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v10 = CTimeline<float>::operator new();
  if ( v10 )
    v10 = CTimeline<float>::CTimeline<float>((__int64)v10, v11, v12, v13, 0);
  *((_QWORD *)this + 35) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v9 = 127;
    goto LABEL_12;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v8 < 0 )
  {
    v9 = 129;
    goto LABEL_12;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 3);
  return 0LL;
}
