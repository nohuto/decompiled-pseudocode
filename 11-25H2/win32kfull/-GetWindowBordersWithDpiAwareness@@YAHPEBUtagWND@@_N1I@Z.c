/*
 * XREFs of ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC
 * Callers:
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140250420 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A81F8 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(const struct tagWND *a1, __int64 a2, char a3, unsigned int a4)
{
  int v5; // r8d
  unsigned int WindowDpiLastNotify; // ebx
  const struct tagWND *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // r14d
  int v14; // r15d
  int v15; // edx
  unsigned int v16; // esi
  int SystemMetricsForDpi; // ebp
  __int64 result; // rax
  __int64 v19; // rax

  v5 = 1;
  WindowDpiLastNotify = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(_DWORD *)(v8 + 288) & 0xF;
    if ( v9 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v7);
    }
    else if ( !v9
           && (v19 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 464LL) + 272LL);
    }
  }
  v10 = *((_QWORD *)v7 + 2);
  if ( *(_DWORD *)(v10 + 672) <= 0x9900u )
    v11 = *(_DWORD *)(v10 + 688);
  else
    v11 = 0;
  v12 = *((_QWORD *)v7 + 5);
  v13 = *(_DWORD *)(v12 + 24);
  v14 = *(_DWORD *)(v12 + 28);
  if ( (v13 & 0x100) != 0 )
  {
    v15 = 2;
  }
  else
  {
    v15 = 0;
    if ( (v13 & 0x20000) != 0 )
      v15 = v5;
  }
  v16 = v15 + 1;
  if ( (v14 & 0xC00000) == 0 && ((unsigned __int8)v13 & (unsigned __int8)v5) == 0 )
    v16 = v15;
  if ( (v11 & 0x10000000) != 0 || (v11 & 0x20000000) != 0 )
    SystemMetricsForDpi = 0;
  else
    SystemMetricsForDpi = RealGetSystemMetricsForDpi(92, WindowDpiLastNotify);
  if ( (v14 & 0x40000) != 0
    || (result = v16, SystemMetricsForDpi > 0) && (v14 & 0xC00000) == 0xC00000 && (v11 & 0x30000000) == 0 )
  {
    result = SystemMetricsForDpi
           + v16
           + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v11);
  }
  if ( a3 )
  {
    if ( (v13 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
