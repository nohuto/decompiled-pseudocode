/*
 * XREFs of ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x1402C3D40 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402C5058 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(const struct tagWND *a1, __int64 a2, char a3, unsigned int a4)
{
  int v5; // r8d
  unsigned int WindowDpiLastNotify; // ebx
  const struct tagWND *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rax
  int v12; // r14d
  int v13; // r12d
  unsigned int v14; // edi
  int v15; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int DpiDependentMetric; // eax

  v5 = 1;
  WindowDpiLastNotify = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *((_QWORD *)a1 + 5);
    a1 = (const struct tagWND *)(*(_DWORD *)(v8 + 288) & 0xF);
    if ( (_DWORD)a1 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v7);
    }
    else if ( !(_DWORD)a1
           && (v19 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 488LL)) != 0
           && (a1 = **(const struct tagWND ***)(v19 + 8), (*((_DWORD *)a1 + 16) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      a1 = *(const struct tagWND **)(*((_QWORD *)v7 + 2) + 456LL);
      WindowDpiLastNotify = *((unsigned __int16 *)a1 + 136);
    }
  }
  v9 = *((_QWORD *)v7 + 2);
  if ( *(_DWORD *)(v9 + 664) <= 0x9900u )
    v10 = *(_DWORD *)(v9 + 680);
  else
    v10 = 0;
  v11 = *((_QWORD *)v7 + 5);
  v12 = *(_DWORD *)(v11 + 24);
  v13 = *(_DWORD *)(v11 + 28);
  if ( (v12 & 0x100) != 0 )
  {
    v14 = 2;
  }
  else
  {
    v14 = 0;
    if ( (v12 & 0x20000) != 0 )
      v14 = v5;
  }
  if ( (v13 & 0xC00000) != 0 || ((unsigned __int8)v12 & (unsigned __int8)v5) != 0 )
    v14 += v5;
  if ( (v10 & 0x10000000) != 0 || (v10 & 0x20000000) != 0 )
  {
    v15 = 0;
  }
  else
  {
    v18 = *(_QWORD *)(W32GetUserSessionState(a1, v7) + 19904);
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(v18 + 6998) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19904) + 2400LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19904) + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheIndex(WindowDpiLastNotify) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, WindowDpiLastNotify);
      else
        DpiDependentMetric = GetDpiDependentMetric(29, WindowDpiLastNotify);
      v15 = DpiDependentMetric;
    }
  }
  if ( (v13 & 0x40000) != 0 || v15 > 0 && (v13 & 0xC00000) == 0xC00000 && (v10 & 0x30000000) == 0 )
    v14 += v15 + GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v10);
  if ( a3 && (v12 & 0x200) != 0 )
    v14 += 2;
  return v14;
}
