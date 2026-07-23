/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140B52900
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return (__int64)ExpSysDbgLock.MutantListHead.Blink & 1;
}
