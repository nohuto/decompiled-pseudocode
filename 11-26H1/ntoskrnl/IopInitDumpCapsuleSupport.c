/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1405CC278
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140795BE8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1405CC2CC (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( !CapsuleTriageDumpBlockInitialized && !(unsigned __int8)IopIsBitlockerOn() )
  {
    CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(0x40uLL);
    if ( !CapsuleTriageDumpBlock )
      return 3221225626LL;
    CapsuleTriageDumpBlockInitialized = 1;
  }
  return 0LL;
}
