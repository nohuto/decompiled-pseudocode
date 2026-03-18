/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1405C99A8
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1405C99FC (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
