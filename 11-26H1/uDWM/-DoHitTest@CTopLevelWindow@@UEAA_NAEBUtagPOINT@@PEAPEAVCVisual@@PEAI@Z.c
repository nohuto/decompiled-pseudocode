/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016940
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180015050 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180016E30 (-TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(LONG *this, const struct tagPOINT *a2, LONG **a3, unsigned int *a4)
{
  struct CWindowData *v7; // rdx
  CTopLevelWindow *v8; // rcx
  _DWORD *v9; // r9
  LONG *v10; // r13
  unsigned int v11; // r15d
  POINT v12; // rbx
  int y; // edi
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  unsigned int *v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  LONG **v21; // rdi
  LONG *v22; // rbx
  CWindowData *v23; // rdi
  int MetricsForCaptionBar; // esi
  int v25; // esi
  int v26; // eax
  int v27; // edx
  LONG *v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-59h] BYREF
  POINT pt; // [rsp+28h] [rbp-51h] BYREF
  unsigned int *v31; // [rsp+30h] [rbp-49h]
  _QWORD v32[5]; // [rsp+38h] [rbp-41h] BYREF
  RECT v33; // [rsp+60h] [rbp-19h] BYREF
  RECT rc; // [rsp+70h] [rbp-9h] BYREF

  v31 = a4;
  *(_QWORD *)&v33.left = 0LL;
  v29 = 0;
  CContainerVisual::DoHitTest((CContainerVisual *)this, a2, (struct CVisual **)&v33, &v29);
  v7 = (struct CWindowData *)*((_QWORD *)this + 87);
  pt = *a2;
  CTopLevelWindow::TransformHitTestPointForUniformSpaceWindow(v8, v7, &pt);
  v10 = *(LONG **)&v33.left;
  v11 = v29;
  if ( *(_QWORD *)&v33.left && v29 == -2 && !*((_QWORD *)this + 93) )
  {
    v12 = pt;
    y = pt.y;
    if ( pt.x >= this[143] && pt.x < this[16] - this[144] && pt.y >= v9[28] && pt.y < this[145] )
      v11 = 2;
    *(_QWORD *)&rc.left = 0LL;
    v14 = 0;
    if ( v9[14] - v9[12] >= 0 )
      v14 = v9[14] - v9[12];
    rc.right = v14;
    v15 = 0;
    if ( v9[15] - v9[13] >= 0 )
      v15 = v9[15] - v9[13];
    rc.bottom = v15;
    if ( !PtInRect(&rc, pt) )
    {
      v11 = 18;
      if ( y < 0 )
        v11 = 2;
    }
    v16 = this[142];
    if ( (v16 & 0x20) != 0 )
    {
      if ( (v16 & 0x20000) != 0 )
        pt.x = this[16] - v12.x - 1;
      else
        pt.x = v12.x;
      v19 = 5LL;
      v32[0] = *((_QWORD *)this + 65);
      v32[1] = *((_QWORD *)this + 59);
      v32[2] = *((_QWORD *)this + 60);
      v32[3] = *((_QWORD *)this + 61);
      v20 = *((_QWORD *)this + 62);
      pt.y = y;
      v21 = (LONG **)v32;
      v32[4] = v20;
      do
      {
        v22 = *v21;
        if ( *v21 )
        {
          v33 = 0LL;
          v33.left = v22[14];
          v33.top = this[157];
          v33.right = v22[14] + v22[16];
          v33.bottom = v22[15] + v22[17];
          if ( v22 == *((LONG **)this + 65) )
          {
            v33.left = this[155];
          }
          else if ( v22 == *((LONG **)this + 62) )
          {
            v33.right = this[16] - this[156];
          }
          if ( PtInRect(&v33, pt) )
          {
            v11 = v22[30];
            v10 = v22;
          }
        }
        ++v21;
        --v19;
      }
      while ( v19 );
    }
    else if ( *((_QWORD *)this + 65) )
    {
      v23 = (CWindowData *)*((_QWORD *)this + 87);
      MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v23, 31);
      v25 = MetricsForCaptionBar - GetSystemMetrics(46);
      v26 = (int)(v25 - CWindowData::GetMetricsForCaptionBar(v23, 50)) / 2;
      v27 = 0;
      if ( v26 >= 0 )
        v27 = v26;
      if ( v27 > 0 )
      {
        v28 = (LONG *)*((_QWORD *)this + 65);
        v33.left = v28[14];
        v33.top = v28[15] - v27;
        v33.right = v28[14] + v28[16];
        v33.bottom = v28[15] + v27 + v28[17];
        if ( PtInRect(&v33, v12) )
        {
          v10 = (LONG *)*((_QWORD *)this + 65);
          v11 = v10[30];
        }
      }
    }
  }
  v17 = v31;
  *a3 = v10;
  *v17 = v11;
  return v10 != 0LL;
}
