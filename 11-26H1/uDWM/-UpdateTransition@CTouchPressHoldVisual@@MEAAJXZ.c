/*
 * XREFs of ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CDB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800CD360 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD850 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateTransition(CTouchPressHoldVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  float v5; // xmm2_4
  float v6; // xmm1_4
  CTimelineBase *v7; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((float *)this + 64) = *(double *)(v2 + 48);
    if ( *(_BYTE *)(v2 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v2);
      *((_QWORD *)this + 34) = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
  {
    *((_DWORD *)this + 63) = (int)(float)*(double *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v3);
      *((_QWORD *)this + 36) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    v5 = *(double *)(v4 + 48);
    v6 = (float)*((int *)this + 60) * v5;
    *((_DWORD *)this + 61) = (int)(float)((float)*((int *)this + 59) * v5);
    *((_DWORD *)this + 62) = (int)v6;
    if ( *(_BYTE *)(v4 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v4);
      *((_QWORD *)this + 35) = 0LL;
    }
  }
  v7 = (CTimelineBase *)*((_QWORD *)this + 37);
  if ( !v7 )
    goto LABEL_13;
  if ( *((_BYTE *)v7 + 72) )
  {
    *((_DWORD *)this + 64) = 0;
    CTimelineBase::Release(v7);
    *((_QWORD *)this + 37) = 0LL;
LABEL_13:
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
  }
  if ( !*((_QWORD *)this + 34) && !*((_QWORD *)this + 35) && !*((_QWORD *)this + 36) && !*((_QWORD *)this + 37) )
  {
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
    CTouchPressHoldVisual::StopTimer((CTimelineBase **)this);
  }
  return 0LL;
}
