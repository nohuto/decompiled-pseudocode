/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1404E6FF8
 * Callers:
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IoInitSystem @ 0x140CC0C78 (IoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140C52D84 (HdlspKernelAddLogEntry.c)
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
