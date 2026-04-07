/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180002A30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800064E0 (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180006558 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800065E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800134C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm8_4
  float v3; // xmm6_4
  __int64 v4; // rax
  _BYTE *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // ecx
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm3_4
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 40) )
    goto LABEL_2;
  v10 = *((_QWORD *)this + 38);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 74);
    if ( *(_BYTE *)(v10 + 72) )
    {
      if ( (v11 & 8) != 0 )
      {
        v3 = FLOAT_1_0;
        goto LABEL_14;
      }
    }
    else if ( (v11 & 1) != 0 )
    {
      v3 = (float)((float)*(double *)(v10 + 48) * (float)(1.0 - *((float *)this + 68))) + *((float *)this + 68);
LABEL_14:
      v12 = *((float *)this + 65);
      v13 = *((float *)this + 71);
      v14 = *(double *)(v10 + 48);
      if ( v12 < v14 )
        v15 = (float)((float)((float)(v14 - v12) / *((float *)this + 66)) * (float)(*((float *)this + 72) - v13)) + v13;
      else
        v15 = (float)((float)(v14 / v12) * (float)(v13 - *((float *)this + 70))) + *((float *)this + 70);
      CDirectTouchVisual::UpdateLocationWithScalar(
        this,
        (const struct tagPOINT *)this + 28,
        (const struct tagRECT *)((char *)this + 232),
        v15);
      goto LABEL_3;
    }
    v3 = 0.0;
    goto LABEL_14;
  }
  if ( (*((_BYTE *)this + 296) & 8) == 0 )
  {
LABEL_2:
    v3 = 0.0;
    goto LABEL_3;
  }
  v3 = FLOAT_1_0;
LABEL_3:
  v4 = *((_QWORD *)this + 39);
  v5 = (char *)this + 328;
  if ( v4 )
  {
    v2 = *(double *)(v4 + 48);
  }
  else if ( *v5 )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v3));
  v6 = *((_QWORD *)this + 38);
  if ( v6 && *(_BYTE *)(v6 + 72) )
    CDirectTouchVisual::StopDownTimeline(this);
  v7 = *((_QWORD *)this + 39);
  if ( v7 && *(_BYTE *)(v7 + 72) )
  {
    *v5 = 1;
    CDirectTouchVisual::StopFadeTimeline(this);
  }
  v8 = *((_QWORD *)this + 40);
  if ( v8 && *(_BYTE *)(v8 + 72) )
  {
    CDirectTouchVisual::StopDownDelayTimeline(this);
    v16 = CTimeline<float>::operator new();
    if ( v16 )
      v16 = CTimeline<float>::CTimeline<float>(v16, v17, v18, v19, 0);
    *((_QWORD *)this + 38) = v16;
  }
  if ( !*((_QWORD *)this + 38) && !*((_QWORD *)this + 39) && !*((_QWORD *)this + 40) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
