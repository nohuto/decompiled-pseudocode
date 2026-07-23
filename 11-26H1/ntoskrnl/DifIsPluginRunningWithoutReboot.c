/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x14064F520
 * Callers:
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140C43630 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
