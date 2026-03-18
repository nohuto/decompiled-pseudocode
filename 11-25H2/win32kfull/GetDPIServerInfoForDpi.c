/*
 * XREFs of GetDPIServerInfoForDpi @ 0x140041CA8
 * Callers:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14003FC08 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     GetScaledLogFontForDpi @ 0x140041420 (GetScaledLogFontForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1400416A8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetWindowNCMetricsForDpi @ 0x1400418A8 (GetWindowNCMetricsForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetProcessDpiServerInfo @ 0x140042F48 (GetProcessDpiServerInfo.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 *     InitProcessSystemDpi @ 0x140245550 (InitProcessSystemDpi.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1401E71D4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int DpiCacheSlot; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagDPISERVERINFO *v7; // rbx

  v2 = a1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( v2 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(v2);
  if ( DpiCacheSlot == -1 )
    return GetSessionDpiServerInfo();
  v7 = (struct tagDPISERVERINFO *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 104 * (DpiCacheSlot + 49LL));
  EnsureServerInfoForDpi(v7, v2);
  return (__int64)v7;
}
