/*
 * XREFs of GetDpiCacheSlot @ 0x14004B9C0
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x140042FDC (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140049A78 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140049D18 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     NtUserGetActiveProcessesDpis @ 0x14004B8C0 (NtUserGetActiveProcessesDpis.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetOemBitmapInfoForDpi @ 0x140192A28 (GetOemBitmapInfoForDpi.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1401FB300 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x140296E90 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheSlot(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v5; // edx

  v2 = a1;
  v3 = -1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 6998LL) )
  {
    return 0;
  }
  else if ( v2 >= 96 && v2 == 24 * (v2 / 0x18u) )
  {
    v5 = (v2 - 72) / 24;
    if ( v5 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v5;
  }
  return v3;
}
