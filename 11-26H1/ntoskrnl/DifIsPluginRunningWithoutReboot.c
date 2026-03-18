/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x14064B940
 * Callers:
 *     IopLoadUnloadDriver @ 0x140A264F0 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140C3D620 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
