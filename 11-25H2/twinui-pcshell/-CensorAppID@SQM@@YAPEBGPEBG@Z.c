/*
 * XREFs of ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x180058560
 * Callers:
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x180057798 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18008E394 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803E357C (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18057AEE0 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z @ 0x18057B02C (-AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805812DC (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x18058675C (-SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z.c)
 *     ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x18058C850 (-SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapCo.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall SQM::CensorAppID(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v2;
}
