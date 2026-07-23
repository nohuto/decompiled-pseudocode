/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1405CC53C
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140795BE8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
