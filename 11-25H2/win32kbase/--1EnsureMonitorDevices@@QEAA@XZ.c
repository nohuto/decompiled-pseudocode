/*
 * XREFs of ??1EnsureMonitorDevices@@QEAA@XZ @ 0x140120630
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14007F970 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140080A98 (PruneModesByDisplayDeviceCaps.c)
 *     DrvUpdateDisplayDriverParameters @ 0x14012292C (DrvUpdateDisplayDriverParameters.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x140139E70 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CE420 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401CE744 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall EnsureMonitorDevices::~EnsureMonitorDevices(EnsureMonitorDevices *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
