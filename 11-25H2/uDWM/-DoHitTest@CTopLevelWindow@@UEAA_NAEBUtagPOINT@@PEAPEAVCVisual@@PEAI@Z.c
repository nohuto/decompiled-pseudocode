/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016560
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180015D40 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016040 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180016860 (-TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
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
  RECT v32; // [rsp+38h] [rbp-41h] BYREF
  RECT rc; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v34[5]; // [rsp+58h] [rbp-21h] BYREF

  v31 = a4;
  *(_QWORD *)&v32.left = 0LL;
  v29 = 0;
  CContainerVisual::DoHitTest((CContainerVisual *)this, a2, (struct CVisual **)&v32, &v29);
  v7 = (struct CWindowData *)*((_QWORD *)this + 89);
  pt = *a2;
  CTopLevelWindow::TransformHitTestPointForUniformSpaceWindow(v8, v7, &pt);
  v10 = *(LONG **)&v32.left;
  v11 = v29;
  if ( *(_QWORD *)&v32.left && v29 == -2 && !*((_QWORD *)this + 98) )
  {
    v12 = pt;
    y = pt.y;
    if ( pt.x >= this[147] && pt.x < this[18] - this[148] && pt.y >= v9[28] && pt.y < this[149] )
      v11 = 2;
    *(_QWORD *)&rc.left = 0LL;
    v14 = v9[14] - v9[12];
    if ( v14 < 0 )
      v14 = 0;
    rc.right = v14;
    v15 = v9[15] - v9[13];
    if ( v15 < 0 )
      v15 = 0;
    rc.bottom = v15;
    if ( !PtInRect(&rc, pt) )
    {
      v11 = 18;
      if ( y < 0 )
        v11 = 2;
    }
    v16 = this[146];
    if ( (v16 & 0x20) != 0 )
    {
      if ( (v16 & 0x20000) != 0 )
        pt.x = this[18] - v12.x - 1;
      else
        pt.x = v12.x;
      v19 = 5LL;
      v34[0] = *((_QWORD *)this + 67);
      v34[1] = *((_QWORD *)this + 61);
      v34[2] = *((_QWORD *)this + 62);
      v34[3] = *((_QWORD *)this + 63);
      v20 = *((_QWORD *)this + 64);
      pt.y = y;
      v21 = (LONG **)v34;
      v34[4] = v20;
      do
      {
        v22 = *v21;
        if ( *v21 )
        {
          v32 = 0LL;
          v32.left = v22[16];
          v32.top = this[161];
          v32.right = v22[16] + v22[18];
          v32.bottom = v22[17] + v22[19];
          if ( v22 == *((LONG **)this + 67) )
          {
            v32.left = this[159];
          }
          else if ( v22 == *((LONG **)this + 64) )
          {
            v32.right = this[18] - this[160];
          }
          if ( PtInRect(&v32, pt) )
          {
            v11 = v22[32];
            v10 = v22;
          }
        }
        ++v21;
        --v19;
      }
      while ( v19 );
    }
    else if ( *((_QWORD *)this + 67) )
    {
      v23 = (CWindowData *)*((_QWORD *)this + 89);
      MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v23, 0x1Fu);
      v25 = MetricsForCaptionBar - GetSystemMetrics(46);
      v26 = (int)(v25 - CWindowData::GetMetricsForCaptionBar(v23, 0x32u)) / 2;
      v27 = 0;
      if ( v26 >= 0 )
        v27 = v26;
      if ( v27 > 0 )
      {
        v28 = (LONG *)*((_QWORD *)this + 67);
        v32.left = v28[16];
        v32.top = v28[17] - v27;
        v32.right = v28[16] + v28[18];
        v32.bottom = v28[17] + v27 + v28[19];
        if ( PtInRect(&v32, v12) )
        {
          v10 = (LONG *)*((_QWORD *)this + 67);
          v11 = v10[32];
        }
      }
    }
  }
  v17 = v31;
  *a3 = v10;
  *v17 = v11;
  return v10 != 0LL;
}
