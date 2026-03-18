/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x14008A304
 * Callers:
 *     CitGetMonitorInfo @ 0x140089270 (CitGetMonitorInfo.c)
 *     NtUserGetDpiForMonitor @ 0x140089500 (NtUserGetDpiForMonitor.c)
 *     DrvGetCurrentDpiInfo @ 0x14008A19C (DrvGetCurrentDpiInfo.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1400CEA1C (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1401568E0 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x14015D57C (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401CB96C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2440);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2456);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2504);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2520);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
