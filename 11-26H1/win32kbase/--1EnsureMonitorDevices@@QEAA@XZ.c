/*
 * XREFs of ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14000C3E0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140029454 (PruneModesByDisplayDeviceCaps.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401AD57C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401F7CE0 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401F7FB4 (DrvPVPGetFirstActiveMonitor.c)
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
