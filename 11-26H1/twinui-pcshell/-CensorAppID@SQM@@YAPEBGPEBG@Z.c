/*
 * XREFs of ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0
 * Callers:
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x18006FC9C (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18007CD18 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803ECBCC (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18059E530 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z @ 0x18059E680 (-AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805A4FC0 (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x1805AA6B8 (-SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z.c)
 *     ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x1805B09D0 (-SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapCo.c)
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
