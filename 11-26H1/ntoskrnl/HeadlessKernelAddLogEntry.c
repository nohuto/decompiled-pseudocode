/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1404EDA18
 * Callers:
 *     PnpBootDeviceWait @ 0x1405D85A4 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IoInitSystem @ 0x140CBAC00 (IoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopMountBootLayerCallout @ 0x140CBDC50 (IopMountBootLayerCallout.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140C4CD84 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
