/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1400174A8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     DpiSetTargetAdjustedColorimetry2 @ 0x140017F98 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiProcessOpmVmBusRequest @ 0x140091C9C (DpiProcessOpmVmBusRequest.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x140193BEC (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140243508 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetMonitorColorimetryOverride @ 0x140255CF8 (DpiGetMonitorColorimetryOverride.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x140255E44 (DpiGetMonitorNativeTimingOverride.c)
 *     DpiPdoPollingWorkItem @ 0x140256B00 (DpiPdoPollingWorkItem.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x14027E960 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     DpiPdoIsChildConnected @ 0x140319F04 (DpiPdoIsChildConnected.c)
 *     DpEvalAcpiMethod @ 0x1403B1CC0 (DpEvalAcpiMethod.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1404172A0 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1404260D8 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 3600);
  v3 = *(_QWORD **)(a1 + 3600);
  while ( v3 != v2 )
  {
    result = v3 - 4;
    v3 = (_QWORD *)*v3;
    if ( *((_DWORD *)result + 6) == a2 )
      return result;
  }
  return 0LL;
}
